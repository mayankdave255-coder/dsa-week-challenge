#include <iostream>
using namespace std;
int main(){
    int arr[7]={2,3,1,3,2,4,1};
    //way is to take xor 
    int result=0;
    for(int i=0;i<7;i++){
        result=result^arr[i];
    }
    cout<<result;
    return 0;
}