#include <bits/stdc++.h>

using namespace std;
struct node{
    int  data;
    node* link;
    node * prev;
}*head,*temp,*last,*e;

int main(){
head = NULL;
int n ;
cin>>n;
while(n){
    temp = new node;
    int x;
    cin>>x;
    temp->data = x;
    temp ->link = NULL;
    temp -> prev = NULL;
    if ( head == NULL){
        head = last = temp;
    }
    else{
        temp->prev = last;
        last -> link = temp;
           last = temp;
        
    }n--;
    
    
}
int p;
cout<<"Enter the place wgere u wanna enter  node";
cin>>p;
temp = head;
int i = 1;
while (i<p-1){
    temp = temp -> link;
    i++;
}
/*for(int i= 1; i<p-1;i++){
    temp = temp-> link;
}*/


e = new node;
e->link=NULL;
e->prev=NULL;

int y;
cin>>y; 
e->data= y;
e->link=temp->link;
e->prev=temp;
temp-> link -> prev = e;
temp ->link = e;

temp = head; 
while(temp !=NULL){
    cout<<temp->data<<" ";
    temp = temp -> link;
}
    

    return 0;
}
