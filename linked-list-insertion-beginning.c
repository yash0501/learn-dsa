// Inserting a node at beginning
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * link;
};

struct node * head; // global head variable

void insert(int x){
    struct node * temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->link = head;
    head = temp;
}

void print(){
    struct node * temp = head;
    printf("List is :");
    while(temp != NULL){
        printf("%d",temp->data);
        temp = temp->link;
    }
    printf("\n");
}

int main(){
    head = NULL; // empty list
    int n,i;
    printf("How many numbers to input??");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        int a;
        printf("Enter the number : \n");
        scanf("%d", &a);
        insert(a);
        print();
    }
    return 0;
}
