#include <iostream>
using namespace std;

int main() {
    // if I initialize the array then I can skip the size of array.
    int A[10]={2,4,6,8,10,12,14};

    cout<< sizeof(A)<< endl;
    for(int x:A){
        cout<< x<< endl;

    } 
/*
    cout<< A[8]<< endl;
    printf("%d", A[9]);
*/
    return 0;

}