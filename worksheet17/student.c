#include <stdio.h>
#include <string.h>
#define BUF_SIZE 100
struct StudentStruct{
    char FirstName[BUF_SIZE];
    int UIN;
    float GPA;
};
typedef struct StudentStruct student;

void PrintAllStudent(student *s, int total);
void SwapStudent(student *s1, student *s2);
void SortGPA(student *s, int total);
int main(){
    student s[100];
    int total=0, temp;

    while(1){
        printf("Enter student's UID: ");
        scanf("%d", &temp);
        if(temp == -1)
            break;

    }
    PrintAllStudent(s, total);
    SortGPA(s, total);
    printf("\n<<< Sorted result >>>\n");
    PrintAllStudent(s, total);

    return 0;
}
