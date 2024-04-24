#include<bits/stdc++.h>
using namespace std;
void selection_sort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int indexofmin=i;
        for(int j=i+1;j<n;j++){
             if(a[j]<a[indexofmin]){
                indexofmin=j;
             }
        }
        int temp=a[i];
       a[i]=a[indexofmin];
       a[indexofmin]=temp;;
    }
}
void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   selection_sort(a,n);
   display(a,n);

return 0;
}