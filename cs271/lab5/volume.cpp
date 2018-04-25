#include <iostream>
using namespace std;

// This program inputs width, height, and length of a box then
// outputs the volume of the box.

int main(){
int width, height, length, volume;

cout << "Enter the width of the box: ";
cin >> width;
cout << "Enter the height of the box: ";
cin >> height;
cout << "Enter the length of the box: ";
cin >> length;

volume = width * height * length;

cout << endl << endl << "The volume of a box with length " << length
<< ", width " << width << " and height " << height << " is: "
<< volume << "." << endl;
} // end main
