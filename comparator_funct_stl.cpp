/*#include <bits/stdc++.h>
int comp(int a,int b){
    
    return a>b;
}

using namespace std;

int main()
{int n; cin>>n;
  vector<int>v(n);
  for(int i = 0;i<n;i++){
       cin>>v[i];
  }  sort(v.begin(),v.end(),comp); //by default it is in asc order using comp we can do sorting in desc order
  for (int i = 0;i<n;i++){
      cout<<v[i];
  }
    return 0;
}*/


//comparator function in special case
#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> a,pair<int,int> b){
    if(a.first !=b.first){
        return a.first<b.first;//sort it in ascending order 
        
    }else return a.second>b.second; // if  1 sr value of pairr equal , sort in descending order
    
    
}
int main()
{int n; cin>>n;
  vector<pair<int,int>>v(n);
  for(int i = 0;i<n;i++){
       cin>>v[i].first>>v[i].second;
  }  sort(v.begin(),v.end(),comp);
  for (int i = 0;i<n;i++){
      cout<<v[i].first<<" "<<v[i].second<<endl;
  }
    return 0;
}
//sort inbuilt fuction in STL comprises of 3 sorting techniques namely insertion sort +quichsort+ heap sort 
//collectively known as introsort 







