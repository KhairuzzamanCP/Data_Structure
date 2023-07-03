#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
  int val;
  Node *next;
  Node(int val)
  {
    this->val = val;
    this->next = NULL;
  }
};
void print_linked_list(Node *head)
{
  cout << "your linked list: ";
  Node *tmp = head;
  while (tmp != NULL)
  {

    cout << tmp->val << " ";
    tmp = tmp->next;
  }
  cout << endl
       << endl;
}

void insert_tail(Node *&head, int v)
{
  Node *newNode = new Node(v);
  if (head == NULL)
  {
    head = newNode;
    return;
  }
  Node *tmp = head;
  while (tmp->next != NULL)
  {
    tmp = tmp->next;
  }
  tmp->next = newNode;
}
void insert_at_positon(Node *head, int pos, int v)
{
  Node *newNode = new Node(v);
  Node *tmp = head;
  for (int i = 0; i < pos - 1; i++)
  {
    tmp = tmp->next;
  }
  newNode->next = tmp->next;
  tmp->next = newNode;
  cout << endl
       << endl
       << "inserted at position: " << pos << endl
       << endl;
}
int main()
{
  Node *head = NULL;
  while (true)
  {
    cout << "option 1: Insert at Tail" << endl;
    cout << "option 2: print linked list" << endl;
    cout << "option 3: Enter position" << endl;
    cout << "option 4: Terminitae" << endl;
    int op;
    cin >> op;
    if (op == 1)
    {
      cout << "please Enter a value: ";
      int v;
      cin >> v;
      insert_tail(head, v);
    }
    else if (op == 2)
    {
      print_linked_list(head);
    }
    else if (op == 3)
    {
      int pos, v;
      cout << "Enter your positon: ";
      cin >> pos;
      cout << "Enter your value: ";
      cin >> v;
      insert_at_positon(head, pos, v);
    }
    else if (op == 4)
    {
      break;
    }
  }
  return 0;
}
