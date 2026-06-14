#include <iostream>
using namespace std;
int main(){
    int arr[6]={3,4,6,7,1,0};
    int trgt=4;
    int freq=0;
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            for(int k=j+1;k<6;k++){
                if(arr[i]+arr[j]+arr[k]==trgt){
                    freq++;
                }
            }
        }
    }
    cout<<freq;
    return 0;
}