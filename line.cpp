//
// Created by HP on 2/27/2026.
//

#include <graphics.h>

int main() {
    int gd = DETECT, gm;

    // Initialize the graphics window
    initgraph(&gd, &gm, "");

    // putpixel(100, 100, RED);

    // Note: 'line' must be lowercase in C++
    line(100, 100, 200, 200);

    // Wait for a key press
    getch();

    // Close the graphics window
    closegraph();

    // Standard C++ requires main to return an integer
    return 0;
}