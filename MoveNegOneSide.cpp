#include <bits/stdc++.h>

using namespace std;
void move (int v[], int n){
    int j = 0;
    for(int i = 0; i<n; i++){
        if(v[i]<0){
            if(i!=j){
                swap(v[i],v[j]);}
                j++;
            
        }
    }
    
}

int main()
{
int v[] = {-1,4,5,2,1,4,-2,-3};
int n = sizeof(v)/sizeof(v[0]);
    
    move(v,n);
    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}
