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
         cout<<endl<<"inserted at head"<<endl<<endl;

         return;
    }
  
   Node *tmp = head;
   while (tmp->next != NULL)
   {
   tmp= tmp->next;
   }
    tmp->next= newNode;
    cout<<endl<<"inserted at tail"<<endl<<endl;
 cout<<endl<<"inserted at tail"<<endl<<endl;

}
void print_linked_list(Node *head){
    cout<<endl;
    cout<<" your linked list ";
    Node *tmp = head;
    while (tmp !=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
   cout<<endl<<endl;
   
}
void insert_at_position(Node *head,int pos,int v){
    Node *newNode = new Node(v);
    Node *tmp = head;
    for(int i =1; i<=pos-1;i++){
        tmp= tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    cout<<endl<<endl<<"insert at position: "<<pos<<endl<<endl;
}
int main(){
   Node *head =NULL; 
while(true){
    cout<< "Option 1: Insert at Tail "<<endl;
    cout<< "Option 2: print linked list "<<endl;
    cout<< "Option 3: Insert at any Position"<<endl;
    cout<< "Option 4: terminate "<<endl;
 int op;
 cin>>op;
 if(op == 1){
    cout<<" please inter value: ";
    int v;
    cin>>v;
insert_at_tail(head,v);
 }

  if(op == 2){
 print_linked_list(head);
  }
   if(op == 3){
  int pos,v;
  cout<<"Enter position: ";
  cin>>pos;
    cout<<"Enter value: ";
  cin>>v;
  insert_at_position(head,pos,v);
   }
   if(op == 4){
 break;
   }
}
return 0;
}

