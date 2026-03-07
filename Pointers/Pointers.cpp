#include <iostream>
#include <algorithm> 
using namespace std;

int *randArray(int n){
    int *arr = new int[n];

    for (int i = 0; i < n; i++){
        arr[i] = rand();
    }

    return arr;
}


int main(){
    
int *a = randArray(100);

// a) Only print the odd index elements of the array. 
    cout << "Odd index elements:" << endl;
    for(int i = 1; i < 100; i += 2){
        cout << a[i] << endl;
    }

// b) Print all the elements whose indexes are multiple of 3 and 5.
    cout << "Elements whose indexes are multiple of 3 and 5:" << endl;
    for(int i = 0; i < 100; i++){
        if(i % 3 == 0 && i % 5 == 0){
            cout << a[i] << endl;
        }
    }

// c) Print all values of the array (one per line) and delete the dynamically allocated array.
    cout << "All array values:" << endl;
    for(int i = 0; i < 100; i++){
        cout << a[i] << endl;
    }
    delete[] a;

    return 0;
}    
