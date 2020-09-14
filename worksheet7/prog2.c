#include <stdio.h>

int c;
void A(){
    static int a = 0;
    int b = 0;
    a++;
    b++;
    printf("a: %d, b: %d\n", a, b);
}

int main(){
    c++;
    a++;

    A();
    A();
    A();
    A();

    return 0;
}
