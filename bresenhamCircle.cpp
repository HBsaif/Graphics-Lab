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


    int h = getmaxx()/2;
    int k = getmaxy()/2;

    int x = 0;
    int y = r;
    int d = 3 -2*r;

    while(x <= y){
        setPixel(x, y, h, k);

        if(d < 0){
            d = d+4*x+6;
        }
        else{
            d = d+4*(x-y)+10;
            y--;
        }
        x++;
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




