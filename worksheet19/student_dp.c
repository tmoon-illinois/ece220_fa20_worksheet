#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUF_SIZE 100
typedef struct node_t{
    char *FirstName;
    int UIN;
    float GPA;
    struct node_t *next;
}node;

void insert_head(node **head, node *data);
void insert_sorted_name(node **head, node *data);
void print_list(const node *head);
void print_list_GPA(const node *head, float low, float high);
void delete_all(node **head);
int main(){
    node *head = NULL;
    int temp;
    char buf[BUF_SIZE];
    
    while(1){
        printf("Enter student's UID: ");
        scanf("%d", &temp);
        if(temp == -1)
            break;

        node data;
        data.UIN = temp;

        printf("Enter student's name: ");
        scanf("%s", buf);
        data.FirstName = (char*) malloc(strlen(buf)+1);
        strcpy(data.FirstName, buf);

        printf("Enter student's GPA: ");
        scanf("%f", &(data.GPA));

        insert_sorted_name(&head, &data);
        free(data.FirstName);
    }
    print_list(head);

    float low, high;
    printf("Enter GPA range to print list (low high): ");
    scanf("%f %f", &low, &high);
    print_list_GPA(head, low, high);
    delete_all(&head);

    return 0;

}
