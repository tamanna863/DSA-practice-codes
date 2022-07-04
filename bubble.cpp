
#include <iostream>

using namespace std;
void swap(int &x,int &y){
    int temp = x;
    x=y;
    y = temp;
}
void bubble( int arr[] ,int n){
    for (int i = 0;i<n-1;i++){
        //for round 1 - n-1
        for(int j = 0; j<n-i;j++){// unsorted array gets small with each round
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main()
{
    int n ;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }bubble(arr,n);
    for(int i = 0; i<n;i++){
        cout<<arr[i];
    }
    return 0;
}
