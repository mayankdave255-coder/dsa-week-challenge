#include <iostream>
using namespace std;
int main(){
    int arr[]={2,3,5,7,6,1};
    int m1,m2;
    if(arr[0]<arr[1]){
        m1=arr[1];
        m2=arr[0];
    }
    else{
        m2=arr[1];
        m1=arr[0];
    }
    for(int i=2;i<6;i++){
        if(m1<arr[i]){
            m2=m1;
            m1=arr[i];
        }
        else if(m2<arr[i]){
            m2=arr[i];
        }
    }   
    cout<<m2;
    return 0;
}