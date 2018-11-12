#include <iostream>
#include <stdio.h>

using namespace std;

double calculateVolume(float width, float height, float length) {
    return width * height * length;
}

float calculateSurfaceArea(float width, float height, float length) {
    return (width * height *2) + (width * length *2) + (height * length *2);
}

int main() {

    float width;
    float height;
    float length;

    cout << "You are going to build a cuboid. Please enter a width:";

    cin >> width;

    if (width > 0) {
        printf("\nPlease enter a height:");
    }

    cin >> height;

    if (height > 0) {
        printf("\nPlease enter a length:");
    }

    cin >> length;

    if (length > 0){
        printf("\n");
    }

//    printf("Volume is: %f", calculateVolume(width, height, length));
//
//    printf("\nSurface area is: %f", calculateSurfaceArea(width, height, length));
    printf("You have created a cuboid\nThe volume is: %f\nAnd the surface area is: %f", calculateVolume(width, height, length),
            calculateSurfaceArea(width, height, length));

    return 0;
}

