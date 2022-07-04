
#include <bits/stdc++.h>
using namespace std;
void rev(int *p, int s, int e,int n){
    for(int i = 0; i<n/2;i++){
        swap(p[i],p[e--]);
    }
}

int main()
{  int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    } int s= 0;
    int e = n-1;
    rev(arr,s,e,n);
    for(int i = 0;i<n;i++){
        cout<<arr[i];
    }

    return 0;
}
