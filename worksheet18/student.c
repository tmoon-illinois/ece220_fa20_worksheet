#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUF_SIZE 100
struct StudentStruct{
    char *FirstName;
    int UIN;
    float GPA;
};
typedef struct StudentStruct student;

void PrintAllStudent(student *s, int total);
void SwapStudent(student *s1, student *s2);
void SortGPA(student *s, int total);
int main(){
    //student s[100];
    student *s = NULL;
    student *more_s = NULL;
    int total=0, temp;
    char buf[BUF_SIZE];


    while(1){
        printf("Enter student's UID: ");
        scanf("%d", &temp);
        if(temp == -1)
            break;

        /* Your code here */



    }
    PrintAllStudent(s, total);
    SortGPA(s, total);
    printf("\n<< Sorted result >>\n");
    PrintAllStudent(s, total);

    /* Your code here */



    return 0;

}
void PrintAllStudent(student *s, int total){
    int i;
    printf("FirstName, UIN, GPA\n");
    for(i=0;i<total;i++)
        printf("%s, %d, %f\n", s[i].FirstName, s[i].UIN, s[i].GPA);
}
void SwapStudent(student *s1, student *s2){
    student temp;
    /* Your code here */

}
void SortGPA(student *s, int total){
    int i, is_swapped = 0;
    do{
        is_swapped = 0;
        for(i=0;i<total-1;i++){
            if(s[i].GPA < s[i+1].GPA){
                SwapStudent(&s[i], &s[i+1]);
                is_swapped = 1;
            }
        }
    }while(is_swapped !=0);
}
