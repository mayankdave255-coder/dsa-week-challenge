#include <iostream>
using namespace std;
int main(){
    int arr[9]={1,1,1,0,1,0,0,0,1};
    int i=0,j=8;
    while(i<j){
        if(arr[i]==0){
            i++;
        }
        else if(arr[j]==1){
            j--;
        }
        else{
            swap(arr[i],arr[j]);
        }
    }
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}