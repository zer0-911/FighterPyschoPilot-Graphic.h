#include <iostream>
#include <windows.h>
#include <time.h>
#include <graphics.h>


using namespace std;
class CPesawatPlayer
{
private:
    float xp,yp,rp;
    int flag;
    float x0,y0,x1,y1,x2,y2,x3,y3,x4,y4;
    float x5,y5,x6,y6,x7,y7,x8,y8,x9,y9;
    float x10,y10,x11,y11,x12,y12,x13,y13,x14,y14;
    float x15,y15,x16,y16,x17,y17,x18,y18,x19,y19;
    float x20,y20,x21,y21,x22,y22,x23,y23,x24,y24;
    float x25,y25,x26,y26,x27,y27,x28,y28,x29,y29;
    float x30,y30,x31,y31,x32,y32,x33,y33,x34,y34;
    float x35,y35,x36,y36,x37,y37,x38,y38,x39,y39;
    float x40,y40,x41,y41,x42,y42,x43,y43,x44,y44;
    float x45,y45,x46,y46,x47,y47,x48,y48,x49,y49;
    float x50,y50,x51,y51,x52,y52,x53,y53;
    
public:
    float xpel[100],ypel[100], xrok[100], yrok[100], xrok2[100], yrok2[100];
    int fpel[100],froket[4];
    int i;
    void init(float xplayer,float yplayer,float rplayer)
    {
        xp=xplayer;
        yp=yplayer;
        rp=rplayer;
        flag = 0;
        for (int  i =0;i<100;i++)
        {
            xpel[i]=0;
            ypel[i]=0;
            fpel[i]=0;
        }
        for (int  i =0;i<5;i++)
        {
            xrok[i]=0;
            yrok[i]=0;
            xrok2[i]=0;
            yrok2[i]=0;
            froket[i]=0;
        }
    }
    void GerakPesawat()
    {
         if( GetAsyncKeyState(68) < 0 )
        {
            xp=xp+12;
        }
        if( GetAsyncKeyState(65) < 0 )
        {
            xp=xp-12;
        }
        if( GetAsyncKeyState(83) < 0 )
        {
            yp=yp+12;
        }
        if( GetAsyncKeyState(87) < 0 )
        {
            yp=yp-12;
        }
        //Batas atas bawah kanan kiri
        if(yp<65)
        {
            yp=65;
        }
        if(xp<70)
        {
            xp=70;
        }
        if(xp>1320)
        {
            xp=1320;
        }
        if(yp>670)
        {
            yp=670;
        }
    }
    void Pesawat()
    {
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
        line(x0*rp+xp,-y0*rp+yp,x1*rp+xp,-y1*rp+yp);
        line(x1*rp+xp,-y1*rp+yp,x2*rp+xp,-y2*rp+yp);
        line(x2*rp+xp,-y2*rp+yp,x3*rp+xp,-y3*rp+yp);
        line(x3*rp+xp,-y3*rp+yp,x4*rp+xp,-y4*rp+yp);
        line(x4*rp+xp,-y4*rp+yp,x6*rp+xp,-y6*rp+yp);
        line(x6*rp+xp,-y6*rp+yp,x17*rp+xp,-y17*rp+yp);
        line(x9*rp+xp,-y9*rp+yp,x10*rp+xp,-y10*rp+yp);
        line(x10*rp+xp,-y10*rp+yp,x11*rp+xp,-y11*rp+yp);
        line(x11*rp+xp,-y11*rp+yp,x12*rp+xp,-y12*rp+yp);
        line(x12*rp+xp,-y12*rp+yp,x13*rp+xp,-y13*rp+yp);
        line(x13*rp+xp,-y13*rp+yp,x14*rp+xp,-y14*rp+yp);
        line(x14*rp+xp,-y14*rp+yp,x15*rp+xp,-y15*rp+yp);
        line(x3*rp+xp,-y3*rp+yp,x16*rp+xp,-y16*rp+yp);
        line(x4*rp+xp,-y4*rp+yp,x5*rp+xp,-y5*rp+yp);  
        line(x15*rp+xp,-y15*rp+yp,x24*rp+xp,-y24*rp+yp);
        line(x24*rp+xp,-y24*rp+yp,x25*rp+xp,-y25*rp+yp);
        line(x25*rp+xp,-y25*rp+yp,x26*rp+xp,-y26*rp+yp);
        line(x26*rp+xp,-y26*rp+yp,x0*rp+xp,-y0*rp+yp);
        line(x17*rp+xp,-y17*rp+yp,x7*rp+xp,-y7*rp+yp);
        line(x7*rp+xp,-y7*rp+yp,x8*rp+xp,-y8*rp+yp);
        line(x8*rp+xp,-y8*rp+yp,x9*rp+xp,-y9*rp+yp);
        line(x8*rp+xp,-y8*rp+yp,x18*rp+xp,-y18*rp+yp);
        floodfill(-3.03*rp+xp,-0.7*rp+yp, WHITE);
        floodfill(3.15*rp+xp,0*rp+yp, WHITE);
        //Sayap Samping
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,GREEN);
        line(x19*rp+xp,-y19*rp+yp,x20*rp+xp,-y20*rp+yp);
        line(x20*rp+xp,-y20*rp+yp,x21*rp+xp,-y21*rp+yp);
        line(x21*rp+xp,-y21*rp+yp,x22*rp+xp,-y22*rp+yp);
        line(x21*rp+xp,-y21*rp+yp,x23*rp+xp,-y23*rp+yp);
        floodfill(-1.09*rp+xp,-1.48*rp+yp, WHITE);
        floodfill(-0.84*rp+xp,-0.4*rp+yp, WHITE);
        floodfill(0.86*rp+xp,-0.44*rp+yp, WHITE);
        //Kaca
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        line(x15*rp+xp,-y15*rp+yp,x24*rp+xp,-y24*rp+yp);
        line(x24*rp+xp,-y24*rp+yp,x25*rp+xp,-y25*rp+yp);
        line(x25*rp+xp,-y25*rp+yp,x26*rp+xp,-y26*rp+yp);
        line(x15*rp+xp,-y15*rp+yp,x26*rp+xp,-y26*rp+yp);
        floodfill(2.5*rp+xp,-0.4*rp+yp,WHITE);    
        //Moncong Tembak
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,BLACK);
        line(x27*rp+xp,-y27*rp+yp,x28*rp+xp,-y28*rp+yp);
        line(x29*rp+xp,-y29*rp+yp,x30*rp+xp,-y30*rp+yp);
        floodfill(1.85*rp+xp,0.55*rp+yp,WHITE);
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        line(x31*rp+xp,-y31*rp+yp,x32*rp+xp,-y32*rp+yp);
        line(x32*rp+xp,-y32*rp+yp,x33*rp+xp,-y33*rp+yp);
        line(x33*rp+xp,-y33*rp+yp,x34*rp+xp,-y34*rp+yp);
        line(x34*rp+xp,-y34*rp+yp,x31*rp+xp,-y31*rp+yp);
        floodfill(1.75*rp+xp,0.65*rp+yp,WHITE);
        floodfill(3.08*rp+xp,0.65*rp+yp,WHITE);
        //roket kanan
        x35=-0.21;y35=-1.2;//G1
        x36=0.14;y36=-1.2;//H1
        x37=0.2;y37=-1.2;//I1
        x38=0.36;y38=-1.12;//A1
        x39=0.2;y39=-1.04;//J1
        x40=0.14;y40=-1.04;//K1
        x41=0.06;y41=-1.04;//L1
        x42=0.14;y42=-1.24;//M1
        x43=0.14;y43=-1;//N1
        line(x35*rp+xp,-y35*rp+yp,x37*rp+xp,-y37*rp+yp);
        line(x37*rp+xp,-y37*rp+yp,x38*rp+xp,-y38*rp+yp);
        line(x38*rp+xp,-y38*rp+yp,x39*rp+xp,-y39*rp+yp);
        line(x39*rp+xp,-y39*rp+yp,x41*rp+xp,-y41*rp+yp);
        line(x36*rp+xp,-y36*rp+yp,x42*rp+xp,-y42*rp+yp);
        line(x42*rp+xp,-y42*rp+yp,x37*rp+xp,-y37*rp+yp);
        line(x41*rp+xp,-y41*rp+yp,x43*rp+xp,-y43*rp+yp);
        line(x43*rp+xp,-y43*rp+yp,x39*rp+xp,-y39*rp+yp);
        //roket kiri
        x44=0.06;y44=1.18;//G1
        x45=0.14;y45=1.18;//H1
        x46=0.2;y46=1.18;//I1
        x47=0.42;y47=1.26;//A1
        x48=0.2;y48=1.34;//J1
        x49=0.14;y49=1.34;//K1
        x50=-0.15;y50=1.34;//L1
        x51=0.14;y51=1.14;//M1
        x52=0.14;y52=1.38;//N1
        line(x44*rp+xp,-y44*rp+yp,x46*rp+xp,-y46*rp+yp);
        line(x46*rp+xp,-y46*rp+yp,x47*rp+xp,-y47*rp+yp);
        line(x47*rp+xp,-y47*rp+yp,x48*rp+xp,-y48*rp+yp);
        line(x48*rp+xp,-y48*rp+yp,x50*rp+xp,-y50*rp+yp);
        line(x45*rp+xp,-y45*rp+yp,x51*rp+xp,-y51*rp+yp);
        line(x51*rp+xp,-y51*rp+yp,x46*rp+xp,-y46*rp+yp);
        line(x49*rp+xp,-y49*rp+yp,x52*rp+xp,-y52*rp+yp);
        line(x52*rp+xp,-y52*rp+yp,x48*rp+xp,-y48*rp+yp);
    }
    void PeluruMenembak()
    {
        float x0,y0,x1,y1,x2,y2,x3,y3,x4,y4;
        float x5,y5,x6,y6,x7,y7,x8,y8;
        for (int i=0;i<20;i++)
        {
            if (fpel[i]==1)
            {
                xpel[i]=xpel[i]+25;
                if (xpel[i]>1500)
                {
                    fpel[i]=0;
                }
                x0=0;y0=0.5;//A
                x1=2;y1=0.5;//B
                x2=2.5;y2=0;//G
                x3=2;y3=-0.5;//H
                x4=0;y4=-0.5;//I
                setcolor(WHITE);
                setfillstyle(SOLID_FILL, YELLOW);
                line(x0*2+xpel[i],y0*2+ypel[i],x1*2+xpel[i],y1*2+ypel[i]);
                line(x1*2+xpel[i],y1*2+ypel[i],x2*2+xpel[i],y2*2+ypel[i]);
                line(x2*2+xpel[i],y2*2+ypel[i],x3*2+xpel[i],y3*2+ypel[i]);
                line(x3*2+xpel[i],y3*2+ypel[i],x4*2+xpel[i],y4*2+ypel[i]);
                line(x0*2+xpel[i],y0*2+ypel[i],x4*2+xpel[i],y4*2+ypel[i]);
                floodfill(2.4*2+xpel[i],0*2+ypel[i],WHITE);
                floodfill(0.1*2+xpel[i],0*2+ypel[i],WHITE);
            }
        }
    }
    void Peluru()
    {
        for (int i=0;i<20;i++)
        {
            if (fpel[i]==0)
            {
                fpel[i]=1;
                xpel[i]=xp+(2.1*20);
                ypel[i]=yp+(0.65*20);
                break;

            }
        }
    }
    void Tembak()
    {
             if (ismouseclick(WM_LBUTTONDOWN))
            {
                clearmouseclick(WM_LBUTTONDOWN);
                Peluru();
            }
    }
    void roketmeluncur()
    {
        float x0,y0,x1,y1,x2,y2,x3,y3,x4,y4;
        float x5,y5,x6,y6,x7,y7,x8,y8;
        for (int i=0;i<5;i++)
        {
            if (froket[i]==1)
            {
                xrok[i]=xrok[i]+25;
                if (xrok[i]>1500)
                {
                    froket[i]=0;
                }
                xrok2[i]=xrok2[i]+25;
                if (xrok2[i]>1500)
                {
                    froket[i]=0;
                }
                x0=2;y0=0;//A
                x1=1;y1=0.2;//B
                x2=-1.5;y2=0.2;//G
                x3=-1.5;y3=-0.2;//H
                x4=1;y4=-0.2;//I
                setcolor(WHITE);
                setfillstyle(SOLID_FILL, YELLOW);
                line(x0*5+xrok[i],y0*5+yrok[i],x1*5+xrok[i],y1*5+yrok[i]);
                line(x1*5+xrok[i],y1*5+yrok[i],x2*5+xrok[i],y2*5+yrok[i]);
                line(x2*5+xrok[i],y2*5+yrok[i],x3*5+xrok[i],y3*5+yrok[i]);
                line(x3*5+xrok[i],y3*5+yrok[i],x4*5+xrok[i],y4*5+yrok[i]);
                line(x0*5+xrok[i],y0*5+yrok[i],x4*5+xrok[i],y4*5+yrok[i]);
                line(x0*5+xrok2[i],y0*5+yrok2[i],x1*5+xrok2[i],y1*5+yrok2[i]);
                line(x1*5+xrok2[i],y1*5+yrok2[i],x2*5+xrok2[i],y2*5+yrok2[i]);
                line(x2*5+xrok2[i],y2*5+yrok2[i],x3*5+xrok2[i],y3*5+yrok2[i]);
                line(x3*5+xrok2[i],y3*5+yrok2[i],x4*5+xrok2[i],y4*5+yrok2[i]);
                line(x0*5+xrok2[i],y0*5+yrok2[i],x4*5+xrok2[i],y4*5+yrok2[i]);
            }
        }
    }
    void roket()
    {
        for (int i=0;i<5;i++)
        {
            if (froket[i]==0)
            {
                froket[i]=1;
                xrok[i]=xp+(0.36*20);
                yrok[i]=yp+(-1.12*20);
                xrok2[i]=xp+(0.42*20);
                yrok2[i]=yp+(1.26*20);
                break;

            }
        }
    }
    void RTembak()
    {
             if (ismouseclick(WM_RBUTTONDOWN))
            {
                clearmouseclick(WM_RBUTTONDOWN);
                roket();
            }
    }
};
class CPesawatMusuh
{
private:
    int flag;
    float x0,y0,x1,y1,x2,y2,x3,y3,x4,y4;
    float x5,y5,x6,y6,x7,y7,x8,y8,x9,y9;
    float x10,y10,x11,y11,x12,y12,x13,y13,x14,y14;
    float x15,y15,x16,y16,x17,y17,x18,y18,x19,y19;
    float x20,y20,x21,y21,x22,y22,x23,y23,x24,y24;
    float x25,y25,x26,y26,x27,y27,x28,y28,x29,y29;
public:
float xpm,ypm,rpm;
void init(float xpmusuh, float ypmusuh, float rpmusuh)
{
    xpm=xpmusuh;
    ypm=ypmusuh;
    rpm=rpmusuh;
}
void GerakPesawatMusuh() 
{
    srand(time(0));
    xpm=xpm-8;
        if(xpm<=0)
        {
            xpm=1500;
            ypm=rand()%450;
            if(ypm<70){
                ypm=70;
            }
        }
        /*else if((xpel[i]>-3*25+xpm)&&(xpel[i]<-1.5*25+xpm)&&(ypel[i]<0.5*25+ypm)&&(ypel[i]>-0.62*25+ypm))
        {
            xpm=1500;
            ypm=rand()%450;
            if(ypm<70){
                ypm=70;
            }
            //z=z+3;
            fpel[i]=0;
        }*/
}
void PesawatMusuh()
{
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
    line(-x0*rpm+xpm,-y0*rpm+ypm,-x1*rpm+xpm,-y1*rpm+ypm);
    line(-x1*rpm+xpm,-y1*rpm+ypm,-x2*rpm+xpm,-y2*rpm+ypm);
    line(-x2*rpm+xpm,-y2*rpm+ypm,-x3*rpm+xpm,-y3*rpm+ypm);
    line(-x3*rpm+xpm,-y3*rpm+ypm,-x4*rpm+xpm,-y4*rpm+ypm);
    line(-x4*rpm+xpm,-y4*rpm+ypm,-x6*rpm+xpm,-y6*rpm+ypm);
    line(-x6*rpm+xpm,-y6*rpm+ypm,-x17*rpm+xpm,-y17*rpm+ypm);
    line(-x9*rpm+xpm,-y9*rpm+ypm,-x10*rpm+xpm,-y10*rpm+ypm);
    line(-x10*rpm+xpm,-y10*rpm+ypm,-x11*rpm+xpm,-y11*rpm+ypm);
    line(-x11*rpm+xpm,-y11*rpm+ypm,-x12*rpm+xpm,-y12*rpm+ypm);
    line(-x12*rpm+xpm,-y12*rpm+ypm,-x13*rpm+xpm,-y13*rpm+ypm);
    line(-x13*rpm+xpm,-y13*rpm+ypm,-x14*rpm+xpm,-y14*rpm+ypm);
    line(-x14*rpm+xpm,-y14*rpm+ypm,-x15*rpm+xpm,-y15*rpm+ypm);
    line(-x3*rpm+xpm,-y3*rpm+ypm,-x16*rpm+xpm,-y16*rpm+ypm);
    line(-x4*rpm+xpm,-y4*rpm+ypm,-x5*rpm+xpm,-y5*rpm+ypm);  
    line(-x15*rpm+xpm,-y15*rpm+ypm,-x24*rpm+xpm,-y24*rpm+ypm);
    line(-x24*rpm+xpm,-y24*rpm+ypm,-x25*rpm+xpm,-y25*rpm+ypm);
    line(-x25*rpm+xpm,-y25*rpm+ypm,-x26*rpm+xpm,-y26*rpm+ypm);
    line(-x26*rpm+xpm,-y26*rpm+ypm,-x0*rpm+xpm,-y0*rpm+ypm);
    line(-x17*rpm+xpm,-y17*rpm+ypm,-x7*rpm+xpm,-y7*rpm+ypm);
    line(-x7*rpm+xpm,-y7*rpm+ypm,-x8*rpm+xpm,-y8*rpm+ypm);
    line(-x8*rpm+xpm,-y8*rpm+ypm,-x9*rpm+xpm,-y9*rpm+ypm);
    line(-x8*rpm+xpm,-y8*rpm+ypm,-x18*rpm+xpm,-y18*rpm+ypm);
    floodfill(3.03*rpm+xpm,-0.7*rpm+ypm, WHITE);
    floodfill(-3.15*rpm+xpm,0*rpm+ypm, WHITE);
    
    //Sayap Samping
    setcolor(WHITE);
    line(-x19*rpm+xpm,-y19*rpm+ypm,-x20*rpm+xpm,-y20*rpm+ypm);
    line(-x20*rpm+xpm,-y20*rpm+ypm,-x21*rpm+xpm,-y21*rpm+ypm);
    line(-x21*rpm+xpm,-y21*rpm+ypm,-x22*rpm+xpm,-y22*rpm+ypm);
    line(-x21*rpm+xpm,-y21*rpm+ypm,-x23*rpm+xpm,-y23*rpm+ypm);
    floodfill(1.09*rpm+xpm,-1.48*rpm+ypm, WHITE);
    floodfill(0.84*rpm+xpm,-0.4*rpm+ypm, WHITE);
    floodfill(-0.86*rpm+xpm,-0.44*rpm+ypm, WHITE);
    //Kaca
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    line(-x15*rpm+xpm,-y15*rpm+ypm,-x24*rpm+xpm,-y24*rpm+ypm);
    line(-x24*rpm+xpm,-y24*rpm+ypm,-x25*rpm+xpm,-y25*rpm+ypm);
    line(-x25*rpm+xpm,-y25*rpm+ypm,-x26*rpm+xpm,-y26*rpm+ypm);
    line(-x15*rpm+xpm,-y15*rpm+ypm,-x26*rpm+xpm,-y26*rpm+ypm);
    floodfill(-2.5*rpm+xpm,-0.4*rpm+ypm,WHITE);    
}

};
class CAwan
{
private:
    float x0,y0,x1,y1,x2,y2,x3,y3,x4,y4;
    float x5,y5;
    float xp,yp,rp;
public:
    void init(float xawan,float yawan,float rawan)
    {
        xp=xawan;
        yp=yawan;
        rp=rawan;
    }
    void DrawAwan()
    {
        x0=3.1506;y0=3.2954;
        x1=5.3198;y1=6.2771;
        x2=8.5009;y2=6.6746;
        x3=12.4;y3=3.3324;
        x4=7.5618;y4=70.7284;
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        arc(x0*rp+xp,-y0*rp+yp,73,274,2.831*rp);
        arc(x1*rp+xp,-y1*rp+yp,65,206,2.2518*rp);
        arc(x2*rp+xp,-y2*rp+yp,340,159,3.6669*rp);
        arc(x3*rp+xp,-y3*rp+yp,262,118,2.8734*rp);
        arc(x4*rp+xp,-y4*rp+yp,266,274,70.401*rp);
        floodfill(0.8499*rp+xp,-3.5341*rp+yp,WHITE);
        floodfill(14.991*rp+xp,-3.5341*rp+yp,WHITE);
        floodfill(8.4868*rp+xp,-9.931*rp+yp,WHITE);
    }
    void GerakAwan()
    {
        xp=xp-6;
        if(xp<-20)
        {
            xp=1450;
        }
    }
};
class CBangunan
{
    private:
    float x0,y0,x1,y1,x2,y2,x3,y3,x4,y4;
    float x5,y5,x6,y6,x7,y7,x8,y8,x9,y9;
    float x10,y10,x11,y11,x12,y12,x13,y13;
    float xp,yp,rp;
    public:
    void init(float xbangunan, float ybangunan, float rbangunan)
    {
        xp=xbangunan;
        yp=ybangunan;
        rp=rbangunan;
    }
    void GerakBangunan()
    {
        xp=xp-6;
        if(xp<-400)
        {
            xp=1500;
        }
    }
    void Gedung1()
    {   
        x0=4.5;y0=0;//H
        x1=4.5;y1=5.5;//G
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
        line(x0*rp+xp,-y0*rp+yp,x1*rp+xp,-y1*rp+yp);
        line(x2*rp+xp,-y2*rp+yp,x3*rp+xp,-y3*rp+yp);
        line(x2*rp+xp,-y2*rp+yp,x1*rp+xp,-y1*rp+yp);
        line(x3*rp+xp,-y3*rp+yp,x4*rp+xp,-y4*rp+yp);
        line(x5*rp+xp,-y5*rp+yp,x2*rp+xp,-y2*rp+yp);
        line(x6*rp+xp,-y6*rp+yp,x7*rp+xp,-y7*rp+yp);
        line(x7*rp+xp,-y7*rp+yp,x8*rp+xp,-y8*rp+yp);
        line(x8*rp+xp,-y8*rp+yp,x9*rp+xp,-y9*rp+yp);
        line(x9*rp+xp,-y9*rp+yp,x10*rp+xp,-y10*rp+yp);
        line(x2*rp+xp,-y2*rp+yp,x8*rp+xp,-y8*rp+yp);
        floodfill(9.34*rp+xp,-4.917*rp+yp,WHITE);
        floodfill(7.1*rp+xp,-4.917*rp+yp,WHITE);
        floodfill(6.82*rp+xp,-4.917*rp+yp,WHITE);
        floodfill(4.61*rp+xp,-4.917*rp+yp,WHITE);
        setfillstyle(SOLID_FILL, DARKGRAY);//Atas
        floodfill(7.1*rp+xp,-6.2*rp+yp,WHITE);
        floodfill(8.85*rp+xp,-5.7*rp+yp,WHITE);
        floodfill(6.99*rp+xp,-6.44*rp+yp,WHITE);
        floodfill(5.1*rp+xp,-5.67*rp+yp,WHITE);
    }
    void Gedung2()
    {
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
        line(x0*rp+xp,-y0*rp+yp,x1*rp+xp,-y1*rp+yp);
        line(x1*rp+xp,-y1*rp+yp,x2*rp+xp,-y2*rp+yp);
        line(x2*rp+xp,-y2*rp+yp,x3*rp+xp,-y3*rp+yp);
        line(x2*rp+xp,-y2*rp+yp,x4*rp+xp,-y4*rp+yp);
        line(x4*rp+xp,-y4*rp+yp,x5*rp+xp,-y5*rp+yp);
        floodfill(15.8*rp+xp, -7.8*rp+yp, WHITE);
        floodfill(13.2*rp+xp, -8.2*rp+yp, WHITE);
        floodfill(12.8*rp+xp, -8.2*rp+yp, WHITE);
        floodfill(10.2*rp+xp, -7.8*rp+yp, WHITE);
        //Atas
        setfillstyle(SOLID_FILL, BLACK);
        line(x6*rp+xp,-y6*rp+yp,x7*rp+xp,-y7*rp+yp);
        line(x7*rp+xp,-y7*rp+yp,x8*rp+xp,-y8*rp+yp);
        line(x8*rp+xp,-y8*rp+yp,x9*rp+xp,-y9*rp+yp);
        line(x10*rp+xp,-y10*rp+yp,x11*rp+xp,-y11*rp+yp);
        floodfill(12.84*rp+xp, -9.11*rp+yp, WHITE);
}
    void Gedung3()
    {
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
        line(x0*rp+xp,-y0*rp+yp,x1*rp+xp,-y1*rp+yp);
        line(x1*rp+xp,-y1*rp+yp,x2*rp+xp,-y2*rp+yp);
        line(x2*rp+xp,-y2*rp+yp,x3*rp+xp,-y3*rp+yp);
        line(x3*rp+xp,-y3*rp+yp,x4*rp+xp,-y4*rp+yp);
        line(x2*rp+xp,-y2*rp+yp,x5*rp+xp,-y5*rp+yp);
        line(x2*rp+xp,-y2*rp+yp,x8*rp+xp,-y8*rp+yp);
        line(x12*rp+xp,-y12*rp+yp,x8*rp+xp,-y8*rp+yp);
        floodfill(17.68*rp+xp, -2.4*rp+yp, WHITE);
        floodfill(16.31*rp+xp, -2.4*rp+yp, WHITE);
        //ATAS
        line(x6*rp+xp,-y6*rp+yp,x7*rp+xp,-y7*rp+yp);
        line(x7*rp+xp,-y7*rp+yp,x8*rp+xp,-y8*rp+yp);
        line(x8*rp+xp,-y8*rp+yp,x9*rp+xp,-y9*rp+yp);
        line(x9*rp+xp,-y9*rp+yp,x10*rp+xp,-y10*rp+yp);
        floodfill(17.26*rp+xp, -4.9*rp+yp, WHITE);
        floodfill(16.65*rp+xp, -4.9*rp+yp, WHITE);
        //pucuk
        line(x11*rp+xp,-y11*rp+yp,x12*rp+xp,-y12*rp+yp);
        line(x12*rp+xp,-y12*rp+yp,x13*rp+xp,-y13*rp+yp);
        floodfill(17.07*rp+xp, -5.31*rp+yp, WHITE);
        floodfill(16.93*rp+xp, -5.31*rp+yp, WHITE);
    }
    void Gedung4()
    {

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
        line(x0*rp+xp,-y0*rp+yp,x1*rp+xp,-y1*rp+yp);
        line(x1*rp+xp,-y1*rp+yp,x2*rp+xp,-y2*rp+yp);
        line(x2*rp+xp,-y2*rp+yp,x3*rp+xp,-y3*rp+yp);
        line(x3*rp+xp,-y3*rp+yp,x4*rp+xp,-y4*rp+yp);
        line(x2*rp+xp,-y2*rp+yp,x5*rp+xp,-y5*rp+yp);
        line(x6*rp+xp,-y6*rp+yp,x8*rp+xp,-y8*rp+yp);
        line(x8*rp+xp,-y8*rp+yp,x9*rp+xp,-y9*rp+yp);
        line(x7*rp+xp,-y7*rp+yp,x9*rp+xp,-y9*rp+yp);
        line(x6*rp+xp,-y6*rp+yp,x7*rp+xp,-y7*rp+yp);
        floodfill(0.55*rp+xp,-0.4*rp+yp,WHITE);
        floodfill(3.45*rp+xp,-0.4*rp+yp,WHITE);
        floodfill(0.55*rp+xp,-1.45*rp+yp,WHITE);
        floodfill(3.45*rp+xp,-1.45*rp+yp,WHITE);
        floodfill(3.97*rp+xp,-1.19*rp+yp,WHITE);
        floodfill(3.53*rp+xp,-1.44*rp+yp,WHITE);
    }
};
/*class CSkor 
{
    public:
    void scoreboard()
    {
        int z=0;
        char skorstr[999];
        if(xpm>=1200)
        {
            z=z+10;
        }
        sprintf(skorstr, "---Score = %d---", z);
        setcolor(YELLOW);
        settextstyle(8,0,1);
        outtextxy(650,10, skorstr);
        outtextxy(200,10, "Player");
    }
};*/
int main()
{
    int page=0;
    CPesawatPlayer p1;
    p1.init(100,100,20);
    CPesawatMusuh pm1;
    pm1.init(700,100,20);
    CAwan a1;
    a1.init(40,400,10);
    CBangunan b1;
    b1.init(400,720,20);
    initwindow(1400, 700, "Fighter Pyrpho Pilot");
    while(1)
    {
        setactivepage(page);
        setvisualpage(1-page);
        cleardevice();
        //Pesawat Player
        p1.GerakPesawat();
        p1.Pesawat();
        p1.Tembak();
        p1.PeluruMenembak();
        p1.RTembak();
        p1.roketmeluncur();
        //PesawatMusuh1
        pm1.PesawatMusuh();
        pm1.GerakPesawatMusuh();
        //Awan1
        a1.DrawAwan();
        a1.GerakAwan();
        //Gedung1
        b1.Gedung1();
        b1.GerakBangunan();
        //ScoreBoard
        page = 1-page;
        delay(10);
    }
    return 0;
}