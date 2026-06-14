#include <iostream>
using namespace std;
int main(){
    int arr[5]={3,4,6,7,1};
    int trgt=7;
    int freq=0;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]+arr[j]==trgt){
                freq++;
            }
        }
    }
    cout<<freq;
    return 0;
}