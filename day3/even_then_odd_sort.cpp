// move even to begining and odd toward end relative order doesnt matter
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int i = 0, j = 4;
    while (i < j){
        if(arr[i]%2==1&&arr[j]%2==0){
            swap(arr[i],arr[j]);
            i++;;j--;
        }
        
        if(arr[i]%2==0){
            i++;
        }
        if(arr[j]%2==1){
            j--;
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}