#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr,n,i;
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));

   /*for(i=0;i<n;i++){
        scanf("%d",ptr+i);
    }
    int n1;
    scanf("%d",&n1);*/
    //int *ptr1=(int*)realloc(ptr,n1*sizeof(int));
    for(i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
    free(ptr);
    return 0;
}