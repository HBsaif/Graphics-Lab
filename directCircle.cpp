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

    int x = 0;
    double y = r;

    int h = getmaxx()/2;
    int k = getmaxy()/2;

    while(x <= r/(sqrt(2))){
        x++;
        y = sqrt(pow(r,2) - pow(x,2));
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


