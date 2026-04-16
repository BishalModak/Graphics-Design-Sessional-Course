#include <graphics.h>
#include <conio.h>
#include <math.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    int midx = getmaxx() / 2;
    int midy = getmaxy() / 2;

    line(0, midy, getmaxx(), midy);
    line(midx, 0, midx, getmaxy());

    int x1 = 0, y1 = 0;
    int x2 = 150, y2 = 0;

    setcolor(CYAN);
    line(midx + x1, midy - y1, midx + x2, midy - y2);

    float theta = 45;
    float rad = theta * M_PI / 180;

    setcolor(YELLOW);
    line(
        midx + (x1*cos(rad) - y1*sin(rad)),
        midy - (x1*sin(rad) + y1*cos(rad)),
        midx + (x2*cos(rad) - y2*sin(rad)),
        midy - (x2*sin(rad) + y2*cos(rad))
    );

    getch();
    closegraph();
}