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
static const char *ng0 = "/media/ritik/Ritik/cse_work/verilog/calculator/Add.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static const char *ng5 = "/media/ritik/Ritik/cse_work/verilog/calculator/ALU.v";
static unsigned int ng6[] = {0U, 0U};
static unsigned int ng7[] = {1U, 0U};
static unsigned int ng8[] = {2U, 0U};
static unsigned int ng9[] = {3U, 0U};



static int sp_Add(char *t1, char *t2)
{
    char t11[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(6, ng0);

LAB5:    xsi_set_current_line(7, ng0);
    t5 = (t1 + 3656);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 3816);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 4, t7, 4, t10, 4);
    t12 = (t1 + 3976);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_Sub(char *t1, char *t2)
{
    char t11[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(15, ng0);

LAB5:    xsi_set_current_line(16, ng0);
    t5 = (t1 + 4136);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 4296);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 4, t7, 4, t10, 4);
    t12 = (t1 + 4456);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_Or(char *t1, char *t2)
{
    char t11[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1712);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(24, ng0);

LAB5:    xsi_set_current_line(25, ng0);
    t5 = (t1 + 4616);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 4776);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t10);
    t14 = (t12 | t13);
    *((unsigned int *)t11) = t14;
    t15 = (t7 + 4);
    t16 = (t10 + 4);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t15);
    t19 = *((unsigned int *)t16);
    t20 = (t18 | t19);
    *((unsigned int *)t17) = t20;
    t21 = *((unsigned int *)t17);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB6;

LAB7:
LAB8:    t39 = (t1 + 4936);
    xsi_vlogvar_assign_value(t39, t11, 0, 0, 4);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    t23 = *((unsigned int *)t11);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t11) = (t23 | t24);
    t25 = (t7 + 4);
    t26 = (t10 + 4);
    t27 = *((unsigned int *)t25);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t30 = (t29 & t28);
    t31 = *((unsigned int *)t26);
    t32 = (~(t31));
    t33 = *((unsigned int *)t10);
    t34 = (t33 & t32);
    t35 = (~(t30));
    t36 = (~(t34));
    t37 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t37 & t35);
    t38 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t38 & t36);
    goto LAB8;

}

static int sp_twoscomp(char *t1, char *t2)
{
    char t8[8];
    char t18[8];
    char t26[8];
    char t47[8];
    char t78[8];
    char t82[8];
    char t111[8];
    char t120[8];
    char t152[8];
    char t181[8];
    char t189[8];
    char t215[8];
    char t242[8];
    char t246[8];
    char t275[8];
    char t284[8];
    char t316[8];
    char t345[8];
    char t358[8];
    char t361[8];
    char t387[8];
    char t418[8];
    char t422[8];
    char t448[8];
    char t480[8];
    char t509[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    int t25;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t79;
    char *t80;
    char *t81;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    char *t109;
    char *t110;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    int t144;
    int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    char *t156;
    char *t157;
    char *t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    char *t166;
    char *t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    char *t180;
    char *t182;
    char *t183;
    char *t184;
    char *t185;
    char *t186;
    unsigned int t187;
    int t188;
    unsigned int t190;
    char *t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    char *t199;
    char *t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    char *t219;
    char *t220;
    char *t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    char *t229;
    char *t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    int t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    char *t243;
    char *t244;
    char *t245;
    char *t247;
    char *t248;
    unsigned int t249;
    unsigned int t250;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    char *t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    unsigned int t259;
    unsigned int t260;
    char *t261;
    char *t262;
    char *t263;
    unsigned int t264;
    unsigned int t265;
    unsigned int t266;
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    char *t272;
    char *t273;
    char *t274;
    char *t276;
    char *t277;
    unsigned int t278;
    unsigned int t279;
    unsigned int t280;
    unsigned int t281;
    unsigned int t282;
    unsigned int t283;
    unsigned int t285;
    unsigned int t286;
    unsigned int t287;
    char *t288;
    char *t289;
    char *t290;
    unsigned int t291;
    unsigned int t292;
    unsigned int t293;
    unsigned int t294;
    unsigned int t295;
    unsigned int t296;
    unsigned int t297;
    char *t298;
    char *t299;
    unsigned int t300;
    unsigned int t301;
    unsigned int t302;
    unsigned int t303;
    unsigned int t304;
    unsigned int t305;
    unsigned int t306;
    unsigned int t307;
    int t308;
    int t309;
    unsigned int t310;
    unsigned int t311;
    unsigned int t312;
    unsigned int t313;
    unsigned int t314;
    unsigned int t315;
    unsigned int t317;
    unsigned int t318;
    unsigned int t319;
    char *t320;
    char *t321;
    char *t322;
    unsigned int t323;
    unsigned int t324;
    unsigned int t325;
    unsigned int t326;
    unsigned int t327;
    unsigned int t328;
    unsigned int t329;
    char *t330;
    char *t331;
    unsigned int t332;
    unsigned int t333;
    unsigned int t334;
    int t335;
    unsigned int t336;
    unsigned int t337;
    unsigned int t338;
    int t339;
    unsigned int t340;
    unsigned int t341;
    unsigned int t342;
    unsigned int t343;
    char *t344;
    char *t346;
    char *t347;
    char *t348;
    char *t349;
    char *t350;
    unsigned int t351;
    int t352;
    unsigned int t353;
    unsigned int t354;
    unsigned int t355;
    unsigned int t356;
    unsigned int t357;
    char *t359;
    char *t360;
    char *t362;
    char *t363;
    unsigned int t364;
    unsigned int t365;
    unsigned int t366;
    unsigned int t367;
    unsigned int t368;
    unsigned int t369;
    char *t370;
    unsigned int t371;
    unsigned int t372;
    unsigned int t373;
    unsigned int t374;
    unsigned int t375;
    char *t376;
    char *t377;
    char *t378;
    unsigned int t379;
    unsigned int t380;
    unsigned int t381;
    unsigned int t382;
    unsigned int t383;
    unsigned int t384;
    unsigned int t385;
    unsigned int t386;
    unsigned int t388;
    unsigned int t389;
    unsigned int t390;
    char *t391;
    char *t392;
    char *t393;
    unsigned int t394;
    unsigned int t395;
    unsigned int t396;
    unsigned int t397;
    unsigned int t398;
    unsigned int t399;
    unsigned int t400;
    char *t401;
    char *t402;
    unsigned int t403;
    unsigned int t404;
    unsigned int t405;
    unsigned int t406;
    unsigned int t407;
    unsigned int t408;
    unsigned int t409;
    unsigned int t410;
    int t411;
    unsigned int t412;
    unsigned int t413;
    unsigned int t414;
    unsigned int t415;
    unsigned int t416;
    unsigned int t417;
    char *t419;
    char *t420;
    char *t421;
    char *t423;
    char *t424;
    unsigned int t425;
    unsigned int t426;
    unsigned int t427;
    unsigned int t428;
    unsigned int t429;
    unsigned int t430;
    char *t431;
    unsigned int t432;
    unsigned int t433;
    unsigned int t434;
    unsigned int t435;
    unsigned int t436;
    char *t437;
    char *t438;
    char *t439;
    unsigned int t440;
    unsigned int t441;
    unsigned int t442;
    unsigned int t443;
    unsigned int t444;
    unsigned int t445;
    unsigned int t446;
    unsigned int t447;
    unsigned int t449;
    unsigned int t450;
    unsigned int t451;
    char *t452;
    char *t453;
    char *t454;
    unsigned int t455;
    unsigned int t456;
    unsigned int t457;
    unsigned int t458;
    unsigned int t459;
    unsigned int t460;
    unsigned int t461;
    char *t462;
    char *t463;
    unsigned int t464;
    unsigned int t465;
    unsigned int t466;
    unsigned int t467;
    unsigned int t468;
    unsigned int t469;
    unsigned int t470;
    unsigned int t471;
    int t472;
    int t473;
    unsigned int t474;
    unsigned int t475;
    unsigned int t476;
    unsigned int t477;
    unsigned int t478;
    unsigned int t479;
    unsigned int t481;
    unsigned int t482;
    unsigned int t483;
    char *t484;
    char *t485;
    char *t486;
    unsigned int t487;
    unsigned int t488;
    unsigned int t489;
    unsigned int t490;
    unsigned int t491;
    unsigned int t492;
    unsigned int t493;
    char *t494;
    char *t495;
    unsigned int t496;
    unsigned int t497;
    unsigned int t498;
    int t499;
    unsigned int t500;
    unsigned int t501;
    unsigned int t502;
    int t503;
    unsigned int t504;
    unsigned int t505;
    unsigned int t506;
    unsigned int t507;
    char *t508;
    char *t510;
    char *t511;
    char *t512;
    char *t513;
    char *t514;
    unsigned int t515;
    int t516;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2144);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t5 = (t1 + 5096);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t9 = (t8 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 0);
    t16 = (t15 & 1);
    *((unsigned int *)t9) = t16;
    t17 = (t1 + 5256);
    t19 = (t1 + 5256);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t18, t21, 2, t22, 32, 1);
    t23 = (t18 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (!(t24));
    if (t25 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(36, ng0);
    t4 = (t1 + 5096);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t8, 0, 8);
    t7 = (t8 + 4);
    t9 = (t6 + 4);
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t9);
    t15 = (t14 >> 1);
    t16 = (t15 & 1);
    *((unsigned int *)t7) = t16;
    t10 = (t1 + 5096);
    t17 = (t10 + 56U);
    t19 = *((char **)t17);
    memset(t26, 0, 8);
    t20 = (t26 + 4);
    t21 = (t19 + 4);
    t24 = *((unsigned int *)t19);
    t27 = (t24 >> 0);
    t28 = (t27 & 1);
    *((unsigned int *)t26) = t28;
    t29 = *((unsigned int *)t21);
    t30 = (t29 >> 0);
    t31 = (t30 & 1);
    *((unsigned int *)t20) = t31;
    memset(t18, 0, 8);
    t22 = (t26 + 4);
    t32 = *((unsigned int *)t22);
    t33 = (~(t32));
    t34 = *((unsigned int *)t26);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB11;

LAB9:    if (*((unsigned int *)t22) == 0)
        goto LAB8;

LAB10:    t23 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t23) = 1;

LAB11:    t37 = (t18 + 4);
    t38 = (t26 + 4);
    t39 = *((unsigned int *)t26);
    t40 = (~(t39));
    *((unsigned int *)t18) = t40;
    *((unsigned int *)t37) = 0;
    if (*((unsigned int *)t38) != 0)
        goto LAB13;

LAB12:    t45 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t45 & 1U);
    t46 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t46 & 1U);
    t48 = *((unsigned int *)t8);
    t49 = *((unsigned int *)t18);
    t50 = (t48 & t49);
    *((unsigned int *)t47) = t50;
    t51 = (t8 + 4);
    t52 = (t18 + 4);
    t53 = (t47 + 4);
    t54 = *((unsigned int *)t51);
    t55 = *((unsigned int *)t52);
    t56 = (t54 | t55);
    *((unsigned int *)t53) = t56;
    t57 = *((unsigned int *)t53);
    t58 = (t57 != 0);
    if (t58 == 1)
        goto LAB14;

LAB15:
LAB16:    t79 = (t1 + 5096);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    memset(t82, 0, 8);
    t83 = (t82 + 4);
    t84 = (t81 + 4);
    t85 = *((unsigned int *)t81);
    t86 = (t85 >> 1);
    t87 = (t86 & 1);
    *((unsigned int *)t82) = t87;
    t88 = *((unsigned int *)t84);
    t89 = (t88 >> 1);
    t90 = (t89 & 1);
    *((unsigned int *)t83) = t90;
    memset(t78, 0, 8);
    t91 = (t82 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t82);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t91) == 0)
        goto LAB17;

LAB19:    t97 = (t78 + 4);
    *((unsigned int *)t78) = 1;
    *((unsigned int *)t97) = 1;

LAB20:    t98 = (t78 + 4);
    t99 = (t82 + 4);
    t100 = *((unsigned int *)t82);
    t101 = (~(t100));
    *((unsigned int *)t78) = t101;
    *((unsigned int *)t98) = 0;
    if (*((unsigned int *)t99) != 0)
        goto LAB22;

LAB21:    t106 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t106 & 1U);
    t107 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t107 & 1U);
    t108 = (t1 + 5096);
    t109 = (t108 + 56U);
    t110 = *((char **)t109);
    memset(t111, 0, 8);
    t112 = (t111 + 4);
    t113 = (t110 + 4);
    t114 = *((unsigned int *)t110);
    t115 = (t114 >> 0);
    t116 = (t115 & 1);
    *((unsigned int *)t111) = t116;
    t117 = *((unsigned int *)t113);
    t118 = (t117 >> 0);
    t119 = (t118 & 1);
    *((unsigned int *)t112) = t119;
    t121 = *((unsigned int *)t78);
    t122 = *((unsigned int *)t111);
    t123 = (t121 & t122);
    *((unsigned int *)t120) = t123;
    t124 = (t78 + 4);
    t125 = (t111 + 4);
    t126 = (t120 + 4);
    t127 = *((unsigned int *)t124);
    t128 = *((unsigned int *)t125);
    t129 = (t127 | t128);
    *((unsigned int *)t126) = t129;
    t130 = *((unsigned int *)t126);
    t131 = (t130 != 0);
    if (t131 == 1)
        goto LAB23;

LAB24:
LAB25:    t153 = *((unsigned int *)t47);
    t154 = *((unsigned int *)t120);
    t155 = (t153 | t154);
    *((unsigned int *)t152) = t155;
    t156 = (t47 + 4);
    t157 = (t120 + 4);
    t158 = (t152 + 4);
    t159 = *((unsigned int *)t156);
    t160 = *((unsigned int *)t157);
    t161 = (t159 | t160);
    *((unsigned int *)t158) = t161;
    t162 = *((unsigned int *)t158);
    t163 = (t162 != 0);
    if (t163 == 1)
        goto LAB26;

LAB27:
LAB28:    t180 = (t1 + 5256);
    t182 = (t1 + 5256);
    t183 = (t182 + 72U);
    t184 = *((char **)t183);
    t185 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t181, t184, 2, t185, 32, 1);
    t186 = (t181 + 4);
    t187 = *((unsigned int *)t186);
    t188 = (!(t187));
    if (t188 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(37, ng0);
    t4 = (t1 + 5096);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t8, 0, 8);
    t7 = (t8 + 4);
    t9 = (t6 + 4);
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t9);
    t15 = (t14 >> 2);
    t16 = (t15 & 1);
    *((unsigned int *)t7) = t16;
    t10 = (t1 + 5096);
    t17 = (t10 + 56U);
    t19 = *((char **)t17);
    memset(t26, 0, 8);
    t20 = (t26 + 4);
    t21 = (t19 + 4);
    t24 = *((unsigned int *)t19);
    t27 = (t24 >> 1);
    t28 = (t27 & 1);
    *((unsigned int *)t26) = t28;
    t29 = *((unsigned int *)t21);
    t30 = (t29 >> 1);
    t31 = (t30 & 1);
    *((unsigned int *)t20) = t31;
    memset(t18, 0, 8);
    t22 = (t26 + 4);
    t32 = *((unsigned int *)t22);
    t33 = (~(t32));
    t34 = *((unsigned int *)t26);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB34;

LAB32:    if (*((unsigned int *)t22) == 0)
        goto LAB31;

LAB33:    t23 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t23) = 1;

LAB34:    t37 = (t18 + 4);
    t38 = (t26 + 4);
    t39 = *((unsigned int *)t26);
    t40 = (~(t39));
    *((unsigned int *)t18) = t40;
    *((unsigned int *)t37) = 0;
    if (*((unsigned int *)t38) != 0)
        goto LAB36;

LAB35:    t45 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t45 & 1U);
    t46 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t46 & 1U);
    t48 = *((unsigned int *)t8);
    t49 = *((unsigned int *)t18);
    t50 = (t48 & t49);
    *((unsigned int *)t47) = t50;
    t51 = (t8 + 4);
    t52 = (t18 + 4);
    t53 = (t47 + 4);
    t54 = *((unsigned int *)t51);
    t55 = *((unsigned int *)t52);
    t56 = (t54 | t55);
    *((unsigned int *)t53) = t56;
    t57 = *((unsigned int *)t53);
    t58 = (t57 != 0);
    if (t58 == 1)
        goto LAB37;

LAB38:
LAB39:    t79 = (t1 + 5096);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    memset(t82, 0, 8);
    t83 = (t82 + 4);
    t84 = (t81 + 4);
    t85 = *((unsigned int *)t81);
    t86 = (t85 >> 0);
    t87 = (t86 & 1);
    *((unsigned int *)t82) = t87;
    t88 = *((unsigned int *)t84);
    t89 = (t88 >> 0);
    t90 = (t89 & 1);
    *((unsigned int *)t83) = t90;
    memset(t78, 0, 8);
    t91 = (t82 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t82);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB43;

LAB41:    if (*((unsigned int *)t91) == 0)
        goto LAB40;

LAB42:    t97 = (t78 + 4);
    *((unsigned int *)t78) = 1;
    *((unsigned int *)t97) = 1;

LAB43:    t98 = (t78 + 4);
    t99 = (t82 + 4);
    t100 = *((unsigned int *)t82);
    t101 = (~(t100));
    *((unsigned int *)t78) = t101;
    *((unsigned int *)t98) = 0;
    if (*((unsigned int *)t99) != 0)
        goto LAB45;

LAB44:    t106 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t106 & 1U);
    t107 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t107 & 1U);
    t114 = *((unsigned int *)t47);
    t115 = *((unsigned int *)t78);
    t116 = (t114 & t115);
    *((unsigned int *)t111) = t116;
    t108 = (t47 + 4);
    t109 = (t78 + 4);
    t110 = (t111 + 4);
    t117 = *((unsigned int *)t108);
    t118 = *((unsigned int *)t109);
    t119 = (t117 | t118);
    *((unsigned int *)t110) = t119;
    t121 = *((unsigned int *)t110);
    t122 = (t121 != 0);
    if (t122 == 1)
        goto LAB46;

LAB47:
LAB48:    t124 = (t1 + 5096);
    t125 = (t124 + 56U);
    t126 = *((char **)t125);
    memset(t152, 0, 8);
    t134 = (t152 + 4);
    t135 = (t126 + 4);
    t146 = *((unsigned int *)t126);
    t147 = (t146 >> 2);
    t148 = (t147 & 1);
    *((unsigned int *)t152) = t148;
    t149 = *((unsigned int *)t135);
    t150 = (t149 >> 2);
    t151 = (t150 & 1);
    *((unsigned int *)t134) = t151;
    memset(t120, 0, 8);
    t156 = (t152 + 4);
    t153 = *((unsigned int *)t156);
    t154 = (~(t153));
    t155 = *((unsigned int *)t152);
    t159 = (t155 & t154);
    t160 = (t159 & 1U);
    if (t160 != 0)
        goto LAB52;

LAB50:    if (*((unsigned int *)t156) == 0)
        goto LAB49;

LAB51:    t157 = (t120 + 4);
    *((unsigned int *)t120) = 1;
    *((unsigned int *)t157) = 1;

LAB52:    t158 = (t120 + 4);
    t166 = (t152 + 4);
    t161 = *((unsigned int *)t152);
    t162 = (~(t161));
    *((unsigned int *)t120) = t162;
    *((unsigned int *)t158) = 0;
    if (*((unsigned int *)t166) != 0)
        goto LAB54;

LAB53:    t169 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t169 & 1U);
    t170 = *((unsigned int *)t158);
    *((unsigned int *)t158) = (t170 & 1U);
    t167 = (t1 + 5096);
    t180 = (t167 + 56U);
    t182 = *((char **)t180);
    memset(t181, 0, 8);
    t183 = (t181 + 4);
    t184 = (t182 + 4);
    t172 = *((unsigned int *)t182);
    t173 = (t172 >> 0);
    t174 = (t173 & 1);
    *((unsigned int *)t181) = t174;
    t176 = *((unsigned int *)t184);
    t177 = (t176 >> 0);
    t178 = (t177 & 1);
    *((unsigned int *)t183) = t178;
    t179 = *((unsigned int *)t120);
    t187 = *((unsigned int *)t181);
    t190 = (t179 & t187);
    *((unsigned int *)t189) = t190;
    t185 = (t120 + 4);
    t186 = (t181 + 4);
    t191 = (t189 + 4);
    t192 = *((unsigned int *)t185);
    t193 = *((unsigned int *)t186);
    t194 = (t192 | t193);
    *((unsigned int *)t191) = t194;
    t195 = *((unsigned int *)t191);
    t196 = (t195 != 0);
    if (t196 == 1)
        goto LAB55;

LAB56:
LAB57:    t216 = *((unsigned int *)t111);
    t217 = *((unsigned int *)t189);
    t218 = (t216 | t217);
    *((unsigned int *)t215) = t218;
    t219 = (t111 + 4);
    t220 = (t189 + 4);
    t221 = (t215 + 4);
    t222 = *((unsigned int *)t219);
    t223 = *((unsigned int *)t220);
    t224 = (t222 | t223);
    *((unsigned int *)t221) = t224;
    t225 = *((unsigned int *)t221);
    t226 = (t225 != 0);
    if (t226 == 1)
        goto LAB58;

LAB59:
LAB60:    t243 = (t1 + 5096);
    t244 = (t243 + 56U);
    t245 = *((char **)t244);
    memset(t246, 0, 8);
    t247 = (t246 + 4);
    t248 = (t245 + 4);
    t249 = *((unsigned int *)t245);
    t250 = (t249 >> 2);
    t251 = (t250 & 1);
    *((unsigned int *)t246) = t251;
    t252 = *((unsigned int *)t248);
    t253 = (t252 >> 2);
    t254 = (t253 & 1);
    *((unsigned int *)t247) = t254;
    memset(t242, 0, 8);
    t255 = (t246 + 4);
    t256 = *((unsigned int *)t255);
    t257 = (~(t256));
    t258 = *((unsigned int *)t246);
    t259 = (t258 & t257);
    t260 = (t259 & 1U);
    if (t260 != 0)
        goto LAB64;

LAB62:    if (*((unsigned int *)t255) == 0)
        goto LAB61;

LAB63:    t261 = (t242 + 4);
    *((unsigned int *)t242) = 1;
    *((unsigned int *)t261) = 1;

LAB64:    t262 = (t242 + 4);
    t263 = (t246 + 4);
    t264 = *((unsigned int *)t246);
    t265 = (~(t264));
    *((unsigned int *)t242) = t265;
    *((unsigned int *)t262) = 0;
    if (*((unsigned int *)t263) != 0)
        goto LAB66;

LAB65:    t270 = *((unsigned int *)t242);
    *((unsigned int *)t242) = (t270 & 1U);
    t271 = *((unsigned int *)t262);
    *((unsigned int *)t262) = (t271 & 1U);
    t272 = (t1 + 5096);
    t273 = (t272 + 56U);
    t274 = *((char **)t273);
    memset(t275, 0, 8);
    t276 = (t275 + 4);
    t277 = (t274 + 4);
    t278 = *((unsigned int *)t274);
    t279 = (t278 >> 1);
    t280 = (t279 & 1);
    *((unsigned int *)t275) = t280;
    t281 = *((unsigned int *)t277);
    t282 = (t281 >> 1);
    t283 = (t282 & 1);
    *((unsigned int *)t276) = t283;
    t285 = *((unsigned int *)t242);
    t286 = *((unsigned int *)t275);
    t287 = (t285 & t286);
    *((unsigned int *)t284) = t287;
    t288 = (t242 + 4);
    t289 = (t275 + 4);
    t290 = (t284 + 4);
    t291 = *((unsigned int *)t288);
    t292 = *((unsigned int *)t289);
    t293 = (t291 | t292);
    *((unsigned int *)t290) = t293;
    t294 = *((unsigned int *)t290);
    t295 = (t294 != 0);
    if (t295 == 1)
        goto LAB67;

LAB68:
LAB69:    t317 = *((unsigned int *)t215);
    t318 = *((unsigned int *)t284);
    t319 = (t317 | t318);
    *((unsigned int *)t316) = t319;
    t320 = (t215 + 4);
    t321 = (t284 + 4);
    t322 = (t316 + 4);
    t323 = *((unsigned int *)t320);
    t324 = *((unsigned int *)t321);
    t325 = (t323 | t324);
    *((unsigned int *)t322) = t325;
    t326 = *((unsigned int *)t322);
    t327 = (t326 != 0);
    if (t327 == 1)
        goto LAB70;

LAB71:
LAB72:    t344 = (t1 + 5256);
    t346 = (t1 + 5256);
    t347 = (t346 + 72U);
    t348 = *((char **)t347);
    t349 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t345, t348, 2, t349, 32, 1);
    t350 = (t345 + 4);
    t351 = *((unsigned int *)t350);
    t352 = (!(t351));
    if (t352 == 1)
        goto LAB73;

LAB74:    xsi_set_current_line(38, ng0);
    t4 = (t1 + 5096);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t18, 0, 8);
    t7 = (t18 + 4);
    t9 = (t6 + 4);
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 3);
    t13 = (t12 & 1);
    *((unsigned int *)t18) = t13;
    t14 = *((unsigned int *)t9);
    t15 = (t14 >> 3);
    t16 = (t15 & 1);
    *((unsigned int *)t7) = t16;
    memset(t8, 0, 8);
    t10 = (t18 + 4);
    t24 = *((unsigned int *)t10);
    t27 = (~(t24));
    t28 = *((unsigned int *)t18);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB78;

LAB76:    if (*((unsigned int *)t10) == 0)
        goto LAB75;

LAB77:    t17 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t17) = 1;

LAB78:    t19 = (t8 + 4);
    t20 = (t18 + 4);
    t31 = *((unsigned int *)t18);
    t32 = (~(t31));
    *((unsigned int *)t8) = t32;
    *((unsigned int *)t19) = 0;
    if (*((unsigned int *)t20) != 0)
        goto LAB80;

LAB79:    t39 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t39 & 1U);
    t40 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t40 & 1U);
    t21 = (t1 + 5096);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memset(t26, 0, 8);
    t37 = (t26 + 4);
    t38 = (t23 + 4);
    t41 = *((unsigned int *)t23);
    t42 = (t41 >> 0);
    t43 = (t42 & 1);
    *((unsigned int *)t26) = t43;
    t44 = *((unsigned int *)t38);
    t45 = (t44 >> 0);
    t46 = (t45 & 1);
    *((unsigned int *)t37) = t46;
    t48 = *((unsigned int *)t8);
    t49 = *((unsigned int *)t26);
    t50 = (t48 & t49);
    *((unsigned int *)t47) = t50;
    t51 = (t8 + 4);
    t52 = (t26 + 4);
    t53 = (t47 + 4);
    t54 = *((unsigned int *)t51);
    t55 = *((unsigned int *)t52);
    t56 = (t54 | t55);
    *((unsigned int *)t53) = t56;
    t57 = *((unsigned int *)t53);
    t58 = (t57 != 0);
    if (t58 == 1)
        goto LAB81;

LAB82:
LAB83:    t79 = (t1 + 5096);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    memset(t82, 0, 8);
    t83 = (t82 + 4);
    t84 = (t81 + 4);
    t85 = *((unsigned int *)t81);
    t86 = (t85 >> 3);
    t87 = (t86 & 1);
    *((unsigned int *)t82) = t87;
    t88 = *((unsigned int *)t84);
    t89 = (t88 >> 3);
    t90 = (t89 & 1);
    *((unsigned int *)t83) = t90;
    memset(t78, 0, 8);
    t91 = (t82 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t82);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB87;

LAB85:    if (*((unsigned int *)t91) == 0)
        goto LAB84;

LAB86:    t97 = (t78 + 4);
    *((unsigned int *)t78) = 1;
    *((unsigned int *)t97) = 1;

LAB87:    t98 = (t78 + 4);
    t99 = (t82 + 4);
    t100 = *((unsigned int *)t82);
    t101 = (~(t100));
    *((unsigned int *)t78) = t101;
    *((unsigned int *)t98) = 0;
    if (*((unsigned int *)t99) != 0)
        goto LAB89;

LAB88:    t106 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t106 & 1U);
    t107 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t107 & 1U);
    t108 = (t1 + 5096);
    t109 = (t108 + 56U);
    t110 = *((char **)t109);
    memset(t111, 0, 8);
    t112 = (t111 + 4);
    t113 = (t110 + 4);
    t114 = *((unsigned int *)t110);
    t115 = (t114 >> 1);
    t116 = (t115 & 1);
    *((unsigned int *)t111) = t116;
    t117 = *((unsigned int *)t113);
    t118 = (t117 >> 1);
    t119 = (t118 & 1);
    *((unsigned int *)t112) = t119;
    t121 = *((unsigned int *)t78);
    t122 = *((unsigned int *)t111);
    t123 = (t121 & t122);
    *((unsigned int *)t120) = t123;
    t124 = (t78 + 4);
    t125 = (t111 + 4);
    t126 = (t120 + 4);
    t127 = *((unsigned int *)t124);
    t128 = *((unsigned int *)t125);
    t129 = (t127 | t128);
    *((unsigned int *)t126) = t129;
    t130 = *((unsigned int *)t126);
    t131 = (t130 != 0);
    if (t131 == 1)
        goto LAB90;

LAB91:
LAB92:    t153 = *((unsigned int *)t47);
    t154 = *((unsigned int *)t120);
    t155 = (t153 | t154);
    *((unsigned int *)t152) = t155;
    t156 = (t47 + 4);
    t157 = (t120 + 4);
    t158 = (t152 + 4);
    t159 = *((unsigned int *)t156);
    t160 = *((unsigned int *)t157);
    t161 = (t159 | t160);
    *((unsigned int *)t158) = t161;
    t162 = *((unsigned int *)t158);
    t163 = (t162 != 0);
    if (t163 == 1)
        goto LAB93;

LAB94:
LAB95:    t180 = (t1 + 5096);
    t182 = (t180 + 56U);
    t183 = *((char **)t182);
    memset(t189, 0, 8);
    t184 = (t189 + 4);
    t185 = (t183 + 4);
    t187 = *((unsigned int *)t183);
    t190 = (t187 >> 3);
    t192 = (t190 & 1);
    *((unsigned int *)t189) = t192;
    t193 = *((unsigned int *)t185);
    t194 = (t193 >> 3);
    t195 = (t194 & 1);
    *((unsigned int *)t184) = t195;
    memset(t181, 0, 8);
    t186 = (t189 + 4);
    t196 = *((unsigned int *)t186);
    t197 = (~(t196));
    t198 = *((unsigned int *)t189);
    t201 = (t198 & t197);
    t202 = (t201 & 1U);
    if (t202 != 0)
        goto LAB99;

LAB97:    if (*((unsigned int *)t186) == 0)
        goto LAB96;

LAB98:    t191 = (t181 + 4);
    *((unsigned int *)t181) = 1;
    *((unsigned int *)t191) = 1;

LAB99:    t199 = (t181 + 4);
    t200 = (t189 + 4);
    t203 = *((unsigned int *)t189);
    t204 = (~(t203));
    *((unsigned int *)t181) = t204;
    *((unsigned int *)t199) = 0;
    if (*((unsigned int *)t200) != 0)
        goto LAB101;

LAB100:    t209 = *((unsigned int *)t181);
    *((unsigned int *)t181) = (t209 & 1U);
    t210 = *((unsigned int *)t199);
    *((unsigned int *)t199) = (t210 & 1U);
    t219 = (t1 + 5096);
    t220 = (t219 + 56U);
    t221 = *((char **)t220);
    memset(t215, 0, 8);
    t229 = (t215 + 4);
    t230 = (t221 + 4);
    t211 = *((unsigned int *)t221);
    t212 = (t211 >> 2);
    t213 = (t212 & 1);
    *((unsigned int *)t215) = t213;
    t214 = *((unsigned int *)t230);
    t216 = (t214 >> 2);
    t217 = (t216 & 1);
    *((unsigned int *)t229) = t217;
    t218 = *((unsigned int *)t181);
    t222 = *((unsigned int *)t215);
    t223 = (t218 & t222);
    *((unsigned int *)t242) = t223;
    t243 = (t181 + 4);
    t244 = (t215 + 4);
    t245 = (t242 + 4);
    t224 = *((unsigned int *)t243);
    t225 = *((unsigned int *)t244);
    t226 = (t224 | t225);
    *((unsigned int *)t245) = t226;
    t227 = *((unsigned int *)t245);
    t228 = (t227 != 0);
    if (t228 == 1)
        goto LAB102;

LAB103:
LAB104:    t256 = *((unsigned int *)t152);
    t257 = *((unsigned int *)t242);
    t258 = (t256 | t257);
    *((unsigned int *)t246) = t258;
    t255 = (t152 + 4);
    t261 = (t242 + 4);
    t262 = (t246 + 4);
    t259 = *((unsigned int *)t255);
    t260 = *((unsigned int *)t261);
    t264 = (t259 | t260);
    *((unsigned int *)t262) = t264;
    t265 = *((unsigned int *)t262);
    t266 = (t265 != 0);
    if (t266 == 1)
        goto LAB105;

LAB106:
LAB107:    t273 = (t1 + 5096);
    t274 = (t273 + 56U);
    t276 = *((char **)t274);
    memset(t275, 0, 8);
    t277 = (t275 + 4);
    t288 = (t276 + 4);
    t286 = *((unsigned int *)t276);
    t287 = (t286 >> 3);
    t291 = (t287 & 1);
    *((unsigned int *)t275) = t291;
    t292 = *((unsigned int *)t288);
    t293 = (t292 >> 3);
    t294 = (t293 & 1);
    *((unsigned int *)t277) = t294;
    t289 = (t1 + 5096);
    t290 = (t289 + 56U);
    t298 = *((char **)t290);
    memset(t316, 0, 8);
    t299 = (t316 + 4);
    t320 = (t298 + 4);
    t295 = *((unsigned int *)t298);
    t296 = (t295 >> 2);
    t297 = (t296 & 1);
    *((unsigned int *)t316) = t297;
    t300 = *((unsigned int *)t320);
    t301 = (t300 >> 2);
    t302 = (t301 & 1);
    *((unsigned int *)t299) = t302;
    memset(t284, 0, 8);
    t321 = (t316 + 4);
    t303 = *((unsigned int *)t321);
    t304 = (~(t303));
    t305 = *((unsigned int *)t316);
    t306 = (t305 & t304);
    t307 = (t306 & 1U);
    if (t307 != 0)
        goto LAB111;

LAB109:    if (*((unsigned int *)t321) == 0)
        goto LAB108;

LAB110:    t322 = (t284 + 4);
    *((unsigned int *)t284) = 1;
    *((unsigned int *)t322) = 1;

LAB111:    t330 = (t284 + 4);
    t331 = (t316 + 4);
    t310 = *((unsigned int *)t316);
    t311 = (~(t310));
    *((unsigned int *)t284) = t311;
    *((unsigned int *)t330) = 0;
    if (*((unsigned int *)t331) != 0)
        goto LAB113;

LAB112:    t317 = *((unsigned int *)t284);
    *((unsigned int *)t284) = (t317 & 1U);
    t318 = *((unsigned int *)t330);
    *((unsigned int *)t330) = (t318 & 1U);
    t319 = *((unsigned int *)t275);
    t323 = *((unsigned int *)t284);
    t324 = (t319 & t323);
    *((unsigned int *)t345) = t324;
    t344 = (t275 + 4);
    t346 = (t284 + 4);
    t347 = (t345 + 4);
    t325 = *((unsigned int *)t344);
    t326 = *((unsigned int *)t346);
    t327 = (t325 | t326);
    *((unsigned int *)t347) = t327;
    t328 = *((unsigned int *)t347);
    t329 = (t328 != 0);
    if (t329 == 1)
        goto LAB114;

LAB115:
LAB116:    t350 = (t1 + 5096);
    t359 = (t350 + 56U);
    t360 = *((char **)t359);
    memset(t361, 0, 8);
    t362 = (t361 + 4);
    t363 = (t360 + 4);
    t364 = *((unsigned int *)t360);
    t365 = (t364 >> 1);
    t366 = (t365 & 1);
    *((unsigned int *)t361) = t366;
    t367 = *((unsigned int *)t363);
    t368 = (t367 >> 1);
    t369 = (t368 & 1);
    *((unsigned int *)t362) = t369;
    memset(t358, 0, 8);
    t370 = (t361 + 4);
    t371 = *((unsigned int *)t370);
    t372 = (~(t371));
    t373 = *((unsigned int *)t361);
    t374 = (t373 & t372);
    t375 = (t374 & 1U);
    if (t375 != 0)
        goto LAB120;

LAB118:    if (*((unsigned int *)t370) == 0)
        goto LAB117;

LAB119:    t376 = (t358 + 4);
    *((unsigned int *)t358) = 1;
    *((unsigned int *)t376) = 1;

LAB120:    t377 = (t358 + 4);
    t378 = (t361 + 4);
    t379 = *((unsigned int *)t361);
    t380 = (~(t379));
    *((unsigned int *)t358) = t380;
    *((unsigned int *)t377) = 0;
    if (*((unsigned int *)t378) != 0)
        goto LAB122;

LAB121:    t385 = *((unsigned int *)t358);
    *((unsigned int *)t358) = (t385 & 1U);
    t386 = *((unsigned int *)t377);
    *((unsigned int *)t377) = (t386 & 1U);
    t388 = *((unsigned int *)t345);
    t389 = *((unsigned int *)t358);
    t390 = (t388 & t389);
    *((unsigned int *)t387) = t390;
    t391 = (t345 + 4);
    t392 = (t358 + 4);
    t393 = (t387 + 4);
    t394 = *((unsigned int *)t391);
    t395 = *((unsigned int *)t392);
    t396 = (t394 | t395);
    *((unsigned int *)t393) = t396;
    t397 = *((unsigned int *)t393);
    t398 = (t397 != 0);
    if (t398 == 1)
        goto LAB123;

LAB124:
LAB125:    t419 = (t1 + 5096);
    t420 = (t419 + 56U);
    t421 = *((char **)t420);
    memset(t422, 0, 8);
    t423 = (t422 + 4);
    t424 = (t421 + 4);
    t425 = *((unsigned int *)t421);
    t426 = (t425 >> 0);
    t427 = (t426 & 1);
    *((unsigned int *)t422) = t427;
    t428 = *((unsigned int *)t424);
    t429 = (t428 >> 0);
    t430 = (t429 & 1);
    *((unsigned int *)t423) = t430;
    memset(t418, 0, 8);
    t431 = (t422 + 4);
    t432 = *((unsigned int *)t431);
    t433 = (~(t432));
    t434 = *((unsigned int *)t422);
    t435 = (t434 & t433);
    t436 = (t435 & 1U);
    if (t436 != 0)
        goto LAB129;

LAB127:    if (*((unsigned int *)t431) == 0)
        goto LAB126;

LAB128:    t437 = (t418 + 4);
    *((unsigned int *)t418) = 1;
    *((unsigned int *)t437) = 1;

LAB129:    t438 = (t418 + 4);
    t439 = (t422 + 4);
    t440 = *((unsigned int *)t422);
    t441 = (~(t440));
    *((unsigned int *)t418) = t441;
    *((unsigned int *)t438) = 0;
    if (*((unsigned int *)t439) != 0)
        goto LAB131;

LAB130:    t446 = *((unsigned int *)t418);
    *((unsigned int *)t418) = (t446 & 1U);
    t447 = *((unsigned int *)t438);
    *((unsigned int *)t438) = (t447 & 1U);
    t449 = *((unsigned int *)t387);
    t450 = *((unsigned int *)t418);
    t451 = (t449 & t450);
    *((unsigned int *)t448) = t451;
    t452 = (t387 + 4);
    t453 = (t418 + 4);
    t454 = (t448 + 4);
    t455 = *((unsigned int *)t452);
    t456 = *((unsigned int *)t453);
    t457 = (t455 | t456);
    *((unsigned int *)t454) = t457;
    t458 = *((unsigned int *)t454);
    t459 = (t458 != 0);
    if (t459 == 1)
        goto LAB132;

LAB133:
LAB134:    t481 = *((unsigned int *)t246);
    t482 = *((unsigned int *)t448);
    t483 = (t481 | t482);
    *((unsigned int *)t480) = t483;
    t484 = (t246 + 4);
    t485 = (t448 + 4);
    t486 = (t480 + 4);
    t487 = *((unsigned int *)t484);
    t488 = *((unsigned int *)t485);
    t489 = (t487 | t488);
    *((unsigned int *)t486) = t489;
    t490 = *((unsigned int *)t486);
    t491 = (t490 != 0);
    if (t491 == 1)
        goto LAB135;

LAB136:
LAB137:    t508 = (t1 + 5256);
    t510 = (t1 + 5256);
    t511 = (t510 + 72U);
    t512 = *((char **)t511);
    t513 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t509, t512, 2, t513, 32, 1);
    t514 = (t509 + 4);
    t515 = *((unsigned int *)t514);
    t516 = (!(t515));
    if (t516 == 1)
        goto LAB138;

LAB139:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    xsi_vlogvar_assign_value(t17, t8, 0, *((unsigned int *)t18), 1);
    goto LAB7;

LAB8:    *((unsigned int *)t18) = 1;
    goto LAB11;

LAB13:    t41 = *((unsigned int *)t18);
    t42 = *((unsigned int *)t38);
    *((unsigned int *)t18) = (t41 | t42);
    t43 = *((unsigned int *)t37);
    t44 = *((unsigned int *)t38);
    *((unsigned int *)t37) = (t43 | t44);
    goto LAB12;

LAB14:    t59 = *((unsigned int *)t47);
    t60 = *((unsigned int *)t53);
    *((unsigned int *)t47) = (t59 | t60);
    t61 = (t8 + 4);
    t62 = (t18 + 4);
    t63 = *((unsigned int *)t8);
    t64 = (~(t63));
    t65 = *((unsigned int *)t61);
    t66 = (~(t65));
    t67 = *((unsigned int *)t18);
    t68 = (~(t67));
    t69 = *((unsigned int *)t62);
    t70 = (~(t69));
    t25 = (t64 & t66);
    t71 = (t68 & t70);
    t72 = (~(t25));
    t73 = (~(t71));
    t74 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t74 & t72);
    t75 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t75 & t73);
    t76 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t76 & t72);
    t77 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t77 & t73);
    goto LAB16;

LAB17:    *((unsigned int *)t78) = 1;
    goto LAB20;

LAB22:    t102 = *((unsigned int *)t78);
    t103 = *((unsigned int *)t99);
    *((unsigned int *)t78) = (t102 | t103);
    t104 = *((unsigned int *)t98);
    t105 = *((unsigned int *)t99);
    *((unsigned int *)t98) = (t104 | t105);
    goto LAB21;

LAB23:    t132 = *((unsigned int *)t120);
    t133 = *((unsigned int *)t126);
    *((unsigned int *)t120) = (t132 | t133);
    t134 = (t78 + 4);
    t135 = (t111 + 4);
    t136 = *((unsigned int *)t78);
    t137 = (~(t136));
    t138 = *((unsigned int *)t134);
    t139 = (~(t138));
    t140 = *((unsigned int *)t111);
    t141 = (~(t140));
    t142 = *((unsigned int *)t135);
    t143 = (~(t142));
    t144 = (t137 & t139);
    t145 = (t141 & t143);
    t146 = (~(t144));
    t147 = (~(t145));
    t148 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t148 & t146);
    t149 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t149 & t147);
    t150 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t150 & t146);
    t151 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t151 & t147);
    goto LAB25;

LAB26:    t164 = *((unsigned int *)t152);
    t165 = *((unsigned int *)t158);
    *((unsigned int *)t152) = (t164 | t165);
    t166 = (t47 + 4);
    t167 = (t120 + 4);
    t168 = *((unsigned int *)t166);
    t169 = (~(t168));
    t170 = *((unsigned int *)t47);
    t171 = (t170 & t169);
    t172 = *((unsigned int *)t167);
    t173 = (~(t172));
    t174 = *((unsigned int *)t120);
    t175 = (t174 & t173);
    t176 = (~(t171));
    t177 = (~(t175));
    t178 = *((unsigned int *)t158);
    *((unsigned int *)t158) = (t178 & t176);
    t179 = *((unsigned int *)t158);
    *((unsigned int *)t158) = (t179 & t177);
    goto LAB28;

LAB29:    xsi_vlogvar_assign_value(t180, t152, 0, *((unsigned int *)t181), 1);
    goto LAB30;

LAB31:    *((unsigned int *)t18) = 1;
    goto LAB34;

LAB36:    t41 = *((unsigned int *)t18);
    t42 = *((unsigned int *)t38);
    *((unsigned int *)t18) = (t41 | t42);
    t43 = *((unsigned int *)t37);
    t44 = *((unsigned int *)t38);
    *((unsigned int *)t37) = (t43 | t44);
    goto LAB35;

LAB37:    t59 = *((unsigned int *)t47);
    t60 = *((unsigned int *)t53);
    *((unsigned int *)t47) = (t59 | t60);
    t61 = (t8 + 4);
    t62 = (t18 + 4);
    t63 = *((unsigned int *)t8);
    t64 = (~(t63));
    t65 = *((unsigned int *)t61);
    t66 = (~(t65));
    t67 = *((unsigned int *)t18);
    t68 = (~(t67));
    t69 = *((unsigned int *)t62);
    t70 = (~(t69));
    t25 = (t64 & t66);
    t71 = (t68 & t70);
    t72 = (~(t25));
    t73 = (~(t71));
    t74 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t74 & t72);
    t75 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t75 & t73);
    t76 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t76 & t72);
    t77 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t77 & t73);
    goto LAB39;

LAB40:    *((unsigned int *)t78) = 1;
    goto LAB43;

LAB45:    t102 = *((unsigned int *)t78);
    t103 = *((unsigned int *)t99);
    *((unsigned int *)t78) = (t102 | t103);
    t104 = *((unsigned int *)t98);
    t105 = *((unsigned int *)t99);
    *((unsigned int *)t98) = (t104 | t105);
    goto LAB44;

LAB46:    t123 = *((unsigned int *)t111);
    t127 = *((unsigned int *)t110);
    *((unsigned int *)t111) = (t123 | t127);
    t112 = (t47 + 4);
    t113 = (t78 + 4);
    t128 = *((unsigned int *)t47);
    t129 = (~(t128));
    t130 = *((unsigned int *)t112);
    t131 = (~(t130));
    t132 = *((unsigned int *)t78);
    t133 = (~(t132));
    t136 = *((unsigned int *)t113);
    t137 = (~(t136));
    t144 = (t129 & t131);
    t145 = (t133 & t137);
    t138 = (~(t144));
    t139 = (~(t145));
    t140 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t140 & t138);
    t141 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t141 & t139);
    t142 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t142 & t138);
    t143 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t143 & t139);
    goto LAB48;

LAB49:    *((unsigned int *)t120) = 1;
    goto LAB52;

LAB54:    t163 = *((unsigned int *)t120);
    t164 = *((unsigned int *)t166);
    *((unsigned int *)t120) = (t163 | t164);
    t165 = *((unsigned int *)t158);
    t168 = *((unsigned int *)t166);
    *((unsigned int *)t158) = (t165 | t168);
    goto LAB53;

LAB55:    t197 = *((unsigned int *)t189);
    t198 = *((unsigned int *)t191);
    *((unsigned int *)t189) = (t197 | t198);
    t199 = (t120 + 4);
    t200 = (t181 + 4);
    t201 = *((unsigned int *)t120);
    t202 = (~(t201));
    t203 = *((unsigned int *)t199);
    t204 = (~(t203));
    t205 = *((unsigned int *)t181);
    t206 = (~(t205));
    t207 = *((unsigned int *)t200);
    t208 = (~(t207));
    t171 = (t202 & t204);
    t175 = (t206 & t208);
    t209 = (~(t171));
    t210 = (~(t175));
    t211 = *((unsigned int *)t191);
    *((unsigned int *)t191) = (t211 & t209);
    t212 = *((unsigned int *)t191);
    *((unsigned int *)t191) = (t212 & t210);
    t213 = *((unsigned int *)t189);
    *((unsigned int *)t189) = (t213 & t209);
    t214 = *((unsigned int *)t189);
    *((unsigned int *)t189) = (t214 & t210);
    goto LAB57;

LAB58:    t227 = *((unsigned int *)t215);
    t228 = *((unsigned int *)t221);
    *((unsigned int *)t215) = (t227 | t228);
    t229 = (t111 + 4);
    t230 = (t189 + 4);
    t231 = *((unsigned int *)t229);
    t232 = (~(t231));
    t233 = *((unsigned int *)t111);
    t188 = (t233 & t232);
    t234 = *((unsigned int *)t230);
    t235 = (~(t234));
    t236 = *((unsigned int *)t189);
    t237 = (t236 & t235);
    t238 = (~(t188));
    t239 = (~(t237));
    t240 = *((unsigned int *)t221);
    *((unsigned int *)t221) = (t240 & t238);
    t241 = *((unsigned int *)t221);
    *((unsigned int *)t221) = (t241 & t239);
    goto LAB60;

LAB61:    *((unsigned int *)t242) = 1;
    goto LAB64;

LAB66:    t266 = *((unsigned int *)t242);
    t267 = *((unsigned int *)t263);
    *((unsigned int *)t242) = (t266 | t267);
    t268 = *((unsigned int *)t262);
    t269 = *((unsigned int *)t263);
    *((unsigned int *)t262) = (t268 | t269);
    goto LAB65;

LAB67:    t296 = *((unsigned int *)t284);
    t297 = *((unsigned int *)t290);
    *((unsigned int *)t284) = (t296 | t297);
    t298 = (t242 + 4);
    t299 = (t275 + 4);
    t300 = *((unsigned int *)t242);
    t301 = (~(t300));
    t302 = *((unsigned int *)t298);
    t303 = (~(t302));
    t304 = *((unsigned int *)t275);
    t305 = (~(t304));
    t306 = *((unsigned int *)t299);
    t307 = (~(t306));
    t308 = (t301 & t303);
    t309 = (t305 & t307);
    t310 = (~(t308));
    t311 = (~(t309));
    t312 = *((unsigned int *)t290);
    *((unsigned int *)t290) = (t312 & t310);
    t313 = *((unsigned int *)t290);
    *((unsigned int *)t290) = (t313 & t311);
    t314 = *((unsigned int *)t284);
    *((unsigned int *)t284) = (t314 & t310);
    t315 = *((unsigned int *)t284);
    *((unsigned int *)t284) = (t315 & t311);
    goto LAB69;

LAB70:    t328 = *((unsigned int *)t316);
    t329 = *((unsigned int *)t322);
    *((unsigned int *)t316) = (t328 | t329);
    t330 = (t215 + 4);
    t331 = (t284 + 4);
    t332 = *((unsigned int *)t330);
    t333 = (~(t332));
    t334 = *((unsigned int *)t215);
    t335 = (t334 & t333);
    t336 = *((unsigned int *)t331);
    t337 = (~(t336));
    t338 = *((unsigned int *)t284);
    t339 = (t338 & t337);
    t340 = (~(t335));
    t341 = (~(t339));
    t342 = *((unsigned int *)t322);
    *((unsigned int *)t322) = (t342 & t340);
    t343 = *((unsigned int *)t322);
    *((unsigned int *)t322) = (t343 & t341);
    goto LAB72;

LAB73:    xsi_vlogvar_assign_value(t344, t316, 0, *((unsigned int *)t345), 1);
    goto LAB74;

LAB75:    *((unsigned int *)t8) = 1;
    goto LAB78;

LAB80:    t33 = *((unsigned int *)t8);
    t34 = *((unsigned int *)t20);
    *((unsigned int *)t8) = (t33 | t34);
    t35 = *((unsigned int *)t19);
    t36 = *((unsigned int *)t20);
    *((unsigned int *)t19) = (t35 | t36);
    goto LAB79;

LAB81:    t59 = *((unsigned int *)t47);
    t60 = *((unsigned int *)t53);
    *((unsigned int *)t47) = (t59 | t60);
    t61 = (t8 + 4);
    t62 = (t26 + 4);
    t63 = *((unsigned int *)t8);
    t64 = (~(t63));
    t65 = *((unsigned int *)t61);
    t66 = (~(t65));
    t67 = *((unsigned int *)t26);
    t68 = (~(t67));
    t69 = *((unsigned int *)t62);
    t70 = (~(t69));
    t25 = (t64 & t66);
    t71 = (t68 & t70);
    t72 = (~(t25));
    t73 = (~(t71));
    t74 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t74 & t72);
    t75 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t75 & t73);
    t76 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t76 & t72);
    t77 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t77 & t73);
    goto LAB83;

LAB84:    *((unsigned int *)t78) = 1;
    goto LAB87;

LAB89:    t102 = *((unsigned int *)t78);
    t103 = *((unsigned int *)t99);
    *((unsigned int *)t78) = (t102 | t103);
    t104 = *((unsigned int *)t98);
    t105 = *((unsigned int *)t99);
    *((unsigned int *)t98) = (t104 | t105);
    goto LAB88;

LAB90:    t132 = *((unsigned int *)t120);
    t133 = *((unsigned int *)t126);
    *((unsigned int *)t120) = (t132 | t133);
    t134 = (t78 + 4);
    t135 = (t111 + 4);
    t136 = *((unsigned int *)t78);
    t137 = (~(t136));
    t138 = *((unsigned int *)t134);
    t139 = (~(t138));
    t140 = *((unsigned int *)t111);
    t141 = (~(t140));
    t142 = *((unsigned int *)t135);
    t143 = (~(t142));
    t144 = (t137 & t139);
    t145 = (t141 & t143);
    t146 = (~(t144));
    t147 = (~(t145));
    t148 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t148 & t146);
    t149 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t149 & t147);
    t150 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t150 & t146);
    t151 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t151 & t147);
    goto LAB92;

LAB93:    t164 = *((unsigned int *)t152);
    t165 = *((unsigned int *)t158);
    *((unsigned int *)t152) = (t164 | t165);
    t166 = (t47 + 4);
    t167 = (t120 + 4);
    t168 = *((unsigned int *)t166);
    t169 = (~(t168));
    t170 = *((unsigned int *)t47);
    t171 = (t170 & t169);
    t172 = *((unsigned int *)t167);
    t173 = (~(t172));
    t174 = *((unsigned int *)t120);
    t175 = (t174 & t173);
    t176 = (~(t171));
    t177 = (~(t175));
    t178 = *((unsigned int *)t158);
    *((unsigned int *)t158) = (t178 & t176);
    t179 = *((unsigned int *)t158);
    *((unsigned int *)t158) = (t179 & t177);
    goto LAB95;

LAB96:    *((unsigned int *)t181) = 1;
    goto LAB99;

LAB101:    t205 = *((unsigned int *)t181);
    t206 = *((unsigned int *)t200);
    *((unsigned int *)t181) = (t205 | t206);
    t207 = *((unsigned int *)t199);
    t208 = *((unsigned int *)t200);
    *((unsigned int *)t199) = (t207 | t208);
    goto LAB100;

LAB102:    t231 = *((unsigned int *)t242);
    t232 = *((unsigned int *)t245);
    *((unsigned int *)t242) = (t231 | t232);
    t247 = (t181 + 4);
    t248 = (t215 + 4);
    t233 = *((unsigned int *)t181);
    t234 = (~(t233));
    t235 = *((unsigned int *)t247);
    t236 = (~(t235));
    t238 = *((unsigned int *)t215);
    t239 = (~(t238));
    t240 = *((unsigned int *)t248);
    t241 = (~(t240));
    t188 = (t234 & t236);
    t237 = (t239 & t241);
    t249 = (~(t188));
    t250 = (~(t237));
    t251 = *((unsigned int *)t245);
    *((unsigned int *)t245) = (t251 & t249);
    t252 = *((unsigned int *)t245);
    *((unsigned int *)t245) = (t252 & t250);
    t253 = *((unsigned int *)t242);
    *((unsigned int *)t242) = (t253 & t249);
    t254 = *((unsigned int *)t242);
    *((unsigned int *)t242) = (t254 & t250);
    goto LAB104;

LAB105:    t267 = *((unsigned int *)t246);
    t268 = *((unsigned int *)t262);
    *((unsigned int *)t246) = (t267 | t268);
    t263 = (t152 + 4);
    t272 = (t242 + 4);
    t269 = *((unsigned int *)t263);
    t270 = (~(t269));
    t271 = *((unsigned int *)t152);
    t308 = (t271 & t270);
    t278 = *((unsigned int *)t272);
    t279 = (~(t278));
    t280 = *((unsigned int *)t242);
    t309 = (t280 & t279);
    t281 = (~(t308));
    t282 = (~(t309));
    t283 = *((unsigned int *)t262);
    *((unsigned int *)t262) = (t283 & t281);
    t285 = *((unsigned int *)t262);
    *((unsigned int *)t262) = (t285 & t282);
    goto LAB107;

LAB108:    *((unsigned int *)t284) = 1;
    goto LAB111;

LAB113:    t312 = *((unsigned int *)t284);
    t313 = *((unsigned int *)t331);
    *((unsigned int *)t284) = (t312 | t313);
    t314 = *((unsigned int *)t330);
    t315 = *((unsigned int *)t331);
    *((unsigned int *)t330) = (t314 | t315);
    goto LAB112;

LAB114:    t332 = *((unsigned int *)t345);
    t333 = *((unsigned int *)t347);
    *((unsigned int *)t345) = (t332 | t333);
    t348 = (t275 + 4);
    t349 = (t284 + 4);
    t334 = *((unsigned int *)t275);
    t336 = (~(t334));
    t337 = *((unsigned int *)t348);
    t338 = (~(t337));
    t340 = *((unsigned int *)t284);
    t341 = (~(t340));
    t342 = *((unsigned int *)t349);
    t343 = (~(t342));
    t335 = (t336 & t338);
    t339 = (t341 & t343);
    t351 = (~(t335));
    t353 = (~(t339));
    t354 = *((unsigned int *)t347);
    *((unsigned int *)t347) = (t354 & t351);
    t355 = *((unsigned int *)t347);
    *((unsigned int *)t347) = (t355 & t353);
    t356 = *((unsigned int *)t345);
    *((unsigned int *)t345) = (t356 & t351);
    t357 = *((unsigned int *)t345);
    *((unsigned int *)t345) = (t357 & t353);
    goto LAB116;

LAB117:    *((unsigned int *)t358) = 1;
    goto LAB120;

LAB122:    t381 = *((unsigned int *)t358);
    t382 = *((unsigned int *)t378);
    *((unsigned int *)t358) = (t381 | t382);
    t383 = *((unsigned int *)t377);
    t384 = *((unsigned int *)t378);
    *((unsigned int *)t377) = (t383 | t384);
    goto LAB121;

LAB123:    t399 = *((unsigned int *)t387);
    t400 = *((unsigned int *)t393);
    *((unsigned int *)t387) = (t399 | t400);
    t401 = (t345 + 4);
    t402 = (t358 + 4);
    t403 = *((unsigned int *)t345);
    t404 = (~(t403));
    t405 = *((unsigned int *)t401);
    t406 = (~(t405));
    t407 = *((unsigned int *)t358);
    t408 = (~(t407));
    t409 = *((unsigned int *)t402);
    t410 = (~(t409));
    t352 = (t404 & t406);
    t411 = (t408 & t410);
    t412 = (~(t352));
    t413 = (~(t411));
    t414 = *((unsigned int *)t393);
    *((unsigned int *)t393) = (t414 & t412);
    t415 = *((unsigned int *)t393);
    *((unsigned int *)t393) = (t415 & t413);
    t416 = *((unsigned int *)t387);
    *((unsigned int *)t387) = (t416 & t412);
    t417 = *((unsigned int *)t387);
    *((unsigned int *)t387) = (t417 & t413);
    goto LAB125;

LAB126:    *((unsigned int *)t418) = 1;
    goto LAB129;

LAB131:    t442 = *((unsigned int *)t418);
    t443 = *((unsigned int *)t439);
    *((unsigned int *)t418) = (t442 | t443);
    t444 = *((unsigned int *)t438);
    t445 = *((unsigned int *)t439);
    *((unsigned int *)t438) = (t444 | t445);
    goto LAB130;

LAB132:    t460 = *((unsigned int *)t448);
    t461 = *((unsigned int *)t454);
    *((unsigned int *)t448) = (t460 | t461);
    t462 = (t387 + 4);
    t463 = (t418 + 4);
    t464 = *((unsigned int *)t387);
    t465 = (~(t464));
    t466 = *((unsigned int *)t462);
    t467 = (~(t466));
    t468 = *((unsigned int *)t418);
    t469 = (~(t468));
    t470 = *((unsigned int *)t463);
    t471 = (~(t470));
    t472 = (t465 & t467);
    t473 = (t469 & t471);
    t474 = (~(t472));
    t475 = (~(t473));
    t476 = *((unsigned int *)t454);
    *((unsigned int *)t454) = (t476 & t474);
    t477 = *((unsigned int *)t454);
    *((unsigned int *)t454) = (t477 & t475);
    t478 = *((unsigned int *)t448);
    *((unsigned int *)t448) = (t478 & t474);
    t479 = *((unsigned int *)t448);
    *((unsigned int *)t448) = (t479 & t475);
    goto LAB134;

LAB135:    t492 = *((unsigned int *)t480);
    t493 = *((unsigned int *)t486);
    *((unsigned int *)t480) = (t492 | t493);
    t494 = (t246 + 4);
    t495 = (t448 + 4);
    t496 = *((unsigned int *)t494);
    t497 = (~(t496));
    t498 = *((unsigned int *)t246);
    t499 = (t498 & t497);
    t500 = *((unsigned int *)t495);
    t501 = (~(t500));
    t502 = *((unsigned int *)t448);
    t503 = (t502 & t501);
    t504 = (~(t499));
    t505 = (~(t503));
    t506 = *((unsigned int *)t486);
    *((unsigned int *)t486) = (t506 & t504);
    t507 = *((unsigned int *)t486);
    *((unsigned int *)t486) = (t507 & t505);
    goto LAB137;

LAB138:    xsi_vlogvar_assign_value(t508, t480, 0, *((unsigned int *)t509), 1);
    goto LAB139;

}

static void Always_8_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 6168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(8, ng5);
    t2 = (t0 + 6488);
    *((int *)t2) = 1;
    t3 = (t0 + 6200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(9, ng5);

LAB5:    xsi_set_current_line(10, ng5);
    t4 = (t0 + 3096U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(11, ng5);
    t7 = (t0 + 2776U);
    t8 = *((char **)t7);
    t7 = (t0 + 2936U);
    t9 = *((char **)t7);
    t7 = (t0 + 5976);
    t10 = (t0 + 1280);
    t11 = xsi_create_subprogram_invocation(t7, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 4136);
    xsi_vlogvar_assign_value(t12, t8, 0, 0, 4);
    t13 = (t0 + 4296);
    xsi_vlogvar_assign_value(t13, t9, 0, 0, 4);

LAB18:    t14 = (t0 + 6072);
    t15 = *((char **)t14);
    t16 = (t15 + 80U);
    t17 = *((char **)t16);
    t18 = (t17 + 272U);
    t19 = *((char **)t18);
    t20 = (t19 + 0U);
    t21 = *((char **)t20);
    t22 = ((int  (*)(char *, char *))t21)(t0, t15);

LAB20:    if (t22 != 0)
        goto LAB21;

LAB16:    t15 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t15);

LAB17:    t23 = (t0 + 6072);
    t24 = *((char **)t23);
    t23 = (t0 + 4456);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    t27 = (t0 + 3496);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 4);
    t28 = (t0 + 1280);
    t29 = (t0 + 5976);
    t30 = 0;
    xsi_delete_subprogram_invocation(t28, t24, t0, t29, t30);
    goto LAB15;

LAB9:    xsi_set_current_line(12, ng5);
    t3 = (t0 + 2776U);
    t4 = *((char **)t3);
    t3 = (t0 + 2936U);
    t7 = *((char **)t3);
    t3 = (t0 + 5976);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t3, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 3656);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 4);
    t11 = (t0 + 3816);
    xsi_vlogvar_assign_value(t11, t7, 0, 0, 4);

LAB24:    t12 = (t0 + 6072);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t22 = ((int  (*)(char *, char *))t19)(t0, t13);

LAB26:    if (t22 != 0)
        goto LAB27;

LAB22:    t13 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t13);

LAB23:    t20 = (t0 + 6072);
    t21 = *((char **)t20);
    t20 = (t0 + 3976);
    t23 = (t20 + 56U);
    t24 = *((char **)t23);
    t25 = (t0 + 3496);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 4);
    t26 = (t0 + 848);
    t27 = (t0 + 5976);
    t28 = 0;
    xsi_delete_subprogram_invocation(t26, t21, t0, t27, t28);
    goto LAB15;

LAB11:    xsi_set_current_line(13, ng5);
    t3 = (t0 + 2776U);
    t4 = *((char **)t3);
    t3 = (t0 + 2936U);
    t7 = *((char **)t3);
    t3 = (t0 + 5976);
    t8 = (t0 + 1712);
    t9 = xsi_create_subprogram_invocation(t3, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 4616);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 4);
    t11 = (t0 + 4776);
    xsi_vlogvar_assign_value(t11, t7, 0, 0, 4);

LAB30:    t12 = (t0 + 6072);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t22 = ((int  (*)(char *, char *))t19)(t0, t13);

LAB32:    if (t22 != 0)
        goto LAB33;

LAB28:    t13 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t13);

LAB29:    t20 = (t0 + 6072);
    t21 = *((char **)t20);
    t20 = (t0 + 4936);
    t23 = (t20 + 56U);
    t24 = *((char **)t23);
    t25 = (t0 + 3496);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 4);
    t26 = (t0 + 1712);
    t27 = (t0 + 5976);
    t28 = 0;
    xsi_delete_subprogram_invocation(t26, t21, t0, t27, t28);
    goto LAB15;

LAB13:    xsi_set_current_line(14, ng5);
    t3 = (t0 + 2776U);
    t4 = *((char **)t3);
    t3 = (t0 + 5976);
    t7 = (t0 + 2144);
    t8 = xsi_create_subprogram_invocation(t3, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 5096);
    xsi_vlogvar_assign_value(t9, t4, 0, 0, 4);

LAB36:    t10 = (t0 + 6072);
    t11 = *((char **)t10);
    t12 = (t11 + 80U);
    t13 = *((char **)t12);
    t14 = (t13 + 272U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t22 = ((int  (*)(char *, char *))t17)(t0, t11);

LAB38:    if (t22 != 0)
        goto LAB39;

LAB34:    t11 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t11);

LAB35:    t18 = (t0 + 6072);
    t19 = *((char **)t18);
    t18 = (t0 + 5256);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    t23 = (t0 + 3496);
    xsi_vlogvar_assign_value(t23, t21, 0, 0, 4);
    t24 = (t0 + 2144);
    t25 = (t0 + 5976);
    t26 = 0;
    xsi_delete_subprogram_invocation(t24, t19, t0, t25, t26);
    goto LAB15;

LAB19:;
LAB21:    t14 = (t0 + 6168U);
    *((char **)t14) = &&LAB18;
    goto LAB1;

LAB25:;
LAB27:    t12 = (t0 + 6168U);
    *((char **)t12) = &&LAB24;
    goto LAB1;

LAB31:;
LAB33:    t12 = (t0 + 6168U);
    *((char **)t12) = &&LAB30;
    goto LAB1;

LAB37:;
LAB39:    t10 = (t0 + 6168U);
    *((char **)t10) = &&LAB36;
    goto LAB1;

}


extern void work_m_15717810204411108850_0886308060_init()
{
	static char *pe[] = {(void *)Always_8_0};
	static char *se[] = {(void *)sp_Add,(void *)sp_Sub,(void *)sp_Or,(void *)sp_twoscomp};
	xsi_register_didat("work_m_15717810204411108850_0886308060", "isim/ALU_tb_isim_beh.exe.sim/work/m_15717810204411108850_0886308060.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
