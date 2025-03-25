#include <iostream>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
    char x;
}r1;

int main() {
    // struct Rectangle r1;
    r1.length = 10;
    r1.breadth = 5;

    cout<< "Size of Structre "<< sizeof(r1)<< endl;
    cout<< "Length of Rectangle " << r1.length<< endl;
    cout<< "Breadth of Rectangle " << r1.breadth<< endl;
    cout<< "Area of Rectangle is "<< r1.length*r1.breadth;

    return 0;
}

/* Need to study memory padding */