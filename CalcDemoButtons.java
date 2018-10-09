import java.applet.Applet;
import java.applet.*;
import java.awt.*;
import java.io.*; 
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;
import java.io.FileWriter;
import java.io.FileReader;
import java.io.PrintWriter;
import java.io.IOException; 
// import java.io.BufferedWriter; 
// import java.io.IOStream; 
/*
<applet code = "Calculator" width=300 height=300>
</applet>
 */
 
public class CalcDemoButtons extends Applet implements ActionListener
{
    boolean isNewString;
    int a, b;
    Object result;
    TextField textField;
    TextField textFieldA;
    TextField textFieldB;
	TextField textFieldC;
    TextField textFieldD;
    TextField textFieldE;
	// TextField textFieldF;
    char operator;
	int c;
	FileWriter writer; 
	FileReader fr;
	String s,line;
	Button button[] = new Button[10];
    ArrayList<Button> operators = new ArrayList<>();

    public void init(){
        Color color = new Color(10, 13, 46);
        setBackground(color);
        setFont(new Font("Dialog", Font.BOLD, 12));

        textField  = new TextField();
        textFieldA = new TextField();
		textFieldB = new TextField();
        textFieldC = new TextField();
		textFieldD = new TextField();
        textFieldE = new TextField();
		// textFieldF = new TextField();
		
        setLayout(new GridLayout(4,5));

        add(textField);
        add(textFieldA);
		add(textFieldB);
		add(textFieldC);
		add(textFieldD);
		add(textFieldE);
		// add(textFieldF);
        textField.addActionListener(this);

        for (int i = 0; i <10 ; i++)
        {
            button[i] = new Button("" + i);
            add((button[i]));
            button[i].addActionListener(this);
        }

        operators.add(new Button("+"));
        operators.add(new Button("-"));
        operators.add(new Button("~"));
        operators.add(new Button("|"));
        operators.add(new Button("clear"));
        operators.add(new Button("clear All"));
        operators.add(new Button("SetOp"));
		operators.add(new Button("GetRes"));
 
 //here
 
        for(Button x : operators)
        {
            add(x);
            x.addActionListener(this);
        }
    }
    @Override
    public void actionPerformed(ActionEvent ae)
    {
        String str = ae.getActionCommand();
        char ch = str.charAt(0);
        if(isNewString)
        {
            textField.setText("");
            isNewString = false;
        }

        if (Character.isDigit(ch)&ch !='0')
            textField.setText(textField.getText() + str);
        else{
            if(str.equals("+"))
            {
                a = Integer.parseInt(textField.getText());
                operator = '+';
                textField.setText("");
                textFieldA.setText("a: " + a);
            } else if (str.equals("-")) {
                a = Integer.parseInt(textField.getText());
                operator = '-';
                textField.setText("");
                textFieldA.setText("a: " + a);
            } else if (str.equals("~")) {
                a = Integer.parseInt(textField.getText());
                operator = '~';
                textField.setText("");
                textFieldA.setText("a: " + a);
            } else if (str.equals("|")) {
                a = Integer.parseInt(textField.getText());
                operator = '|';
                textField.setText("");
                textFieldA.setText("a: " + a);
            }
        }
				
		//tohere
		//calculations
		try {
            writer = new FileWriter("Input.txt", false);
           }
		   catch (IOException e) {
            e.printStackTrace();
           }
		
		
        if(str.equals("SetOp"))
        {
			
            b = Integer.parseInt(textField.getText());
            if (operator == '+')
			{
                 try {
            // OutputStream output = new BufferedOutputStream("Data2.txt");
            // BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(output));
			
			writer.write("00");
           }
		   catch (IOException e) {
            e.printStackTrace();
           }
		   }
		   
            else if (operator == '-'){
                 try {
            
			writer.write("01");
           }
		   catch (IOException e) {
            e.printStackTrace();
           }
		   }
		   
		    else if (operator == '|'){
		    try {
            
			writer.write("10");

           }
		   catch (IOException e) {
            e.printStackTrace();
           }
		   }    
		   
            else if (operator == '~'){
                   try {
			writer.write("11");
            
           }
		   catch (IOException e) {
            e.printStackTrace();
           }
		   }
		   
            textField.setText("" + result);
            isNewString = true;
			
		    try {
			switch (a) {
		 case 0:
           writer.write("0000");
           break;
         case 1:
           writer.write("0001");
           break;
         case 2:
           writer.write("0010");
	       break;
         case 3:
          writer.write("0011");
           break;
         case 4:
           writer.write("0100");
           break;
         case 5:
           writer.write("0101");
           break;
         case 6:
           writer.write("0110");
           break;
         case 7:
           writer.write("0111");
           break;
		 case 8:
           writer.write("1000");
           break;
		 case 9:
           writer.write("1001");
           break;         
          }
	     switch (b) {
		 case 0:
           writer.write("0000");
           break;
         case 1:
           writer.write("0001");
           break;
         case 2:
           writer.write("0010");
	   break;
         case 3:
          writer.write("0011");
           break;
         case 4:
           writer.write("0100");
           break;
         case 5:
           writer.write("0101");
           break;
         case 6:
           writer.write("0110");
           break;
         case 7:
           writer.write("0111");
           break;
		 case 8:
           writer.write("1000");
           break;
		 case 9:
           writer.write("1001");
           break;         
         }
		 writer.close();
            }
		    catch (IOException e) {
            e.printStackTrace();
            }           			
		} 
		
		if(str.equals("GetRes")){
			try{	
            FileReader fr = new FileReader("Output.txt");
			s = "";
			line = "";
            // Always wrap FileReader in BufferedReader.
            BufferedReader bufferedReader = new BufferedReader(fr);

            while((s = bufferedReader.readLine()) != null) {
                line = s;
            }   

            // Always close files.
            bufferedReader.close();	
			}
			 catch (IOException e) {
            e.printStackTrace();
            }
			switch (line) {
		   case "0000001":
		   result = 0;
           break;
		   case "1001111":
		   result = 1;
           break;
		   case "0010010":
		   result = 2;
           break;
		   case "0000110":
		   result = 3;
           break;
		   case "1001100":
		   result = 4;
           break;
		   case "0100100":
		   result = 5;
           break;
		   case "0100000":
		   result = 6;
           break;
		   case "0001111":
		   result = 7;
           break;
		   case "0000000":
		   result = 8;
           break;
		   case "0000100":
		   result = 9;
           break;         
          }

		  textFieldB.setText("result: " + result);
			
			
		}
		 //clear
        if(str.equals("clear"))
            textField.setText("");

        if(str.equals("clear All"))
        {
            textField.setText("");
            textFieldA.setText("");
			textFieldB.setText("");
            textFieldC.setText("");
			textFieldD.setText("");
            textFieldE.setText("");
			// textFieldF.setText("");
        }
    }			
}
