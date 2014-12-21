#include <iostream>
using namespace std;
template <class T>
class ChainNode
{
	friend Chain<T>;
	private:
		ChainNode<T> *next;
		T data;
	public:
		ChainNode(ChainNode<T> *next,T data)
		{
			this->next = next;
			this->data = data;
		}
		
		
};
template <class T>
class Chain
{
	public:
		ChainNode<T> *first,*last;
	public:
		Chain()
		{
			first = last = NULL;
		}
	public:
		void insert(T data,int k);
		bool isEmpty();
		void display();
			
};
template <class T>
bool Chain<T>::isEmpty()
{
	return first==NULL;
}
template <class T>
void Chain<T>::insert(T data,int k)
{
	if(isEmpty())
	{
		first = last = new ChainNode<T>(NULL,data);
	}
	else
	{
		ChainNode<T> *temp = first;
		for(int i = 0;i<k;i++)
		{
			temp = temp->next;
		}
		temp->next = new ChainNode<T>(temp->next,data);
		delete temp;
	}
}
template <class T>
void Chain<T>::display()
{
	ChainNode<T> *temp = first;
}
int main()
{
	Chain<int> *ptr = new Chain<int>();
	int k = -2;
	while(k!=-1)
	{
		cout<<"enter 1 to insert,2 to display,-1 to exit"<<endl;
		cin>>k;
		if(k==1)
		{
			cout<<"enetr the data to enter"<<endl;
			int data;
			cin>>data;
			cout<<"enter the position to insert"<<endl;
			int k;
			cin>>k;
			ptr->insert(data,k);
		}
		if(k==2)
		ptr->display();
		if(k==-1)
		break;
	}
}

