#include<iostream>
using namespace std;
template <class t>
t maxOf(t a ,t b)
{
    return a>b?a:b;
}
int main()
{
    int num1 , num2;
    float num3, num4;
    char num5, num6;
    cout<<"Enter 2 Integer Numbers"<<endl;
    cin>>num1>>num2;
    cout<<"Enter 2 Float Numbers"<<endl;
    cin>>num3>>num4;
    cout<<"Enter 2 char Numbers"<<endl;
    cin>>num5>>num6;
    cout<<"Interger Paramenters : "<<maxOf( num1,num2)<<endl;
    cout<<"Float Paramenters : "<<maxOf( num3,num4)<<endl;
    cout<<"Character Paramenters : "<<maxOf( num5,num6)<<endlsss;
    return 0;

}
