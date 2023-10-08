#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *top=NULL;
void push(int data){
    struct node *ptr =(struct node*)malloc(sizeof(struct node));
    struct node *temp;
    ptr->next=NULL;
    if(top==NULL){
        //printf("STack is Empty\n");
        top=ptr;
        ptr->data=data;
        ptr->next=NULL;
    }
    else{
        temp=top;
        top=ptr;
       // temp->next=ptr;
        ptr->data=data;
        ptr->next=temp;
        
    }
}
void display(){
    struct node *temp;
    temp=top;
    if(top==NULL){
        printf("Stack is enpty\n");
    }
    else{
        while(temp!=NULL){
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}

int main(){ 
        push(7);
        push(22);
        push(4);
        display();

}