#include<iostream>
using namespace std;
int main()
{ int a,b;
char op;
cout<< "enter the problem you want to calc :: ";
cin>>a>>op>>b;
if ( op=='+') // op is always in''
{
    cout<<a+b;

}
if ( op=='*')
{
    cout<<a*b;

}
if ( op=='-')
{
    cout<<a-b;

}
if ( op=='/')
{
    cout<<a/b;

}


}
