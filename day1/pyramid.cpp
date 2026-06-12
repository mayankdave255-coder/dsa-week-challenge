#include <iostream>
using namespace std;
int main(){
    int side;
    cin>>side;
    for(int i=0;i<side;i++){
        for(int j=0;j<side-i;j++){
            cout<<" ";
        }
        for(int j=0;j<((2*i)+1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}