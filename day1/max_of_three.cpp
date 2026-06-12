#include <iostream>
using namespace std;
int main(){
    int a=12,b=15,c=7;
    if(a>b){
        if(a<c){
            cout<<c;
        }
        else{
            cout<<a;
        }
    }
    else{
        if(b<b){
            cout<<c;
        }
        else{
            cout<<b;
        }
    }
    return 0;
}