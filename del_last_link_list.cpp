#include <bits/stdc++.h>

using namespace std;
struct node{
    int data;
    node*link;
}*temp,*head,*e,*last,*trav;

int main(){
head = NULL;

    int m;
    cin>>m;
    while(m) {
    int x;
    cin>>x;
    temp = new node; //created temp node and get 1st value;
   temp->data= x;
    temp->link = NULL;
    if(head == NULL){
        head = last = temp;
    } else {
        last -> link = temp;
        last = temp;
    }m--;
    }    
    temp = head;
    while (temp-> link != NULL){
        trav = temp;//bec we dont have any prv ptr , we store add of 2nd lst elemnt in trav
        temp = temp -> link;
    } 
    trav-> link =NULL;
    free(temp);
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->link;
    }
    return 0;
}
