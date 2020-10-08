#include <stdio.h>
#define SIZE1 6
#define SIZE2 4

/*
 * inputs::
 * array1, array2: two arrays
 * size1, size2: the size of the arrays
 * output::
 * 1 if the pair exists
 * 0 if not
 */
int swapEqSum(int *array1, int size1, int *array2, int size2){
    /* Your code here */
}
void printArray(int *array, int size){
    int i;
    for(i=0; i<size; i++)
        printf("%d ", array[i]);
    printf("\n");
}

int main(){
    int array1[SIZE1] = {4,1,2,1,1,2};
    int array2[SIZE2] = {3,6,3,3};

    printArray(array1, SIZE1);
    printArray(array2, SIZE2);

    if(swapEqSum(array1, SIZE1, array2, SIZE2)){
        printArray(array1, SIZE1);
        printArray(array2, SIZE2);
    }
    else
        printf("A pair not exist.\n");

    return 0;
}



