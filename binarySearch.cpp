//recursive waala

#include <bits/stdc++.h>

using namespace std;
int binS(int *arr,int s,int e, int key){
    if(s>=e){
        return -1;
    } int mid = s+(e-s)/2;
    if(arr[mid]==key){
        return mid;
    }
    if(key>arr[mid]){
        binS(arr,mid+1,e,key);
    }else 
    binS(arr,s,mid-1,key);
    
}

int main()
{
    int arr[5]= {2,3,5,7,8};
    int key;
    cout<<"enter the key to be searched";
    cin>>key;
    
    
   cout<< binS(arr,0,4,key);
    

    return 0;
}
/

#include <iostream>

using namespace std;
int binS(int *arr,int e, int key){
    int s = 0;
     int mid =  s + (e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            return mid;
        } 
        if(key > arr[mid]){
            s = mid +1;
        }
        else{
            e = mid -1;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}

int main()
{
    int arr[5]= {2,3,5,7,8};
    int key;
    cout<<"enter the key to be searched";
    cin>>key;
    
    
   cout<< binS(arr,4,key);
    

    return 0;
}   */

