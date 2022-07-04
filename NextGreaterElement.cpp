//NEXT GREATER ELEMENT in the question we deal with indeces we create a stack of indices and in nge is also having indiced only 

#include <bits/stdc++.h>
#include <stack>

using namespace std;
vector<int>NGE(vector<int>v){
    vector<int>nge(v.size());
    stack<int>st;
    for(int i = 0;i<v.size();i++){
        while(!st.empty()&& v[i]>v[st.top()]){//v(cureent element (1))>v{stak ka top (0)to nge veator ke 0th  index = the index of next greater ekement 
            nge[st.top()]  = i;  //of the  present in vector;
            st.pop();
            
        }st.push(i);}
        while(!st.empty()){
            nge[st.top()]= -1;
            st.pop();
        }
    return nge;
}

int main()
{
     int n;
     cin>>n;
     vector<int>v(n);
     for(int i = 0;i<n;i++){
         cin>>v[i];
     } 
     vector<int> nge = NGE(v);//nge[i]returns indix an v[nge[i}]return value ;
     for(int i = 0;i<n;i++){
         cout<<v[i]<<" "<<(nge[i]==-1? -1:v[nge[i]])<<endl;//if condition ki if nge[i]= -1; then print -1 else 
     }
     
    return 0;
}
