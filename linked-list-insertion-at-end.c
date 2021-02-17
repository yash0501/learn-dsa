#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
};

struct node * head;

void insert(int x){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    struct node * temp;
    if(ptr == NULL){
        printf("OVERFLOW\n");
    }
    else{
        ptr->data = x;
        if(head == NULL){
            ptr->next = NULL;
            head = ptr;
            printf("Node Inserted\n");
        }
        else{
            temp = head;
            while (temp->next != NULL){
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("Node Inserted\n");
        }
    }
}

void print(){
    struct node * temp = head;
    printf("Linked List is : \n");
    while (temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    head = NULL;
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    print();
    return 0;
}
