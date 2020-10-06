#include <stdio.h>

int stringcmp(const char *str1, const char *str2){
    /* Your code here */
}

int main(){
    char *str1 = "ABC";
    char *str2 = "ABCD";

    int ret = stringcmp(str1, str2);
    if(ret == 0)
        printf("%s and %s are the same. \n", str1, str2);
    else if(ret <0)
        printf("%s is less than %s. \n", str1, str2);
    else
        printf("%s is greater than %s. \n", str1, str2);


    return 0;
}
