#include <stdio.h>

unsigned int bindigit(unsigned int dec){
}
void dec2bin(unsigned int *arr, int count, unsigned int dec){
}


int main(){
    unsigned int dec;
    printf("Input a decimal number: ");
    scanf("%d", &dec);

    unsigned int N, arr[32];
    int i;
    N = bindigit(dec);
    printf("Number of digit in binary: %d\n", N);

    dec2bin(arr, N, dec);
    for(i=N-1; i>=0; i--)
        printf("%d", arr[i]);
    printf("\n");
    return 0;
}
