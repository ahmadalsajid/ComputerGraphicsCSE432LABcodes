#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>

using namespace std;
#define DELAY_TIME  10


int main()
{

    int dx, dy, d, end;
    float x1, x2, y1, y2, x, y,dT,dS;

    cin>>x1>>y1>>x2>>y2;
    initwindow(600,600,"SAJID");


    /*for(int i =0;i< 600;i++)
    {
        //delay(DELAY_TIME);
        putpixel(i,300,RED);
        putpixel(300,i,RED);
    }*/



    dx = abs(x1 - x2);
    dy = abs(y1 - y2);
    d = 2 * dy - dx;
    dT = 2 * (dy - dx);
    dS = 2 * dy;
    if(x1 > x2)
    {
        x = x2;
        y = y2;
        end = x1;
    }
    else
    {
        x = x1;
        y = y1;
        end = x2;
    }
    putpixel(x, y, RED);
    while(x < end)
    {
        x = x + 1;
        if(d < 0)
        {
            d = d + dS;
        }
        else
        {
            y = y + 1;
            d = d + dT;
        }
        putpixel(x, y, RED);
    }


    getch();
    closegraph();
    return 0;
}


