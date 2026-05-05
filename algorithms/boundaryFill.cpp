#include <graphics.h>
#include <conio.h>

void boundaryFill(int x, int y, int fillColor, int boundaryColor) {
    int current = getpixel(x, y);

    if (current != boundaryColor && current != fillColor) {
        putpixel(x, y, fillColor);

        boundaryFill(x + 1, y, fillColor, boundaryColor);
        boundaryFill(x - 1, y, fillColor, boundaryColor);
        boundaryFill(x, y + 1, fillColor, boundaryColor);
        boundaryFill(x, y - 1, fillColor, boundaryColor);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    rectangle(200, 200, 400, 400);

    boundaryFill(250, 250, RED, WHITE);

    getch();
    closegraph();
}