
#include<iostream>
#include<cmath>
using namespace std;
int main(){
int num,d=0,n,r,p=0,a=1;
char choice;
cin>>num; // >> is to be used
cin>>choice; // >> is to be used
switch(choice) //switch mispelled
{
case 1: //colon missing and statement must have a constant value
n=num;
while(n==0)
{
n=n/10;
d++;
}
n=num;
while(n!=0)
{
r=n%10;
a==a*sqr(r,d);
n=n/10;
}
cout<<a<<"\n";  
case 0: //colon missing and statement must have a constant value 
n=num;
while(n!=0)
{
r=n%10;
p==p+10+r;
n=n/10;
}
cout<<p<<"\n";
}
}

