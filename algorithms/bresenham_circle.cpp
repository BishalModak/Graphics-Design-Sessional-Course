#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<math.h>
using namespace std;


void drawCirclePoints(int xc, int yc, int x, int y) {
    putpixel(xc + x, yc + y, WHITE);
    putpixel(xc - x, yc + y, WHITE);
    putpixel(xc + x, yc - y, WHITE);
    putpixel(xc - x, yc - y, WHITE);
    putpixel(xc + y, yc + x, WHITE);
    putpixel(xc - y, yc + x, WHITE);
    putpixel(xc + y, yc - x, WHITE);
    putpixel(xc - y, yc - x, WHITE);
}

int main()
{
   
    int xc = 320; 
    int yc = 240; 
    int r = 100; 

    int x = 0;    
    int y = r;    
    int p = 3 - 2 * r; 

    
    int gd = DETECT, gm;
    initgraph(&gd, &gm, ""); 

    
    drawCirclePoints(xc, yc, x, y);

    
    while (x < y) {
        x++; 
        if (p < 0) {
            p = p + 4 * x + 6;
        } else {
            y--; 
            p = p + 4 * (x - y) + 10;
        }
        drawCirclePoints(xc, yc, x, y);
    }
    
    getch();     
    closegraph();
    return 0;
}