#include<iostream>
using namespace std;
template <class t>
t maxOf(t a ,t b)
{
    return a>b?a:b;
}
template <class t>
t maxOf(t a , t b, t c)
{
    return a>(b>c?b:c)?a:(b>c?b:c);
}
int main()
{
    int num1 , num2 , num3;
    float num4, num5 , num6;
    char num7, num8 , num9;
    cout<<"Enter 2 Integer Numbers"<<endl;
    cin>>num1>>num2;
    cout<<"Enter 2 Float Numbers"<<endl;
    cin>>num4>>num5;
    cout<<"Enter 2 char Numbers"<<endl;
    cin>>num7>>num8;
    cout<<"Interger Paramenters : "<<maxOf( num1,num2)<<endl;
    cout<<"Float Paramenters : "<<maxOf( num4,num5)<<endl;
    cout<<"Character Paramenters : "<<maxOf( num7,num8)<<endl;
    cout<<"Enter 3 Integer Numbers"<<endl;
    cin>>num1>>num2>>num3;
    cout<<"Enter 3 Float Numbers"<<endl;
    cin>>num4>>num5>>num6;
    cout<<"Enter 3 char Numbers"<<endl;
    cin>>num7>>num8>>num9;
    cout<<"Interger Paramenters : "<<maxOf( num1,num2, num3)<<endl;
    cout<<"Float Paramenters : "<<maxOf( num4,num5,num6)<<endl;
    cout<<"Character Paramenters : "<<maxOf( num7,num8,num9)<<endl;

    return 0;

}
