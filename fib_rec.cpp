#include<bits/stdc++.h>
using namespace std;
int fib(int n){
    if(n<=1){
         return n;
    }
   
    return(fib(n-1)+fib(n-2));
}

int main()
{ 
    int n,i=0;
    cin>>n;
    while(i>n){
        cout<<n<<" ";
        i++;
    }
    

return 0;
}