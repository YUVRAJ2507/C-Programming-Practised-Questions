#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void insertatstart(struct Node** head , int data){
    struct Node* newNode = malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->next =*head;
    *head = newNode;
}

int main(){
    struct Node* Head = NULL;

    insertatstart(&Head , 10);

    struct Node* a = Head;
    while(a != NULL){
        printf("%d -> ",a->data);
        a = a->next;
    }
    printf("NULL\n");

}
