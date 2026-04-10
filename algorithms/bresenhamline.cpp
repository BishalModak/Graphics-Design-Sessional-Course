#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<math.h>
using namespace std;


int main()
{
    // Hardcoded values for easier testing
    int x1 = 100, y1 = 100;
    int x2 = 400, y2 = 300;
    int x, y;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int dx = x2 - x1;
    int dy = y2 - y1;

    x = x1;
    y = y1;

    // Initial decision parameter
    int p = 2 * dy - dx;

    while (x <= x2) {
        putpixel(x, y, WHITE);
        x++;

        if (p < 0) {
            p = p+2*dy;
        }
        else{
            y++;
            y++;
            p = p + 2 * dy - 2 * dx;
        }
    }
    
    getch();
    closegraph();
    
    return 0;
}