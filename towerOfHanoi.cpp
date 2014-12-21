#include <iostream>
using namespace std;
class Stack
{
	public:
		//int n;
		int stack1[100];
		int data;
		int top ;
		int size ;
		Stack()
		{
			top = -1;
			size = 100;
		}
	public:
		void push(int k)
		{
			if(top==size-1)
			{
				cout<<"stack overflow"<<endl;
				return;
			}
			top++;
			stack1[top] = k;
			
		}
		int pop()
		{
			if(top==-1)
			return -1;
			int popped_elt = stack1[top];
			stack1[top] = NULL;
			top--;
			return popped_elt;
		}
		int peep(int i)
		{
			int peeped_elt;
			if(top-i+1<0)
			peeped_elt = -1;
			else
			peeped_elt = stack1[top-i+1];
			return peeped_elt;
		}
};
void hanoi(int discs,Stack *fromPole,Stack *toPole,Stack *aux)
{
	int d;
	if(discs>=1)
	{
		hanoi(discs-1,fromPole,aux,toPole);
		d = fromPole->pop();
		toPole->push(d);
		//cout<<""
		hanoi(discs-1,aux,toPole,fromPole);
	}
	
}
int main()
{
	int m;
	cout<<"enter m"<<endl;
	cin>>m;
	int disc;
	Stack *fromPole = new Stack();
	//fromPole. = 5;
	for(int i = 0;i<m;i++)
	{
		fromPole->push(i+1);
	}
	for(int i = 0;i<m;i++)
	{
		cout<<fromPole->peep(i+1)<<" ";
	}
	Stack *toPole = new Stack();
	Stack *aux = new Stack();
	disc = m;
	cout<<fromPole->top<<endl;
	
	/*for(int i = 0;i<3;i++)
	{
		cout<<fromPole.pop()<<" ";
	}*/
	hanoi(disc,fromPole,toPole,aux);
	for(int i = 0;i<m;i++)
	{
		cout<<toPole->peep(i+1)<<" ";
	}
	return 0;
}
