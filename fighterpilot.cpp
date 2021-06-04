#include <iostream>
#include <windows.h>
#include <graphics.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <conio.h>

void gameover(), loadingscreen(), gameplay(), controls_menu(), menu(), controlsgame(), howtoplay(), controlsgame_controls(), howtoplay_controls(), about(), about_controls();
int section = 0;
void PesawatV1(float xp,float yp,float sc) 
{ 
    float x0,y0,x1,y1,x2,y2,x3,y3,x4,y4;
    float x5,y5,x6,y6,x7,y7,x8,y8,x9,y9;
    float x10,y10,x11,y11,x12,y12,x13,y13,x14,y14;
    float x15,y15,x16,y16,x17,y17,x18,y18,x19,y19;
    float x20,y20,x21,y21,x22,y22,x23,y23,x24,y24;
    float x25,y25,x26,y26,x27,y27,x28,y28,x29,y29;
    float x30,y30,x31,y31,x32,y32,x33,y33,x34,y34;
    
//Badan Pesawat 
    x0=3.15896;y0=-0.00964;//A
    x1=2.5;y1=-0.5;//B
    x2=0.98929;y2=-0.49999;//C
    x3=-0.99457;y3=-1.65516;//D
    x4=-1.61532;y4=-1.525;//E
    x5=-0.4;y5=0;//F
    x6=-1.20293;y6=-0.50389;//g
    x7=-3.17434;y7=-0.45161;//h
    x8=-3;y8=0;//i
    x9=-3.50389;y9=0.81022;//j
    x10=-2.8;y10=0.8;//k
    x11=-2.02124;y11=0.35689;//L
    x12=1.50433;y12=0.34363;//M
    x13=1.92846;y13=0.62197;
    x14=2.45862;y14=0.62197;//O
    x15=2.76788;y15=0.49913;//p
    x16=1.14897;y16=-0.4071;//Q
    x17=-2.7;y17=-0.5;//R
    x18=-2.21;y18=0.01;//S
    x19=1.09;y19=0.35;//T
    x20=-0.69067;y20=1.77595;//U
    x21=-1.12154;y21=1.49082;//V
    x22=-0.86;y22=0.35;//W
    x23=-0.37;y23=0.35;//X
    x24=2,4;y24=0.5;//Y
    x25=2.4;y25=0.3;//Z
    x27=1.8;y27=-0.5;//G1
    x28=1.8;y28=-0.6;//H1
    x29=1.9;y29=-0.6;//I1
    x26=2.92;y26=0.3;//A1
    x30=1.9;y30=-0.5;//J1
    x31=1.7;y31=-0.6;//K1
    x32=1.7;y32=-0.7;//L1
    x33=3.1;y33=-0.6;//M1
    x34=3.1;y34=-0.7;//N1
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    line(x0*sc+xp,-y0*sc+yp,x1*sc+xp,-y1*sc+yp);
    line(x1*sc+xp,-y1*sc+yp,x2*sc+xp,-y2*sc+yp);
    line(x2*sc+xp,-y2*sc+yp,x3*sc+xp,-y3*sc+yp);
    line(x3*sc+xp,-y3*sc+yp,x4*sc+xp,-y4*sc+yp);
    line(x4*sc+xp,-y4*sc+yp,x6*sc+xp,-y6*sc+yp);
    line(x6*sc+xp,-y6*sc+yp,x17*sc+xp,-y17*sc+yp);
    line(x9*sc+xp,-y9*sc+yp,x10*sc+xp,-y10*sc+yp);
    line(x10*sc+xp,-y10*sc+yp,x11*sc+xp,-y11*sc+yp);
    line(x11*sc+xp,-y11*sc+yp,x12*sc+xp,-y12*sc+yp);
    line(x12*sc+xp,-y12*sc+yp,x13*sc+xp,-y13*sc+yp);
    line(x13*sc+xp,-y13*sc+yp,x14*sc+xp,-y14*sc+yp);
    line(x14*sc+xp,-y14*sc+yp,x15*sc+xp,-y15*sc+yp);
    line(x3*sc+xp,-y3*sc+yp,x16*sc+xp,-y16*sc+yp);
    line(x4*sc+xp,-y4*sc+yp,x5*sc+xp,-y5*sc+yp);  
    line(x15*sc+xp,-y15*sc+yp,x24*sc+xp,-y24*sc+yp);
    line(x24*sc+xp,-y24*sc+yp,x25*sc+xp,-y25*sc+yp);
    line(x25*sc+xp,-y25*sc+yp,x26*sc+xp,-y26*sc+yp);
    line(x26*sc+xp,-y26*sc+yp,x0*sc+xp,-y0*sc+yp);
    line(x17*sc+xp,-y17*sc+yp,x7*sc+xp,-y7*sc+yp);
    line(x7*sc+xp,-y7*sc+yp,x8*sc+xp,-y8*sc+yp);
    line(x8*sc+xp,-y8*sc+yp,x9*sc+xp,-y9*sc+yp);
    line(x8*sc+xp,-y8*sc+yp,x18*sc+xp,-y18*sc+yp);
    floodfill(-3.03*sc+xp,-0.7*sc+yp, WHITE);
    floodfill(3.15*sc+xp,0*sc+yp, WHITE);
    
    //Sayap Samping
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    line(x19*sc+xp,-y19*sc+yp,x20*sc+xp,-y20*sc+yp);
    line(x20*sc+xp,-y20*sc+yp,x21*sc+xp,-y21*sc+yp);
    line(x21*sc+xp,-y21*sc+yp,x22*sc+xp,-y22*sc+yp);
    line(x21*sc+xp,-y21*sc+yp,x23*sc+xp,-y23*sc+yp);
    floodfill(-1.09*sc+xp,-1.48*sc+yp, WHITE);
    floodfill(-0.84*sc+xp,-0.4*sc+yp, WHITE);
    floodfill(0.86*sc+xp,-0.44*sc+yp, WHITE);
    //Kaca
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    line(x15*sc+xp,-y15*sc+yp,x24*sc+xp,-y24*sc+yp);
    line(x24*sc+xp,-y24*sc+yp,x25*sc+xp,-y25*sc+yp);
    line(x25*sc+xp,-y25*sc+yp,x26*sc+xp,-y26*sc+yp);
    line(x15*sc+xp,-y15*sc+yp,x26*sc+xp,-y26*sc+yp);
    floodfill(2.5*sc+xp,-0.4*sc+yp,WHITE);    
    //Moncong Tembak
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,BLACK);
    line(x27*sc+xp,-y27*sc+yp,x28*sc+xp,-y28*sc+yp);
    line(x29*sc+xp,-y29*sc+yp,x30*sc+xp,-y30*sc+yp);
    floodfill(1.85*sc+xp,0.55*sc+yp,WHITE);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    line(x31*sc+xp,-y31*sc+yp,x32*sc+xp,-y32*sc+yp);
    line(x32*sc+xp,-y32*sc+yp,x33*sc+xp,-y33*sc+yp);
    line(x33*sc+xp,-y33*sc+yp,x34*sc+xp,-y34*sc+yp);
    line(x34*sc+xp,-y34*sc+yp,x31*sc+xp,-y31*sc+yp);
    floodfill(1.75*sc+xp,0.65*sc+yp,WHITE);
    floodfill(3.08*sc+xp,0.65*sc+yp,WHITE);
}   
void PesawatV2(float xp,float yp,float sc)
{  
    float x0,y0,x1,y1,x2,y2,x3,y3,x4,y4;
    float x5,y5,x6,y6,x7,y7,x8,y8,x9,y9;
    float x10,y10,x11,y11,x12,y12,x13,y13,x14,y14;
    float x15,y15,x16,y16,x17,y17,x18,y18,x19,y19;
    float x20,y20,x21,y21,x22,y22,x23,y23,x24,y24;
    float x25,y25,x26,y26,x27,y27,x28,y28,x29,y29;
//Badan Pesawat 
    x0=3.15896;y0=-0.00964;//A
    x1=2.5;y1=-0.5;//B
    x2=0.98929;y2=-0.49999;//C
    x3=-0.99457;y3=-1.65516;//D
    x4=-1.61532;y4=-1.525;//E
    x5=-0.4;y5=0;//F
    x6=-1.20293;y6=-0.50389;//g
    x7=-3.17434;y7=-0.45161;//h
    x8=-3;y8=0;//i
    x9=-3.50389;y9=0.81022;//j
    x10=-2.8;y10=0.8;//k
    x11=-2.02124;y11=0.35689;//L
    x12=1.50433;y12=0.34363;//M
    x13=1.92846;y13=0.62197;
    x14=2.45862;y14=0.62197;//O
    x15=2.76788;y15=0.49913;//p
    x16=1.14897;y16=-0.4071;//Q
    x17=-2.7;y17=-0.5;//R
    x18=-2.21;y18=0.01;//S
    x19=1.09;y19=0.35;//T
    x20=-0.69067;y20=1.77595;//U
    x21=-1.12154;y21=1.49082;//V
    x22=-0.86;y22=0.35;//W
    x23=-0.37;y23=0.35;//X
    x24=2,4;y24=0.5;//Y
    x25=2.4;y25=0.3;//Z
    x26=2.92;y26=0.3;//A1
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,RED);
    line(-x0*sc+xp,-y0*sc+yp,-x1*sc+xp,-y1*sc+yp);
    line(-x1*sc+xp,-y1*sc+yp,-x2*sc+xp,-y2*sc+yp);
    line(-x2*sc+xp,-y2*sc+yp,-x3*sc+xp,-y3*sc+yp);
    line(-x3*sc+xp,-y3*sc+yp,-x4*sc+xp,-y4*sc+yp);
    line(-x4*sc+xp,-y4*sc+yp,-x6*sc+xp,-y6*sc+yp);
    line(-x6*sc+xp,-y6*sc+yp,-x17*sc+xp,-y17*sc+yp);
    line(-x9*sc+xp,-y9*sc+yp,-x10*sc+xp,-y10*sc+yp);
    line(-x10*sc+xp,-y10*sc+yp,-x11*sc+xp,-y11*sc+yp);
    line(-x11*sc+xp,-y11*sc+yp,-x12*sc+xp,-y12*sc+yp);
    line(-x12*sc+xp,-y12*sc+yp,-x13*sc+xp,-y13*sc+yp);
    line(-x13*sc+xp,-y13*sc+yp,-x14*sc+xp,-y14*sc+yp);
    line(-x14*sc+xp,-y14*sc+yp,-x15*sc+xp,-y15*sc+yp);
    line(-x3*sc+xp,-y3*sc+yp,-x16*sc+xp,-y16*sc+yp);
    line(-x4*sc+xp,-y4*sc+yp,-x5*sc+xp,-y5*sc+yp);  
    line(-x15*sc+xp,-y15*sc+yp,-x24*sc+xp,-y24*sc+yp);
    line(-x24*sc+xp,-y24*sc+yp,-x25*sc+xp,-y25*sc+yp);
    line(-x25*sc+xp,-y25*sc+yp,-x26*sc+xp,-y26*sc+yp);
    line(-x26*sc+xp,-y26*sc+yp,-x0*sc+xp,-y0*sc+yp);
    line(-x17*sc+xp,-y17*sc+yp,-x7*sc+xp,-y7*sc+yp);
    line(-x7*sc+xp,-y7*sc+yp,-x8*sc+xp,-y8*sc+yp);
    line(-x8*sc+xp,-y8*sc+yp,-x9*sc+xp,-y9*sc+yp);
    line(-x8*sc+xp,-y8*sc+yp,-x18*sc+xp,-y18*sc+yp);
    floodfill(3.03*sc+xp,-0.7*sc+yp, WHITE);
    floodfill(-3.15*sc+xp,0*sc+yp, WHITE);
    
    //Sayap Samping
    setcolor(WHITE);
    line(-x19*sc+xp,-y19*sc+yp,-x20*sc+xp,-y20*sc+yp);
    line(-x20*sc+xp,-y20*sc+yp,-x21*sc+xp,-y21*sc+yp);
    line(-x21*sc+xp,-y21*sc+yp,-x22*sc+xp,-y22*sc+yp);
    line(-x21*sc+xp,-y21*sc+yp,-x23*sc+xp,-y23*sc+yp);
    floodfill(1.09*sc+xp,-1.48*sc+yp, WHITE);
    floodfill(0.84*sc+xp,-0.4*sc+yp, WHITE);
    floodfill(-0.86*sc+xp,-0.44*sc+yp, WHITE);
    //Kaca
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    line(-x15*sc+xp,-y15*sc+yp,-x24*sc+xp,-y24*sc+yp);
    line(-x24*sc+xp,-y24*sc+yp,-x25*sc+xp,-y25*sc+yp);
    line(-x25*sc+xp,-y25*sc+yp,-x26*sc+xp,-y26*sc+yp);
    line(-x15*sc+xp,-y15*sc+yp,-x26*sc+xp,-y26*sc+yp);
    floodfill(-2.5*sc+xp,-0.4*sc+yp,WHITE);    
}
void Gedung1(float xp, float yp, float sc)
{
    float x0,y0,x1,y1,x2,y2,x3,y3,x4,y4;
    float x5,y5,x6,y6,x7,y7,x8,y8,x9,y9;
    float x10,y10;
    
    x0=4.5;y0=0;//H
    x1=4.5;y0=5.5;//G
    x2=7;y2=6;//B
    x3=9.5;y3=5.5;//C
    x4=9.5;y4=0;//D
    x5=7;y5=0;//A
    x6=4.99;y6=5.6;//I
    x7=5.4;y7=6.2;//J
    x8=7.03;y8=6.5;//K
    x9=8.6;y9=6.2;//L
    x10=9;y10=5.6;//M
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, DARKGRAY);//BAWAH
    line(x0*sc+xp,-y0*sc+yp,x1*sc+xp,-y1*sc+yp);
    line(x2*sc+xp,-y2*sc+yp,x3*sc+xp,-y3*sc+yp);
    line(x2*sc+xp,-y2*sc+yp,x0*sc+xp,-y0*sc+yp);
    line(x3*sc+xp,-y3*sc+yp,x4*sc+xp,-y4*sc+yp);
    line(x5*sc+xp,-y5*sc+yp,x2*sc+xp,-y2*sc+yp);
    line(x6*sc+xp,-y6*sc+yp,x7*sc+xp,-y7*sc+yp);
    line(x7*sc+xp,-y7*sc+yp,x8*sc+xp,-y8*sc+yp);
    line(x8*sc+xp,-y8*sc+yp,x9*sc+xp,-y9*sc+yp);
    line(x9*sc+xp,-y9*sc+yp,x10*sc+xp,-y10*sc+yp);
    line(x2*sc+xp,-y2*sc+yp,x8*sc+xp,-y8*sc+yp);
    floodfill(9.34*sc+xp,-4.917*sc+yp,WHITE);
    floodfill(7.1*sc+xp,-4.917*sc+yp,WHITE);
    floodfill(6.82*sc+xp,-4.917*sc+yp,WHITE);
    floodfill(4.61*sc+xp,-4.917*sc+yp,WHITE);
    setfillstyle(SOLID_FILL, DARKGRAY);//Atas
    floodfill(7.1*sc+xp,-6.2*sc+yp,WHITE);
    floodfill(8.85*sc+xp,-5.7*sc+yp,WHITE);
    floodfill(6.99*sc+xp,-6.44*sc+yp,WHITE);
    floodfill(5.1*sc+xp,-5.67*sc+yp,WHITE);
}
void Gedung2(float xp, float yp, float sc)
{
    float x0,y0,x1,y1,x2,y2,x3,y3,x4,y4;
    float x5,y5,x6,y6,x7,y7,x8,y8,x9,y9;
    float x10,y10,x11,y11;

    x0=10.03;y0=0;//E
    x1=10;y1=8;//F
    x2=13;y2=9;//N
    x3=13;y3=0;//O
    x4=16;y4=8;//P
    x5=16;y5=0;//Q
    x6=12.8;y6=8.93;//R
    x7=12.8;y7=9.2;//S
    x8=13.2;y8=9.2;//T
    x9=13.2;y9=8.93;//U
    x10=13;y11=9.2;//V
    x11=13;y11=10;//W
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, DARKGRAY);
    line(x0*sc+xp,-y0*sc+yp,x1*sc+xp,-y1*sc+yp);
    line(x1*sc+xp,-y1*sc+yp,x2*sc+xp,-y2*sc+yp);
    line(x2*sc+xp,-y2*sc+yp,x3*sc+xp,-y3*sc+yp);
    line(x2*sc+xp,-y2*sc+yp,x4*sc+xp,-y4*sc+yp);
    line(x4*sc+xp,-y4*sc+yp,x5*sc+xp,-y5*sc+yp);
    floodfill(15.8*sc+xp, -7.8*sc+yp, WHITE);
    floodfill(13.2*sc+xp, -8.2*sc+yp, WHITE);
    floodfill(12.8*sc+xp, -8.2*sc+yp, WHITE);
    floodfill(10.2*sc+xp, -7.8*sc+yp, WHITE);
    //Atas
    setfillstyle(SOLID_FILL, BLACK);
    line(x6*sc+xp,-y6*sc+yp,x7*sc+xp,-y7*sc+yp);
    line(x7*sc+xp,-y7*sc+yp,x8*sc+xp,-y8*sc+yp);
    line(x8*sc+xp,-y8*sc+yp,x9*sc+xp,-y9*sc+yp);
    line(x10*sc+xp,-y10*sc+yp,x11*sc+xp,-y11*sc+yp);
    floodfill(12.84*sc+xp, -9.11*sc+yp, WHITE);
}
void Gedung3(float xp, float yp, float sc)
{
    float x0,y0,x1,y1,x2,y2,x3,y3,x4,y4;
    float x5,y5,x6,y6,x7,y7,x8,y8,x9,y9;
    float x10,y10,x11,y11,x12,y12,x13,y13;

    x0=16.2;y0=0;//A1
    x1=16.19;y1=4.61;//Z
    x2=17.01;y2=4.8;//B1
    x3=17.78;y3=4.62;//C1
    x4=17.8;y4=0;//E1
    x5=17.0;y5=4.66;//D1
    x6=16.4;y6=4.66;//F1
    x7=16.4;y7=5;//G1
    x8=17;y8=5.2;//H1
    x9=17.6;y9=5;//I1
    x10=17.6;y10=4.66;//J1
    x11=16.8;y11=5.13;//K1
    x12=17;y12=5.6;//L1
    x13=17.2;y13=5.14;//M1
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, DARKGRAY);
    line(x0*sc+xp,-y0*sc+yp,x1*sc+xp,-y1*sc+yp);
    line(x1*sc+xp,-y1*sc+yp,x2*sc+xp,-y2*sc+yp);
    line(x2*sc+xp,-y2*sc+yp,x3*sc+xp,-y3*sc+yp);
    line(x3*sc+xp,-y3*sc+yp,x4*sc+xp,-y4*sc+yp);
    line(x2*sc+xp,-y2*sc+yp,x5*sc+xp,-y5*sc+yp);
    line(x2*sc+xp,-y2*sc+yp,x8*sc+xp,-y8*sc+yp);
    line(x12*sc+xp,-y12*sc+yp,x8*sc+xp,-y8*sc+yp);
    floodfill(17.68*sc+xp, -2.4*sc+yp, WHITE);
    floodfill(16.31*sc+xp, -2.4*sc+yp, WHITE);
    //ATAS
    line(x6*sc+xp,-y6*sc+yp,x7*sc+xp,-y7*sc+yp);
    line(x7*sc+xp,-y7*sc+yp,x8*sc+xp,-y8*sc+yp);
    line(x8*sc+xp,-y8*sc+yp,x9*sc+xp,-y9*sc+yp);
    line(x9*sc+xp,-y9*sc+yp,x10*sc+xp,-y10*sc+yp);
    floodfill(17.26*sc+xp, -4.9*sc+yp, WHITE);
    floodfill(16.65*sc+xp, -4.9*sc+yp, WHITE);
    //pucuk
    line(x11*sc+xp,-y11*sc+yp,x12*sc+xp,-y12*sc+yp);
    line(x12*sc+xp,-y12*sc+yp,x13*sc+xp,-y13*sc+yp);
    floodfill(17.07*sc+xp, -5.31*sc+yp, WHITE);
    floodfill(16.93*sc+xp, -5.31*sc+yp, WHITE);
}
void Gedung4(float xp, float yp, float sc)
{
    float x0,y0,x1,y1,x2,y2,x3,y3,x4,y4;
    float x5,y5,x6,y6,x7,y7,x8,y8,x9,y9;
    float x10,y10,x11,y11,x12,y12,x13,y13;

    x0=0.5;y0=0;//N1
    x1=0.5;y1=1.5;//O1
    x2=3.5;y2=1.5;//P1
    x3=4;y3=1.2;//Q1
    x4=4;y4=0;//R1
    x5=3.5;y5=0;//S1
    x6=0.6;y6=1.4;//T1
    x7=0.6;y7=1.2;//U1
    x8=3.4;y8=1.4;//V1
    x9=3.4;y9=1.2;//W1
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,DARKGRAY);
    line(x0*sc+xp,-y0*sc+yp,x1*sc+xp,-y1*sc+yp);
    line(x1*sc+xp,-y1*sc+yp,x2*sc+xp,-y2*sc+yp);
    line(x2*sc+xp,-y2*sc+yp,x3*sc+xp,-y3*sc+yp);
    line(x3*sc+xp,-y3*sc+yp,x4*sc+xp,-y4*sc+yp);
    line(x2*sc+xp,-y2*sc+yp,x5*sc+xp,-y5*sc+yp);
    line(x6*sc+xp,-y6*sc+yp,x8*sc+xp,-y8*sc+yp);
    line(x8*sc+xp,-y8*sc+yp,x9*sc+xp,-y9*sc+yp);
    line(x7*sc+xp,-y7*sc+yp,x9*sc+xp,-y9*sc+yp);
    line(x6*sc+xp,-y6*sc+yp,x7*sc+xp,-y7*sc+yp);
    floodfill(0.55*sc+xp,-0.4*sc+yp,WHITE);
    floodfill(3.45*sc+xp,-0.4*sc+yp,WHITE);
    floodfill(0.55*sc+xp,-1.45*sc+yp,WHITE);
    floodfill(3.45*sc+xp,-1.45*sc+yp,WHITE);
    floodfill(3.97*sc+xp,-1.19*sc+yp,WHITE);
    floodfill(3.53*sc+xp,-1.44*sc+yp,WHITE);
}
void Awan(float xp,float yp,float sc)
{
    float x0,y0,x1,y1,x2,y2,x3,y3,x4,y4;
    float x5,y5;

    x0=3.1506;y0=3.2954;
    x1=5.3198;y1=6.2771;
    x2=8.5009;y2=6.6746;
    x3=12.4;y3=3.3324;
    x4=7.5618;y4=70.7284;
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    arc(x0*sc+xp,-y0*sc+yp,73,274,2.831*sc);
    arc(x1*sc+xp,-y1*sc+yp,65,206,2.2518*sc);
    arc(x2*sc+xp,-y2*sc+yp,340,159,3.6669*sc);
    arc(x3*sc+xp,-y3*sc+yp,262,118,2.8734*sc);
    arc(x4*sc+xp,-y4*sc+yp,266,274,70.401*sc);
    floodfill(0.8499*sc+xp,-3.5341*sc+yp,WHITE);
    floodfill(14.991*sc+xp,-3.5341*sc+yp,WHITE);
    floodfill(8.4868*sc+xp,-9.931*sc+yp,WHITE);
}
void Peluru(float xp, float yp, float sc)
{
    float x0,y0,x1,y1,x2,y2,x3,y3,x4,y4;
    float x5,y5,x6,y6,x7,y7,x8,y8;

    x0=0;y0=0.5;//A
    x1=2;y1=0.5;//B
    x2=2.5;y2=0;//G
    x3=2;y3=-0.5;//H
    x4=0;y4=-0.5;//I
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, YELLOW);
    line(x0*sc+xp,y0*sc+yp,x1*sc+xp,y1*sc+yp);
    line(x1*sc+xp,y1*sc+yp,x2*sc+xp,y2*sc+yp);
    line(x2*sc+xp,y2*sc+yp,x3*sc+xp,y3*sc+yp);
    line(x3*sc+xp,y3*sc+yp,x4*sc+xp,y4*sc+yp);
    line(x0*sc+xp,y0*sc+yp,x4*sc+xp,y4*sc+yp);
    floodfill(2.4*sc+xp,0*sc+yp,WHITE);
    floodfill(0.1*sc+xp,0*sc+yp,WHITE);
}
void gameplay()
{
    cleardevice();
    srand(time(0));
    float sc,xplayer,yplayer;
    float xp1,yp1,xp2,yp2,xp3,yp3,xp4,yp4;
    float xg1,yg1,xg2,yg2,xg3,yg3,xg4,yg4,xg5,yg5,xg6,yg6,xg7,yg7,xg8,yg8,xg9,yg9;
    int scA1,scA2,scA3,scA4,scA5,scA6,scA7,scA8;;
    float xa1,ya1,xa2,ya2,xa3,ya3,xa4,ya4,xa5,ya5,xa6,ya6,xa7,ya7,xa8,ya8;
    float fpeluru[20],xpeluru[20],ypeluru[20];
    char skorstr[999];
    int z=0,skor=0;
    int page = 0;
    xp1=800;
    yp1=400;
    xp2=400;
    yp2=400;
    xp3=700;
    yp3=200;
    xp4=200;
    yp4=350;
    xg1=400;
    yg1=720;
    xg2=200;
    yg2=720;
    xg3=600;
    yg3=720;
    xg4=450;
    yg4=720;
    xg5=200;
    yg5=720;
    xg6=600;
    yg6=700;
    xg7=850;
    yg7=720;
    xg8=950;
    yg8=720;
    xg9=50;
    yg9=720;
    scA1=10;
    scA2=5;
    scA3=10;
    scA4=14;
    scA5=10;
    scA6=5;
    scA7=10;
    scA8=14;
    xa1=40;
    ya1=400;
    xa2=190;
    ya2=200;
    xa3=800;
    ya3=500;
    xa4=1000;
    ya4=100;
    xa5=700;
    ya5=400;
    xa6=900;
    ya6=250;
    xa7=1200;
    ya7=300;
    xa8=500;
    ya8=200;

    for (int i = 0; i < 20; i++)
    {
        fpeluru[i]=0;
    }
    //Player
    xplayer= 200;
    yplayer= 200;
    
    while(1)
    {
        setactivepage(page);
        setvisualpage(1-page);
        cleardevice();
        //readimagefile("langit1.jpg",0,0,1400,700);
        PesawatV2(xp1,yp1,20);
            xp1=xp1-8;
            if(xp1<=0)
            {
                xp1=1500;
                yp1=rand()%450;
                if(yp1<70){
                    yp1=70;
                }
            }
        PesawatV2(xp2,yp2,20);
            xp2=xp2-8;
            if(xp2<=0)
            {
                xp2=1500;
                yp2=rand()%450;
                if(yp2<70){
                    yp2=70;
                }
            }
        PesawatV2(xp3,yp3,20);
            xp3=xp3-8;
            if(xp3<=0)
            {
                xp3=1500;
                yp3=rand()%450;
                if(yp3<70){
                    yp3=70;
                }
            }
        PesawatV2(xp4,yp4,20);
        xp4=xp4-8;
        if(xp4<=0)
        {
            xp4=1500;
            yp4=rand()%450;
            if(yp4<70){
            yp4=70;
            }
        }
        for(int i=0; i < 20; i++)
        {
            //peluru
            if((xpeluru[i]>-3*20+xp1)&&(xpeluru[i]<-1.5*20+xp1)&&(ypeluru[i]<0.5*20+yp1)&&(ypeluru[i]>-0.62*20+yp1))
            {
                xp1=1500;
                yp1=rand()%450;
                if(yp1<70){
                    yp1=70;
                }
                z+=3;
                fpeluru[i]=0;
                skor=1;
            }
            if((xpeluru[i]>-3*25+xp2)&&(xpeluru[i]<-1.5*25+xp2)&&(ypeluru[i]<0.5*25+yp2)&&(ypeluru[i]>-0.62*25+yp2))
            {
                xp2=1500;
                yp2=rand()%450;
                if(yp2<70){
                    yp2=70;
                }
                z+=3;
                fpeluru[i]=0;
                skor=1;
            }
            if((xpeluru[i]>-3*25+xp3)&&(xpeluru[i]<-1.5*25+xp3)&&(ypeluru[i]<0.5*25+yp3)&&(ypeluru[i]>-0.62*25+yp3))
            {
                xp3=1500;
                yp3=rand()%450;
                if(yp3<70){
                    yp3=70;
                }
                z+=3;
                fpeluru[i]=0;
                skor=1;
            }
            if((xpeluru[i]>-3*25+xp4)&&(xpeluru[i]<-1.5*25+xp4)&&(ypeluru[i]<0.5*25+yp4)&&(ypeluru[i]>-0.62*25+yp4))
            {
                xp4=1500;
                yp4=rand()%450;
                if(yp4<70){
                    yp4=70;
                }
                z+=3;
                fpeluru[i]=0;
                skor=1;
            }
        }
        Gedung1(xg1,yg1,20);
        xg1=xg1-6;
        if(xg1<-400)
        {
            xg1=1500;
        }
        Gedung2(xg2,yg2,20);
        xg2=xg2-6;
        if(xg2<-200)
        {
            xg2=1500;
        }
        Gedung2(xg3,yg3,20);
        xg3=xg3-6;
        if(xg3<-400)
        {
            xg3=1500;
        }
        Gedung3(xg4,yg4,20);
        xg4=xg4-6;
        if(xg4<-400)
        {
            xg4=1500;
        }
        Gedung4(xg5,yg5,20);
        xg5=xg5-6;
        if(xg5<-200)
        {
            xg5=1500;
        }
        Gedung4(xg6,yg6,20);
        xg6=xg6-6;
        if(xg6<-400)
        {
            xg6=1500;
        }
        Gedung2(xg7,yg7,20);
        xg7=xg7-6;
        if(xg7<-400)
        {
            xg7=1500;
        }
        Gedung2(xg8,yg8,20);
        xg8=xg8-6;
        if(xg8<-400)
        {
            xg8=1500;
        }
        Gedung3(xg9,yg9,20);
        xg9=xg9-6;
        if(xg9<-400)
        {
            xg9=1500;
        }
        xplayer=xplayer-6;
        PesawatV1(xplayer,yplayer,20);
        Awan(xa1,ya1,scA1);
        xa1=xa1-6;
        if(xa1<-400)
        {
            xa1=1450;
        }
        Awan(xa2,ya2,scA2);
        xa2=xa2-6;
        if(xa2<-20)
        {
            xa2=1450;
        }
        Awan(xa3,ya3,scA3);
        xa3=xa3-6;
        if(xa3<-20)
        {
            xa3=1450;
        }
        Awan(xa4,ya4,4);
        xa4=xa4-6;
        if(xa4<-20)
        {
            xa4=1450;
        }
         Awan(xa5,ya5,scA5);
        xa5=xa5-6;
        if(xa5<-400)
        {
            xa5=1450;
        }
        Awan(xa6,ya6,scA6);
        xa6=xa6-6;
        if(xa6<-20)
        {
            xa6=1450;
        }
        Awan(xa7,ya7,scA7);
        xa7=xa7-6;
        if(xa7<-20)
        {
            xa7=1450;
        }
        Awan(xa8,ya8,4);
        xa8=xa8-6;
        if(xa8<-20)
        {
            xa8=1450;
        }
        //Skor
        if(skor==1)
        {
            z=z+3;
            skor=0;
        }
        if(xp1>=1500||xp2>=1500||xp3>=1500||xp4>=1500)
        {
            z=z-3;
        }
        sprintf(skorstr, "---Score = %d---", z);
        setcolor(YELLOW);
        settextstyle(8,0,1);
        outtextxy(650,10, skorstr);
        outtextxy(200,10, "Player");
        
        //Player
        if( GetAsyncKeyState(68) < 0 )
        {
            xplayer=xplayer+12;
        }
        if( GetAsyncKeyState(65) < 0 )
        {
            xplayer=xplayer-12;
        }
        if( GetAsyncKeyState(83) < 0 )
        {
            yplayer=yplayer+12;
        }
        if( GetAsyncKeyState(87) < 0 )
        {
            yplayer=yplayer-12;
        }
        
        //Batas atas bawah kanan kiri
        if(yplayer<65)
        {
            yplayer=65;
        }
        if(xplayer<70)
        {
            xplayer=70;
        }
        if(xplayer>1320)
        {
            xplayer=1320;
        }
        if(yplayer>670)
        {
            yplayer=670;
        }
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            for (int i = 0; i < 20; i++) {
                if (fpeluru[i] == 0)
                {
                    fpeluru[i]=1;
                    xpeluru[i]=xplayer+(2.1*20);
                    ypeluru[i]=yplayer+(0.65*20);
                    clearmouseclick(WM_LBUTTONDOWN);
                    break;
                }
            }
        }
        for (int i = 0; i < 20; i++) {
            if(fpeluru[i]==1)
            {
                xpeluru[i]=xpeluru[i]+24;
                Peluru(xpeluru[i],ypeluru[i],2);
                if (xpeluru[i] > 1500)
                {
                    fpeluru[i] = 0;
                }
            }
        }
        if( GetAsyncKeyState(27) < 0 )
        {   
            page=1-page;
            cleardevice();
            gameover();
        }
        page = 1-page;
        delay(20);
    }
}
void gameover()
{
    cleardevice();
    int section;
    int page=0;
    setactivepage(page);
	setvisualpage(page);
	while(1)
	{
    setcolor(RED);
    settextstyle(0, HORIZ_DIR, 3);
    outtextxy(600, 300, "GAME OVER");
    setcolor(WHITE);
	settextstyle(0, HORIZ_DIR, 3);
	outtextxy(400, 350, "Press [Enter] to Main Menu");
    if( GetAsyncKeyState('\r') < 0 )
		{
			cleardevice();	
			menu();	
            break;
        }
    }
}
void loadingscreen()
{
    settextstyle(0, HORIZ_DIR, 2);
    outtextxy(675,350, "Loading...");
    rectangle(199+460,179+150, 350+460, 191+150 );
    for(int i = 0; i<150;i++)
    {
        setcolor(4);
        rectangle(200+460,180+150,200+460+i, 190+150 );
        delay(50);
    }
    cleardevice();
    return menu();
}
void menu()
{
	//settextstyle(10, HORIZ_DIR, 5);
	//outtextxy(500, 100, "Fighter Pyscho Pilot")    
    readimagefile("Assets/MmFPP.jpg",0,0,1400,700);
	settextstyle(0, HORIZ_DIR, 3);
    setcolor(15);
	outtextxy(290, 250, "Play");
	outtextxy(200, 300, "How To Play");
	outtextxy(280, 350, "About");
	outtextxy(290, 400, "Exit");
	controls_menu();
}
void controls_menu()
{
    int cm =  1;
	while(1)
       { 
			if (section==0)
            {
                char put;
					    put = getch();
					    if(put == KEY_UP)
					    {
					    	if(cm != 1)
					    	{
					    		cm = cm-1;
							}
						}
						else if(put == KEY_DOWN)
						{
							if(cm != 5)
					    	{
					    		cm = cm+1;
							}
                        }
						if(GetAsyncKeyState('\r') < 0 )
						{
							if(cm  == 1)
							{
								gameplay();
                                break;
							}
							else if(cm  == 2)
							{
                                section=1;
								howtoplay();
                                break;
							}
							else if(cm  == 3)
							{
                                section=3;
                                about();
	                            break;
							}
							else if(cm  == 4)
							{
								closegraph();
								exit(0);
							}
                        }							
            }     
    if(cm  == 1)
    	{		
				settextstyle(0, HORIZ_DIR, 3);
				setcolor(1);
				outtextxy(290, 250, "Play");
				setcolor(15);
				outtextxy(200, 300, "How To Play");
				outtextxy(280, 350, "About");
				outtextxy(290, 400, "Exit");
		}
		else if(cm  == 2)
		{
				settextstyle(0, HORIZ_DIR, 3);
				outtextxy(290, 250, "Play");
				setcolor(1);
				outtextxy(200, 300, "How To Play");
				setcolor(15);
				outtextxy(280, 350, "About");
				outtextxy(290, 400, "Exit");
		}
		else if(cm  == 3)
		{
				settextstyle(0, HORIZ_DIR, 3);
				outtextxy(290, 250, "Play");			
				outtextxy(200, 300, "How To Play");
				setcolor(1);
				outtextxy(280, 350, "About");
				setcolor(15);
				outtextxy(290, 400, "Exit");
		}
		else if(cm  == 4)
		{
				settextstyle(0, HORIZ_DIR, 3);
				outtextxy(290, 250, "Play");				
				outtextxy(200, 300, "How To Play");
				outtextxy(280, 350, "About");
				setcolor(1);
				outtextxy(290, 400, "Exit");
				setcolor(15);
		}
    }
}
void howtoplay()
{
        cleardevice();
        readimagefile("Assets/GpFPP.jpg",0,0,1400,700);
        howtoplay_controls();
}
void howtoplay_controls()
{
    while(1)
    {
        if(section==1)
        {
            if( GetAsyncKeyState(27) < 0 )
            {
                section=0;
                cleardevice();
                menu();
                break;
            }
            if( GetAsyncKeyState(39) < 0 )
            {
                section=2;
                cleardevice();
                controlsgame();
                break;
            }
        }
    }
}
void controlsgame()
{
        cleardevice();
        readimagefile("Assets/GcFPP.jpg",0,0,1400,700);
        controlsgame_controls();
}
void controlsgame_controls()
{
    while(1)
    {
        if(section==2)
        {
            if( GetAsyncKeyState(27) < 0)
            {
                section=0;
                cleardevice();
                menu();
                break;
            }
            if( GetAsyncKeyState(37) < 0 )
            {
                section=1;
                cleardevice();
                howtoplay();
                break;
            }
        }
    }
}
void about()
{
    cleardevice();
    readimagefile("Assets/AboutFPP.jpg",0,0,1400,700);
    about_controls();
}
void about_controls()
{
    while(1)
    {
        if(section==3)
        {
            if( GetAsyncKeyState(27) < 0)
            {
                section=0;
                cleardevice();
                menu();
                break;
            }
        }
    }
}
int main()
{
    initwindow(1400, 700, "Fighter Pyscho Pilot");
    loadingscreen();
    cleardevice();
    return 0;
}