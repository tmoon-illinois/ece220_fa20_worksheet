#include <stdio.h>
#include <string.h>

#define BUF 200

int main(){
    FILE *fp;
    char filename[BUF], word[BUF], line[BUF];
    int linenum=0;

    printf("Input file name: ");
    scanf("%s", filename);
    printf("Search: ");
    scanf("%s", word);
    
    /* Your code here */
    
    
    fclose(fp);
    return 0;
}
