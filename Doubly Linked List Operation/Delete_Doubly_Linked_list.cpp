#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
     int val;
    Node*next;
    Node*prev;
  Node(int val){
    this->val=val;
    this->next=NULL;
    this->prev=NULL;

  }
};
//time complexity O(1)
void print_normal(Node *head){
    Node *tmp=head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
//time complexity O(N)
void print_reverse(Node *tail){
    Node *tmp =tail;
    while (tmp!=NULL)
    {
      cout<<tmp->val<<" ";
      tmp= tmp->prev;
    }
    cout<<endl;
}

//time complexity O(N)
int Size(Node *head){
    Node *tmp= head;
    int count = 0;
    while (tmp != NULL){
      count++;
      tmp= tmp->next;
    }
    return count;
}
//time complexity O(N)
void delete_at_position(Node *&head, int pos){
    Node *tmp=head;
    for(int i= 1;i<=pos-1;i++){
        tmp=tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next =tmp->next->next;
    tmp->next->prev = tmp;
   delete deleteNode ;
}
//time complexity O(1)
void delete_tail(Node *&head, Node *&tail){
  Node *deleteNode = tail;
  tail=tail->prev;
  delete deleteNode;
  if(tail == NULL){
    head = NULL;
    return;
  }
  tail->next =NULL;
}
//time complexity O(1)
void delete_head(Node *&head ,Node *&tail){
  Node *deleteNode= head;
  head =head->next;
  delete deleteNode;
  if(head == NULL){
    tail = NULL;
    return;
  }
  head->prev =NULL;
}
int main(){
Node *head =new Node(10);
Node *a =new Node(20);
Node *b =new Node(30);
Node *c =new Node(40);
Node *tail = c;
//conncetion
head->next =a;
a->prev=head;
a->next =b; 
b->prev =a;
b->next =c;
c->prev= b;
int pos;
cin>>pos;
if(pos>=Size(head)){
cout<<"Invalid"<<endl;
}
else if(pos == 0){
delete_head(head,tail);
}
else if(pos == Size(head)-1){
delete_tail(head,tail);
}
else{
delete_at_position(head,pos);
}

print_normal(head);
print_reverse(tail);

return 0;
}
