#ifndef Header_h
#define Header_h

void swap(int* x, int* y) { // defining fct that takes two integer addresses
    int temp = *x; //creating temporary variable to store memory address for x
    *x = *y; // assign memory address of x to memory address of y
    *y = temp; // assign memory address of y to temporary variable (point to address of x)
}

#endif

