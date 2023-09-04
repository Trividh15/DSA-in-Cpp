//Code to insert the nodes at the end of the list

#include<iostream>
using namespace std;

struct node
{
  int data;
  struct node *link;
};

void print_list(struct node *head)
{
  struct node *temp;
  temp = head;
  while(temp != NULL)
  {
    cout<<temp->data<<"->";
    temp = temp->link;
  }
  cout<<endl;
}


int main()
{
  int n;
 cout<<"Enter the number of nodes you want to add to the list: \n";
 cin>>n;

 struct node *head = new node();
 cout<<"Enter the data for the head element: \n";
 cin>>head->data;
 head->link = NULL;
 struct node *p = new node();
 p = head;

 for(int i = 1; i<n; i++)
 {
  struct node *ptr = new node(); 
  cout<<"Enter the data for node no.";
  cin>>ptr->data;
  p->link = ptr;
  ptr->link = NULL;

  p = p->link;
  ptr = NULL;

 }

 print_list(head);
 return 0;
}