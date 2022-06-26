#include <graphics.h>
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <math.h>

#include <stdio.h>

using namespace std;

void setPixel(int x, int y, int h, int k)
{
    putpixel(x+h, y+k, RED);
    putpixel(x+h, -y+k, RED);
    putpixel(-x+h, -y+k, RED);
    putpixel(-x+h, y+k, RED);
    putpixel(y+h, x+k, RED);
    putpixel(y+h, -x+k, RED);
    putpixel(-y+h, -x+k, RED);
    putpixel(-y+h, x+k, RED);
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

    int r ;

    cout << "Input radius: " ;
    cin >> r;

    double theta = 0;
    double x = r*cos(theta);
    double y = r*sin(theta);

    int h = getmaxx()/2;
    int k = getmaxy()/2;

    while(theta <= 3.1416/4){
        theta += 0.01;
        x = r*cos(theta);
        y = r*sin(theta);

        setPixel(floor(x), floor(y), h, k);

    }



    getch();
    //delay(1000);

    // closegraph function closes the
    // graphics mode and deallocates
    // all memory allocated by
    // graphics system .
    closegraph();

    return 0;
}



