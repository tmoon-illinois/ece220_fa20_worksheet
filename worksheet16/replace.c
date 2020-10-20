#include <stdio.h>
#include <string.h>

#define BUF 200

int main(){
    FILE *fpin, *fpout;

    char srcname[BUF], desname[BUF], word[BUF], line[BUF], rep[BUF], newstr[BUF];
    char *ptr;
    int len;

    printf("Enter the input file name: ");
    scanf("%s", srcname);
    printf("Enter the output file name: ");
    scanf("%s", desname);
    
    printf("search: ");
    scanf("%s", word);

    printf("replace: ");
    scanf("%s", rep);
   
    /* Your code here */
    
    
    fclose(fpin);
    fclose(fpout);
    return 0;
}
