#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>

using namespace std;
int main()
{

    int x1,y1,xn,yn,dx, dy, m, i;;

    cin>>x1>>y1>>xn>>yn;
    initwindow(600,600,"DDA");
    m = (yn-y1)/(xn-x1);
    for (i=x1; i<=xn; i++)
    {
        if (m <= 1)
        {
            dx = 1;

            dy = m * dx;
        }
        else
        {
            dy = 1;
            dx = dy / m;
        }
        x1 = x1 + dx;
        y1 = y1 + dy;
        putpixel(x1, y1, RED);
    }


    getch();
    closegraph();
    return 0;
}
