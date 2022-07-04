
//selection sort 
#include<bits/stdc++.h>
#include <iostream>
void swap(int &x, int &y) 

{  int temp = x;
x = y;
y = temp;
} 

using namespace std;
void selection(int arr[],int n){
    for (int i = 0; i<n-1;i++){
        int min = i;
        for(int j = i+1; j<n; j ++){
            if(arr[j]<arr[min])
            min = j;
        }
        swap(arr[min],arr[i]);
    }
}


using namespace std;

int main()
{
    int n ;
    cin>>n;
    int arr[n];
    for (int i = 0;i<n;i++){
        cin>>arr[i];
        
    }
        selection(arr,n);
        for(int i = 0; i<n; i++){
            cout<<arr[i];
        }
 return 0;
}
