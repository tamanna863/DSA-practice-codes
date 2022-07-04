
#include <bits/stdc++.h>
using namespace std;

void inter(int a[], int b[],int n, int m)
{  
int i = 0, j = 0;
    while (i < n && j < m) {
        if(a[i]>b[j]){
            j++;
        }
        else if(b[j]>a[i]){
            i++;
        }
        else{
            cout<<a[i]<<" ";
            i++;
            j++;
        }
    }
}
   

void gunion(int a[], int b[],int n, int m){
    set<int> s;
    for(int i = 0; i<n;i++){
        s.insert(a[i]);
    }
    for(int j = 0; j<m;j++){
        s.insert(b[j]);
    }
    for(auto i :s){
        cout<<i<<" ";
    }
}
