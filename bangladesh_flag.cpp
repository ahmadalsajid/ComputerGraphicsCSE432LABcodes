# include <stdio.h>
# include <conio.h>
# include <graphics.h>
#include<bits/stdc++.h>
using namespace std;

void flood_fill(int x, int y, int fill_col, int origin_col)
{
    int color = getpixel(x,y);
    if(color== origin_col)
    {
        putpixel(x,y,fill_col);
        flood_fill(x+1,y,fill_col,origin_col);
        flood_fill(x-1,y,fill_col,origin_col);
        flood_fill(x,y+1,fill_col,origin_col);
        flood_fill(x,y-1,fill_col,origin_col);
    }
}


void bres_circle(int xc, int yc, int r)
{
    int x,y,Pk;//xc,yc,r,

//            printf("Enter the value of Xc\t");
//            scanf("%d",&xc);
//            printf("Enter the value of yc\t");
//            scanf("%d",&yc);
//            printf("Enter the Radius of circle\t");
//            scanf("%d",&r);
    x=0;
    y=r;
    putpixel(xc+x,yc-y,1);
    Pk=3-(2*r);
    for(x=0; x<=y; x++)
    {
        if (Pk<0)
        {
            y=y;
            Pk=(Pk+(4*x)+6);
        }
        else
        {
            y=y-1;
            Pk=Pk+((4*(x-y)+10));
        }
        putpixel(xc+x,yc-y,4);
        putpixel(xc-x,yc-y,4);
        putpixel(xc+x,yc+y,4);
        putpixel(xc-x,yc+y,4);
        putpixel(xc+y,yc-x,4);
        putpixel(xc-y,yc-x,4);
        putpixel(xc+y,yc+x,4);
        putpixel(xc-y,yc+x,4);
    }
}

void bres_line(int x1,int y1,int x2,int y2)
{
    int dx, dy, d, end;
    float  x, y,dT,dS;
    //cin>>x1>>y1>>x2>>y2;x1, x2, y1, y2,
    dx = abs(x1 - x2);
    if(dx==0)
    {
        for(int i=y1; i<=y2; i++)
        {
            putpixel(x1,i,2);
        }
        return;
    }
    dy = abs(y1 - y2);
    if(dx==0) dx=dy;
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
    putpixel(x, y, 2);
    while(x < end)
    {
        x = x + 1;
        if(d <0)
        {
            d = d + dS;
        }
        else
        {
            y = y + 1;
            d = d + dT;
        }
        putpixel(x, y, 2);
    }

}

void dda(int x1, int y1, int x2,int y2)
{
    int  s, dx, dy, m;
    float xi, yi, x, y;

    dx = x2 - x1;
    dy = y2 - y1;

    if (abs(dx) > abs(dy))
        s = abs(dx);
    else
        s = abs(dy);

    xi = dx / (float) s;
    yi = dy / (float) s;

    x = x1;
    y = y1;

    putpixel(x1, y1, 4);

    for (m = 0; m < s; m++)
    {
        x += xi;
        y += yi;
        putpixel(x, y, 2);
    }

}

int main()
{
    initwindow(250,200,"SAJID");

    bres_circle(100,70,40);
    flood_fill(101,71,4,0);


    bres_line(10,10,210,10);
    bres_line(10,10,10,130);
    bres_line(10,130,210,130);
    bres_line(210,10,210,130);
    flood_fill(60,40,2,0);


    getch();
    closegraph();
    return 0;
}
