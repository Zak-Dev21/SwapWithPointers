#ifndef Header_h
#define Header_h

// defining fct that swaps the value of two integers using their addresses
void swap(int* x, int* y) {
    int temp = *x; //creating temporary variable to store memory address for x
    *x = *y; // assign memory address of x to memory address of y
    *y = temp; // assign memory address of y to temporary variable (point to address of x)
}

#endif

