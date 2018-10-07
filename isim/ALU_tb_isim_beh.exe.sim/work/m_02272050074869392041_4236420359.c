/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/media/ritik/Ritik/cse_work/verilog/calculator/ALU_tb.v";
static unsigned int ng1[] = {15U, 0U};
static unsigned int ng2[] = {3U, 0U};
static const char *ng3 = "input.txt";
static int ng4[] = {0, 0};
static const char *ng5 = "output.txt";
static const char *ng6 = "w";
static const char *ng7 = "%b\n";



static void Initial_45_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 3160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);

LAB4:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2968);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1928);
    xsi_vlogfile_readmemb(ng3, 0, t2, 0, 0, 0, 0);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2968);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 1928);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 1928);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t5, 10, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 1608);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 4);
    t14 = (t0 + 1448);
    xsi_vlogvar_assign_value(t14, t5, 4, 0, 4);
    t15 = (t0 + 1768);
    xsi_vlogvar_assign_value(t15, t5, 8, 0, 2);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2968);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(92, ng0);
    *((int *)t5) = xsi_vlogfile_file_open_of_cname_ctype(ng5, ng6);
    t2 = (t5 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t5, 0, 0, 32);
    xsi_set_current_line(95, ng0);

LAB8:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2968);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 1, ng7, 2, t0, (char)118, t7, 7);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t4));
    goto LAB1;

}


extern void work_m_02272050074869392041_4236420359_init()
{
	static char *pe[] = {(void *)Initial_45_0};
	xsi_register_didat("work_m_02272050074869392041_4236420359", "isim/ALU_tb_isim_beh.exe.sim/work/m_02272050074869392041_4236420359.didat");
	xsi_register_executes(pe);
}
