#include <stdio.h>
int top=-1;
void push(int a[])
{
    int data;
    scanf("%d", &data);
    if (top == 4)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        a[top] = data;
    }
    
}
void display(int a[])
{
    int j =top;
    while (j >= 0)
    {
        printf("%d ", a[j]);
        j--;
    }
}
void pop(int a[]){
    if(top==-1) printf("Stack Underflow\n");
    else{
        top--;
    }
}
    int main()
    {
        int stack[5], top = -1;
        push(stack);
        push(stack);
        push(stack);
        push(stack);
        push(stack);
        display(stack);
        printf("\n");
        pop(stack);
        display(stack);
    }