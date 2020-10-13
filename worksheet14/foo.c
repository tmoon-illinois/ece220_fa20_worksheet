#include <stdio.h>

int foo(char *c){
    if(*c==0) 
        return 0;
    else
        return foo(c+1) + 1;
}

int main(){
    char str[100] = "ABC";
    printf("%d", foo(str));
}

