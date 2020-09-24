#include <stdio.h>
#include <math.h>

int getDigitBaseN(int number, int N){
    /* Your code here */
}
void printBaseN(int number, int N){
    int digit = getDigitBaseN(number, N);
    /* Your code here */
}

int main(){
    int number, N;
    printf("type number: ");
    scanf("%d", &number);
    printf("type base N: ");
    scanf("%d", &N);

    printf("number of digits: %d\n", getDigitBaseN(number, N));
    printBaseN(number, N);

    return 0;
}
