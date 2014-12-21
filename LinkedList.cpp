#include<iostream>
using namespace std;
class Node
{
	public:
	 Node *next;
	 int data;
	 Node(Node *n,int data)
	 {
	 	this->data = data;
	 	this->next = n;
	 	//first = last = NULL;
	 }
	  int getData()
	 {
	 	return data;
	 }
	  Node* getNext()
	 {
	 	return next;
	 }
	  void setdata(int data)
	 {
	 	this->data = data;
	 }
};
class NodeList
{
	public:
		Node *first;
		Node *last;
		int data;
		NodeList()
		{
			//data = n;
			first = last = NULL;
		}
		public:
		bool isEmpty()
		{
			return first ==NULL;
		}
	    void insertAtStart(int n)
		{
			if(isEmpty())
			{
				first = last = new Node(NULL,n);
			}
			else
			{
				first = new Node(first,n);
			}
		}
		void insertAtEnd(int n)
		{
			if(isEmpty())
			{
				first = last = new Node(NULL,n);
			}
			else
			{
				Node *temp = new Node(NULL,n);
				last->next = temp;
				last = temp;
			}
		}
		void display()
		{
			if(first==NULL)
			cout<<"list is empty"<<endl;
			else
			{
			Node *temp = first;
			do
			{
				cout<<temp->getData()<<" ";
				temp = temp->next;
			}while(temp);
			}
		}
};
int main()
{
	int k = 0;
	int info;
	NodeList *ptr = new NodeList();
	while(k!=-1)
	{
		cout<<"enter 0 to insert at start,1 to insert at end,2 to print the list else -1 to exit"<<endl;
		cin>>k;
		if(k==-1)
		break;
		if(k==0)
		{
			cout<<"enter the data to add"<<endl;
			cin>>info;
			ptr->insertAtStart(info);
		}
		if(k==1)
		{
			cout<<"enter the data to add"<<endl;
			cin>>info;
			ptr->insertAtEnd(info);
		}
		if(k==2)
		{
			ptr->display();
		}
		
	}
	return 0;
}

