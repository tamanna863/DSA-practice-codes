//min produnct in arrray greedy 
#include <bits/stdc++.h>

using namespace std;
int minprod(int a[], int n ){
    if(n == 1){
        return a[0];
    }
   int  max_n= INT_MIN; //max_n = max negative  min p = minimum +ve
   int  min_p = INT_MAX;
   int cn= 0,cz= 0,prod = 1;//cn,cz = conters fr -ve and 0 
   for(int i = 0 ; i<n;i++){
       if(a[i]==0){
           cz++;
           continue;
       }
       if(a[i]<0){
           max_n=max(max_n,a[i]);
           cn++;
       }
       if(a[i]>0){
           min_p = min(min_p,a[i]);
           
       }
       prod=prod*a[i];
   }
   if((cz==n)||(cn==0&&cz>0)){
       return 0;
   }
   if((cn%2==0)&&cn!=0){
       prod=prod/max_n;
   } 
   
   return prod;
}

int main()
{
   int a[]= {-1,-2,1,2,3,4};
   int n = sizeof(a)/ sizeof(a[0]);
   cout<<minprod(a,n);
    return 0;
}
