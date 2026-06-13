#include <iostream>
using namespace std;
int main(){
    int size=11;
    for(int i=0;i<size;i++){
        char s='A';
     if(i>(size/2)){
            for(int j=0;j<i-(size/2);j++){
                cout<<" ";
            }
            for(int j=0;j<2*(size-i)-1;j++){
            cout<<char(s+j);
        }
    }
    else{   
        for(int j=0;j<size/2-i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<char(s+j);
        }
    }
        cout<<endl;
    }
    return 0;
}