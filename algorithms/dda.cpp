#include <iostream>
#include <cmath>
#include <graphics.h>
using namespace std;

// Function to plot a point (for graphics output)
void plotPoint(int x, int y) {
    putpixel(x, y, WHITE);
}

// DDA Algorithm Implementation
void drawLineDDA(int x1, int y1, int x2, int y2) {
    // Step 1: Calculate differences
    float dx = x2 - x1;
    float dy = y2 - y1;
    
    cout << "Starting DDA Algorithm" << endl;
    cout << "Point 1: (" << x1 << ", " << y1 << ")" << endl;
    cout << "Point 2: (" << x2 << ", " << y2 << ")" << endl;
    cout << "dx = " << dx << endl;
    cout << "dy = " << dy << endl;
    
    // Step 2: Determine number of steps (use the maximum absolute difference)
    int steps = round(max(abs(dx), abs(dy)));
    
    cout << "Number of steps: " << steps << endl;
    
    // Step 3: Calculate increment values
    float x_increment = dx / steps;
    float y_increment = dy / steps;
    
    cout << "x_increment = " << x_increment << endl;
    cout << "y_increment = " << y_increment << endl;
    
    // Step 4: Initialize current position
    float x = x1;
    float y = y1;
    
    cout << "\nPlotting points:" << endl;
    
    // Step 5: Repeat for each step
    for (int i = 1; i <= steps; i++) {
        // Plot current point (rounded to nearest integer)
        int plotX = round(x);
        int plotY = round(y);
        
        cout << "Step " << i << ": (" << plotX << ", " << plotY << ")" << endl;
        
        // Plot the point on graphics window
        plotPoint(plotX, plotY);
        
        // Increment x and y
        x = x + x_increment;
        y = y + y_increment;
    }
    
    cout << "\nLine drawing completed!" << endl;
}

int main() {
    // Initialize graphics mode
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    
    // Set white color
    setcolor(WHITE);
    

    cout << "=== DDA Line Drawing Algorithm ===" << endl;
    drawLineDDA(100, 100, 400, 300);
    
    // Keep window open until key is pressed
    cout << "\nPress any key to exit..." << endl;
    getch();
    
    // Close graphics window
    closegraph();
    
    return 0;
}

