#include <iostream>
using namespace std;
int main(){
    int arr1[]={1,2,3},arr2[]={4,5,6};
    int arr[6];
    int i=0,j=0,k=0;
    while(i<3 and j<3){
        if(arr1[j]<arr2[k]){
            arr[i]=arr1[j];
            i++;
            j++;
        }
        else{
            arr[i]=arr2[k];
            i++;
            k++;
        }
    }
    while(j<3){
        arr[i]=arr1[j];
        i++;
        j++;
    }
    while(k<3){
        arr[i]=arr2[k];
        i++;
        k++;
    }

    for(int i=0;i<6;i++){
        cout<<arr[i];
    }
    return 0;
}