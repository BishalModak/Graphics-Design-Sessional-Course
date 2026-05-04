#include <graphics.h>
#include <conio.h>
#include <iostream>
using namespace std;

// Function to draw House
void drawHouse() {
    rectangle(200, 200, 400, 400); // body
    line(200, 200, 300, 120);      // roof left
    line(400, 200, 300, 120);      // roof right
    rectangle(270, 300, 330, 400); // door
}

// Function to draw Car
void drawCar() {
    rectangle(150, 300, 450, 350); // body
    rectangle(200, 250, 400, 300); // top
    circle(220, 360, 20);          // wheel 1
    circle(380, 360, 20);          // wheel 2
}

// Function to draw Fish
void drawFish() {
    ellipse(300, 300, 0, 360, 80, 40); // body
    line(380, 300, 450, 250);          // tail
    line(380, 300, 450, 350);
    circle(260, 290, 5);               // eye
}

// Function to draw Man
void drawMan() {
    circle(300, 200, 30);          // head
    line(300, 230, 300, 350);      // body
    line(300, 250, 250, 300);      // left hand
    line(300, 250, 350, 300);      // right hand
    line(300, 350, 250, 400);      // left leg
    line(300, 350, 350, 400);      // right leg
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int choice;

    cout << "1. House\n";
    cout << "2. Car\n";
    cout << "3. Fish\n";
    cout << "4. Man\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            drawHouse();
            break;
        case 2:
            drawCar();
            break;
        case 3:
            drawFish();
            break;
        case 4:
            drawMan();
            break;
        default:
            cout << "Invalid choice!";
    }

    getch();
    closegraph();
    return 0;
}