#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int a[],int n){
         int temp;
         for(int i=1;i<n;i++){ //usnsorted sublist;
            temp=a[i];
            int j=i-1;
            while(j>=0 && a[j]>temp){ //running sorted sublist from backward
                a[j+1]=a[j];
                j--;
            }
            a[j+1]=temp;
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
    insertion_sort(a,n);
    display(a,n);
return 0;
}