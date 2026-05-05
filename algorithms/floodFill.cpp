#include <graphics.h>
#include <conio.h>
#include <iostream>
using namespace std;

void floodFill(int x, int y, int oldColor, int newColor) {
    if (getpixel(x, y) != oldColor)
        return;

    putpixel(x, y, newColor);

    floodFill(x + 1, y, oldColor, newColor);
    floodFill(x - 1, y, oldColor, newColor);
    floodFill(x, y + 1, oldColor, newColor);
    floodFill(x, y - 1, oldColor, newColor);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm,(char*) "");

    // Draw shape
    rectangle(200, 200, 400, 400);

    int x, y, newColor, oldColor;

    cout << "Flood Fill Algorithm\n";
    cout << "Enter starting point (x y): ";
    cin >> x >> y;

    cout << "Enter new color (0-15): ";
    cin >> newColor;

    oldColor = getpixel(x, y);

    floodFill(x, y, oldColor, newColor);

    getch();
    closegraph();
    return 0;
}