#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct dll_node_t {
    int val;
    struct dll_node_t *next;
    struct dll_node_t **prev;
} dll_node;

void dll_insert_head(dll_node **head, int v) {
    dll_node *tmp = malloc(sizeof(*tmp));
    tmp->val = v;
    tmp->next = *head;
    if (*head)
        (*head)->prev = &(tmp->next);
    tmp->prev = head;
    *head = tmp;
}

void dll_insert_sorted(dll_node **head, int v) {
    dll_node *tmp = malloc(sizeof(*tmp));
    tmp->val = v;
    while (*head && ((*head)->val < v))
        head = &((*head)->next);
    tmp->next = *head;
    if (*head)
        (*head)->prev = &(tmp->next);
    tmp->prev = head;
    *head = tmp;
}

/* delete the first instance of v in the linked list */
void dll_delete(dll_node **head, int v) {
    dll_node *tmp;
    while (*head && ((*head)->val != v))
        head = &((*head)->next);
    if (!*head) return;
    tmp = *head;
    *(tmp->prev) = tmp->next; /* previous node's next now links to next */
    if (tmp->next) /* next's previous now points to the previous */
        tmp->next->prev = tmp->prev;
    free(tmp);
}

void dll_print(const dll_node *head) {
    while (head) {
        printf("%d ", head->val);
        if (head->next)
            assert(head->next->prev == &head->next);
        head = head->next;
    }
    printf("\n");
}

void dll_compress(dll_node **head, int max_duplicate){
    /* Your code here */
}
int dll_max_duplicate(dll_node *head){
    /* Your code here */
}
void dll_remove_all(dll_node **head){
    dll_node *tmp;
    while(*head){
        tmp = (*head)->next;
        free(*head);
        *head = tmp;
    }
}

int main() {
    dll_node *head = NULL;
    int i;
    int arr[10] = {3,1,1,2,2,2,3,3,3,0};

    for(i=0;i<10;i++)
        dll_insert_sorted(&head, arr[i]);
    dll_print(head);
    printf("Max number of duplicates: %d\n", dll_max_duplicate(head));

    int n;
    printf("Enter a new number of duplicates: ");
    scanf("%d", &n);

    dll_compress(&head, n);
    dll_print(head);
    printf("Max number of duplicates: %d\n", dll_max_duplicate(head));

    dll_remove_all(&head);
    dll_print(head);
    printf("Max number of duplicates: %d\n", dll_max_duplicate(head));

}

