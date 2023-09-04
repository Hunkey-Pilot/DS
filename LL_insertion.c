#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link;
};

void treversel(struct node* head){
   struct node *p=head;
    while(p->link!=NULL){
        printf("%d\n",p->data);
        p=p->link;
    }
}
struct node *Atfirst(struct node *head,int data){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->link=head;
    ptr->data=data;
    return ptr;
}
struct node *Atmiddle(struct node *head,int index){
        struct node *p,*q;
        struct node* ptr=(struct node*)malloc(sizeof(struct node));
        p=head->link;
        while(index!=2){
            p=head->link;
            index--;
        }
        ptr->data=55;
        ptr->link=p->link;
        p->link=ptr;
       return head;
        
}
struct node *Atlast(struct node *head){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    struct node* p=head;
    while(p->link!=NULL){
        p=p->link;
    }
    ptr->data=70;
    p->link=ptr;
    ptr->link=NULL;
    
    return head;
}
struct node *deletefirst(struct node *head){
    struct node* ptr;
    ptr=head;
    head=head->link;
    free(ptr);
    return head;
    

}
struct node* deletemiddle(struct node *head,int index){
    struct node* ptr,*p;
    int i=1;
    p=head;
    while(i!=index-1){
        p=p->link;
        i++;
    }
    ptr=p->link;//n3
    p->link=ptr->link;
    free(ptr);
    
    return head;
}
struct node* deletelast(struct node* head){
    struct node* p,*q;
    p=head;
    q=p->link;
    while(q->link!=NULL){
        p=p->link;
        q=q->link;
    }
    p->link=NULL;
    free(q);
    return head;
}
int main()
{ 
    struct node *head,*n1,*n2,*n3,*n4;
    int i;
    n1=(struct node*)malloc(sizeof(struct node));
    n2=(struct node*)malloc(sizeof(struct node));
    n3=(struct node*)malloc(sizeof(struct node));
    n4=(struct node*)malloc(sizeof(struct node));

    n1->data=10;
    n1->link=n2;

    n2->data=20;
    n2->link=n3;

    n3->data=30;
    n3->link=n4;

    n4->data=40;
    n4->link=NULL;
    printf("Before Insertion:\n");
    treversel(n1);
    printf("After Deletation:\n");
   // n1= Atlast(n1);
    //n1= Atmiddle(n1,3);
    //n1 = Atfirst(n1,16);
    //n1=deletefirst(n1);
    //n1=deletemiddle(n1,3);
    n1=deletelast(n1);
    treversel(n1);
}