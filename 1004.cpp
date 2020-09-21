#include<iostream>
using namespace std;
int main()
{
float a,s=0,i;
for(i=0;i<=11;i++)
{
cin>>a;
s+=a;
}
cout<<"$"<<s/12;
return 0;
}