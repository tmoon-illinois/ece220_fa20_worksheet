#include <stdio.h>
/* max number of sticks */
#define N 10
#define M 3

const int set[M] = {3,7,10};
int solve(int solution[N], int idx,  int total){
    /* Your code here */
}


int main(){

    int solution[N] = {0};
    int total, i;

    printf("Enter total length: ");
    scanf("%d", &total);

    if(solve(solution, 0, total)){
        printf("A solution found:\n");
        for(i=0;i<N;i++)
            printf("%d ", solution[i]);
    }
    else
        printf("No solution exists.\n");

}

