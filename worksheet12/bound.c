#include <stdio.h>

int sumBound(const int *array, int row, int col){
    /* Your code here */
}
int main(){
    int array[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    printf("The sum of bounadry is %d.\n", sumBound(&array[0][0], 4, 3));
    return 0;
}
