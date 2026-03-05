#include<iostream>
#include <graphics.h>
using namespace std;

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    putpixel(100,100, RED);
    getch();
    closegraph();
}