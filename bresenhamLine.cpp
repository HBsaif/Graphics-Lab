
#include <graphics.h>
#include <iostream>
#include <conio.h>
#include <windows.h>

#include <stdio.h>

using namespace std;
//driver code
int main()
{
    // gm is Graphics mode which is
    // a computer display mode that
    // generates image using pixels.
    // DETECT is a macro defined in
    // "graphics.h" header file

    int gd = DETECT, gm;

    // initgraph initializes the
    // graphics system by loading a
    // graphics driver from disk
    initgraph(&gd, &gm,"");

    int x1 = 10;
    int y1 = 50;
    int x2 = 70;
    int y2 = 150;

//    cout << "Input first point: " ;
//    cin >> x1 >> y1;
//
//    cout << "Input second point: " ;
//    cin >> x2 >> y2;

//    double m = (y2-y1)/(x2-x1);
//    double b = y2 - m*x2;
    int sign = 1;
    int dx = x2-x1;
    int dy = y2-y1;
    float m = float(dy)/float(dx);
    int d, dT, dS, temp;
    dT = 2*(dy-dx);
    dS = 2*dy;
    d = 2*dy-dx;

    int x, y, end_x;

    if(x1<x2){
        x = x1;
        y = y1;
        end_x = x2;
    }
    else{
        x = x2;
        y = y2;
        end_x = x1;
    }



    putpixel(x,y,WHITE);
    cout << x << " "<< y << " " << m << ends << end_x << endl;
    while(x < end_x){
        x++;
        if(d<=0){
            d = d+dS;
           // cout << "less" << endl;
        }
        else{
            y++;
            d = d+dT;
           // cout << "greater" << endl;
        }
        cout << x << " "<< y << " " << dS << " "<< dT  << " " << d<< endl;
        putpixel(x,y,GREEN);
    }

    setcolor(YELLOW);
    line(x1, y1, x2, y2);

    getch();
    //delay(1000);

    // closegraph function closes the
    // graphics mode and deallocates
    // all memory allocated by
    // graphics system .
    closegraph();

    return 0;
}

