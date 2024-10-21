#include "pointer.h"
#include "common.h"

int main(){

    int i = intSize();
    printf("Int Size: %d\n", i);

    int d = doubleSize();
    printf("Double Size: %d\n", d);

    int p = pointerSize();
    printf("Pointer Size: %d\n", p);

    int num1 = 3;
    int num2 = 6;

    int *ptr1 = &num1;
    int *ptr2 = &num2;
    printf("Pointer Values: %d, %d\n", *ptr1, *ptr2);
    swapInts(ptr1, ptr2);
    printf("Pointer Swapped Vals: %d, %d\n", *ptr1, *ptr2);

    int arrayAt5 = changeValue();
    printf("Array[5]: %d\n", arrayAt5);

    return 0;
}

