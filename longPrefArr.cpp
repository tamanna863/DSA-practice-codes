//longest prefix good array p[i] +a[i]*y = X;
#include <bits/stdc++.h>
using namespace std;
void findps(int arr[],int n,int  ps[]){
    ps[0]=arr[0];
    for(int i = 1; i<n;i++){
        ps[i]=ps[i-1]+arr[i];
    }
}

int main()
{ int t;
  cin>>t;
  
    while(t!=0){
    int arr[]={2,1,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ps[n];
    findps(arr,n,ps);
    int X,Y;
    cin>>X>>Y;
    int lge[n];
    for(int i = 0; i<n; i++){
        lge[i]= ps[i]+Y*arr[i]; 
        
    }
    bool flag = false;
    for(int i = 1;i<n;i++){
    if(lge[i]==X){
            cout<<i+1<<" ";
            flag = true;
        }
       
        
    }
    if (flag == false){
        cout<<'0';
    }
        t--;
    }

    return 0;
}

