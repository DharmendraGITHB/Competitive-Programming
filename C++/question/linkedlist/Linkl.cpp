<include<bits/stdc++.h>

using namespace std;

class Node
{
  public:
    int data;
    Node *next;

};

void push(Node** head_ref, int new_data)
{
  Node * new_node = new Node();

  new_node-> next = (*head_ref);

  new_node->
