#include <graphics.h>
#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
    int gd = DETECT, gm;

    int x1, y1, x2, y2, x3, y3;
    float sx, sy;

    // ===== TAKE INPUT FIRST =====
    cout << "Enter x1 y1: ";
    cin >> x1 >> y1;

    cout << "Enter x2 y2: ";
    cin >> x2 >> y2;

    cout << "Enter x3 y3: ";
    cin >> x3 >> y3;

    cout << "Enter scaling factor for X-axis: ";
    cin >> sx;

    cout << "Enter scaling factor for Y-axis: ";
    cin >> sy;

    // ===== OPEN GRAPHICS AFTER INPUT =====
    initgraph(&gd, &gm, (char*)"");

    // Original triangle
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    // Scaled triangle
    setcolor(YELLOW);
    line(x1 * sx, y1 * sy, x2 * sx, y2 * sy);
    line(x2 * sx, y2 * sy, x3 * sx, y3 * sy);
    line(x3 * sx, y3 * sy, x1 * sx, y1 * sy);

    getch();
    closegraph();

    return 0;
}