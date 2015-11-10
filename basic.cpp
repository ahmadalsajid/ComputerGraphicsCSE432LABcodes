#include<graphics.h>
#include<conio.h>
using namespace std;
#define DELAY_TIME  10

void flood_fill(int x,int y, int fill_col, int original_col)
{
    int col;
    col = getpixel(x,y);
    //cout<<col;
    if(col == original_col)
    {
        putpixel(x,y,4);
        flood_fill(x+1,y,fill_col,original_col);
        flood_fill(x,y+1,fill_col,original_col);
        flood_fill(x-1,y,fill_col,original_col);
        flood_fill(x,y-1,fill_col,original_col);
    }
}


int main()
{
    initwindow(600,600,"SAJID");

    for(int i =0;i< 600;i++)
    {
        //delay(DELAY_TIME);
        putpixel(i,300,4);
        putpixel(300,i,4);
    }

    flood_fill(0,0,4,4);

/*
    for(int i=10;i<210;i++)
    {
        putpixel(i,510,4);
    }

    for(int i=0;i<100;i++)
    {
        putpixel(150+i,320+i,5);
        putpixel(150-i,320+i,5);

    }
    for(int i=50;i<250;i++)
    {
        putpixel(i,420,5);
    }*/
    getch();
    closegraph();
    return 0;
}
