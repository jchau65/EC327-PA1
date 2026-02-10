#include <iostream>
#include <string>
using namespace std;

int main() {
    // Initialize/declare integer variables to hold coordinate points
    int x1, y1, x2, y2, x3, y3; // points 1 and 2 make the line, point 3 is the point
    double distance; // variable to hold the distance

    // Inputting coordinates and storing
    cout << "Enter three x,y coordinates:" << endl; // Print console command
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3; // Store points into interger variables

    // Calculating distance
    distance = abs((x2 - x1) * (y1 - y3) - (x1 - x3) * (y2 - y1))/sqrt(pow((x2 - x1), 2)+ pow((y2 - y1), 2)); // distance formula
    cout << "The shortest distance for (" << x3 << "," << y3 << ") to the line composed of (" << x1 << "," << y1 << ") and (" << x2 << "," << y2 << ") is " << distance << "."; // Outputting distance
}