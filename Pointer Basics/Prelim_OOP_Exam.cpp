#include <iostream>
#include <algorithm> 
using namespace std;

double *d_var, *d_array;

int main(){

    // A. Declare two (type double) pointer variables named d_var and d_array: 
    double *d_var;
    double *d_array;

    // B. Write C++ statements to dynamically create a double-precision floating-point variable and store its address in d_var.
    // Also dynamically create an array of 10 double-precision floatingpoint values and store its address in d_array: 
    d_var = new double;
    d_array = new double[10];

    // C. Write C++ statements to input a value for d_var (i.e., a value that d_var points to) from the console and then display it: 
    cout << "Enter value: ";
    cin >> *d_var;
    cout << "Value stored in d_var: " << *d_var << endl;

    // D. Write C++ statements to initialize the 10 double values in the dynamically allocated array to 1.0  
    for (int i = 0; i < 10; i++) {
        d_array[i] = 1.0;
    }

    // E. Now write C++ statements to de-allocate the memory (i.e. using the delete operator) pointed by d_var and d_array: 
    delete d_var;
    delete[] d_array;

    return 0;
}  