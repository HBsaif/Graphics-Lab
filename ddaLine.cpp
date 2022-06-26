
#include <graphics.h>
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <math.h>

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
    int y1 = 170;
    int x2 = 50;
    int y2 = 150;

//    cout << "Input first point: " ;
//    cin >> x1 >> y1;
//
//    cout << "Input second point: " ;
//    cin >> x2 >> y2;

    float dy = y2-y1;
    float dx = x2-x1;
    float m = dy/dx;
    int b = y1 - m*x1;

    float x, y;
    int xi, yi;
    int end_x, end_y;

    if(m<=1 && m>=-1){
        if(dx>0){
            x = x1;
            y = y1;
            end_x = x2;
        }
        else{
             x = x2;
             y = y2;
             end_x = x1;
        }
    }
    else{
        if(dy>0){
            x = x1;
            y = y1;
            end_y = y2;
        }
        else{
             x = x2;
             y = y2;
             end_y = y1;
        }
    }


    xi = floor(x+0.5);
    yi = floor(y+0.5);
//    cout << xi << "  "<< yi << endl;
    putpixel(xi,yi,WHITE);

    if(m<=1 && m>=-1){
        while(x <= end_x){
            xi = floor(x+0.5);
            yi = floor(y+0.5);
            putpixel(xi,yi,GREEN);
            x++;
            y = y+m;
        }
    }

    else{
        while(y <= end_y){
            xi = floor(x+0.5);
            yi = floor(y+0.5);
            putpixel(xi,yi,RED);
            x = x+1/m;
            y++;
        }
    }
    setcolor(YELLOW);
    //line(x1, y1, x2, y2);

    getch();
    //delay(1000);

    // closegraph function closes the
    // graphics mode and deallocates
    // all memory allocated by
    // graphics system .
    closegraph();

    return 0;
}

