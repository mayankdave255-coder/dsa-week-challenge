#include <iostream>
using namespace std;
int main(){
    int a=10,b=20,temp;
    cout<<"a = "<<a<<" b = "<<b<<endl;
    //with third variable
    temp=a;
    a=b;
    b=temp;
    cout<<"a = "<<a<<" b = "<<b<<endl;

    //without third variable
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a = "<<a<<" b = "<<b<<endl;
}
