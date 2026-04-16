#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Original triangle
    int x1 = 100, y1 = 100;
    int x2 = 150, y2 = 50;
    int x3 = 200, y3 = 100;

    // Draw original triangle
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    // Scaling factors (better values)
    float sx = 1.5, sy = 1.5;

    // Draw scaled triangle directly
    setcolor(YELLOW);
    line(x1*sx, y1*sy, x2*sx, y2*sy);
    line(x2*sx, y2*sy, x3*sx, y3*sy);
    line(x3*sx, y3*sy, x1*sx, y1*sy);

    getch();
    closegraph();
}