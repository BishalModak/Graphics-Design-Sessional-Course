#include <graphics.h>
#include<iostream>
using namespace std;

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x1 = 100, y1 = 100;
    int x2 = 200, y2 = 100;

    setcolor(WHITE);
    line(x1, y1, x2, y2);

    int tx = 80, ty = 50;

    int x1_new = x1 + tx;
    int y1_new = y1 + ty;
    int x2_new = x2 + tx;
    int y2_new = y2 + ty;

    setcolor(YELLOW);
    line(x1_new, y1_new, x2_new, y2_new);

    getch();
    closegraph();
    return 0;
}