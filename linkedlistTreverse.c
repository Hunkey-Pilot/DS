#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
void dislpay(struct node* ptr){
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}

int main()
{
    struct node *head,*second,*third;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    head->data=60;
    head->next=second;

    second->data=70;
    second->next=third;

    third->data=80;
    third->next=NULL;

    dislpay(head);
}