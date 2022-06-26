#include <graphics.h>
#include <iostream>
#include <conio.h>
#include <windows.h>

#include <stdio.h>

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
    initgraph(&gd, &gm,""); //"-" er moddhe path
    //initgraph(&gd, &gm,"C:\Program Files (x86)\CodeBlocks\MinGW\lib");

    // find the center point of the graphics window
    int x = getmaxx()/2;
    int y = getmaxy()/2;

    // color & circle function

    setcolor(4);
    line(20, 45, 100, 25);

    getch();
    //delay(1000);

    // closegraph function closes the
    // graphics mode and deallocates
    // all memory allocated by
    // graphics system .
    closegraph();

    return 0;
}
