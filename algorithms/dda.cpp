#include <graphics.h>
#include <iostream>
#include <cmath>
using namespace std;

void drawLineDDA(int x1, int y1, int x2, int y2)
{
    float dx = x2 - x1;
    float dy = y2 - y1;

    int steps = max(abs(dx), abs(dy));

    float xInc = dx / steps;
    float yInc = dy / steps;

    float x = x1;
    float y = y1;

    for(int i = 0; i <= steps; i++)
    {
        putpixel(round(x), round(y), WHITE);
        x = x + xInc;
        y = y + yInc;
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    drawLineDDA(100,100,400,300);

    getch();
    closegraph();

    return 0;
}