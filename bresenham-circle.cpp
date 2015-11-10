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


int main()
{
    int i,x0,y0,r;
    int x=0;
    //cin>>x0>>y0>>r;
    x0=300;
    y0=300;
    r = 200;
    initwindow(600,600,"test");

    for(int i=0; i<600; i++)
    {
        putpixel(300, i, RED);
        putpixel(i, 300, RED);
    }


    int y = r;
    int d = 3-2*r;

    while (x<=y)
    {


        if(d<0)
        {
            d = d + 4*x + 6;
        }
        else
        {
            d = d + 4 *(x-y) + 10;
            y--;
        }

        putpixel(x0-x,y0+y,RED);
        putpixel(x0-y,y0+x,RED);
        //delay(20);
        x++;
    }
    flood_fill(299,301,4,0);
    getch();
    closegraph();
    return 0;
}

