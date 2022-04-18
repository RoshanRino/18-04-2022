#include<iostream>
using namespace std;
template <class t,class t1,class t2>
t maxOf(t1 a ,t2 b)
{
    return a>b?a:b;
}


int main()
{
    int num1 =10, num2=12;
    float num4=99.27, num5=15.2;
    char num7='B', num8='L';
    cout<<maxOf<float>(num1 , num5)<<endl;
    cout<<maxOf<int>(num1 , num5)<<endl;
    cout<<maxOf<char>(num7,num1)<<endl;
    cout<<maxOf<char>(num7,num8);
    return 0;

}
