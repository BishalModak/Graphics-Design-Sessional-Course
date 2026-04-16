#include<graphics.h>
#include<iostream>
#include<conio.h>
using namespace std;

void drawCircle(int xc, int yc, int x, int y){
    putpixel(xc + x, yc + y, WHITE);
    putpixel(xc - x, yc + y, WHITE);
    putpixel(xc + x, yc - y, WHITE);
    putpixel(xc - x, yc - y, WHITE);
    putpixel(xc + y, yc + x, WHITE);
    putpixel(xc - y, yc + x, WHITE);
    putpixel(xc + y, yc - x, WHITE);
    putpixel(xc - y, yc - x, WHITE);
}

int main(){
    int xc = 320;
    int yc = 240;
    int r = 100;

    int x = 0;
    int y = r;

    int p = 1 - r;   

    int gd = DETECT , gm;
    initgraph(&gd, &gm, NULL);

    drawCircle(xc, yc, x, y);

    while(x < y){
        x++;

        if(p < 0){
            p = p + 2 * x + 1;
        }else{
            y--;
            p = p + 2 * (x - y) + 1;
        }

        drawCircle(xc, yc, x, y);
    }

    getch();
    closegraph();
}