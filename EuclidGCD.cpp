#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
     if(b==0) return a;
     else gcd(b,a%b);
}


int main()
{
   int a,b;
   cin>>a>>b;
   int c=gcd(a,b);
   cout<<c<<endl;
   cout<<__gcd(a,b)<<endl;
   
return 0;
}