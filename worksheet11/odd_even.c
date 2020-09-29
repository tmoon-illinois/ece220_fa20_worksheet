#include <stdio.h>


void oddeven(int *arr, unsigned int count){

}

int main(){
    int arr[50];
    int i, N;
    for(i=0; i<50; i++){
        scanf("%d", arr+i);
        if(arr[i] == -1)
            break;
    }
    N = i;
    oddeven(arr, N);
    for(i=0; i<N; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
