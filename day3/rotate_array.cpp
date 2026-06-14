#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int k=2;
    //my approach is of dual loop one for a single roation and other for n number of rotation
    //also k should be modulus by arr length as at every arr length rotation it becomees the original array
    k=k%(sizeof(arr)/sizeof(arr[0]));
    while(k>0){
        int temp=arr[sizeof(arr)/sizeof(arr[0])-1];
        for(int i=4;i>0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
        k--;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }

    //another method is to first put the last element in an answer array using fro(int i=n-k;i<n;i++)
    //then for 0 to n-k add the other elements to the array 

    //much easier when dont by vectors
    //reverse(v.begin(),v.end());
    // reverse(v.begin,v.begin()+k);
    // revesre(v.begin()+k,v.end());
    return 0;
}