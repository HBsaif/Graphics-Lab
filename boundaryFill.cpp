
#include <graphics.h>
#include <iostream>
#include <conio.h>
#include <windows.h>

#include <stdio.h>

using namespace std;

void boundaryFill(int x, int y, int fill_color, int boundary_color){
    int color = getpixel(x, y);

    if(color != boundary_color && color != fill_color){
        putpixel(x, y, fill_color);
        boundaryFill(x+1, y, fill_color, boundary_color);
        boundaryFill(x, y+1, fill_color, boundary_color);
        boundaryFill(x-1, y, fill_color, boundary_color);
        boundaryFill(x, y-1, fill_color, boundary_color);
    }
}

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

    int x = getmaxx()/2;
    int y = getmaxy()/2;

    circle(x, y, 100);
    boundaryFill(x, y, RED, WHITE);


    getch();
    //delay(1000);

    // closegraph function closes the
    // graphics mode and deallocates
    // all memory allocated by
    // graphics system .
    closegraph();

    return 0;
}

