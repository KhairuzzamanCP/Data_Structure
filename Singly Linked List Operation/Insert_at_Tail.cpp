#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
     int val;
    Node *next;
  Node(int val){
   this->val=val;
    this->next=NULL;

  }
};

void insert_at_tail(Node *&head ,int v){
    Node *newNode = new Node(v);
    if(head ==NULL){
        head = newNode;
         return;
    }
  
   Node *tmp = head;
   while (tmp->next != NULL)
   {
   tmp= tmp->next;
   }
    tmp->next= newNode;
}
void print_linked_list(Node *head){
    cout<<" your linked list ";
    Node *tmp = head;
    while (tmp !=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
   cout<<endl;
}
int main(){
   Node *head =NULL; 
while(true){
    cout<< "Option 1: Insert at Tail "<<endl;
    cout<< "Option 2: print linked list "<<endl;
    cout<< "Option 3: terminate "<<endl;
 int op;
 cin>>op;
 if(op == 1){
    cout<<" please inter value ";
    int v;
    cin>>v;
insert_at_tail(head,v);
 }

  if(op == 2){
 print_linked_list(head);
  }
   if(op == 3){
    break;
   }
}
return 0;
}
