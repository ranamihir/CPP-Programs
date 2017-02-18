#include <iostream>
using namespace std;

template<class T> class ChainNode;
template<class T> class Chain;

template<class T>
class ChainNode {
	friend Chain<T>;
	private:
		T data;
		ChainNode<T> *link;
};

template<class T>
class Chain {
	public:
		Chain() { first = 0; }
		~Chain();
		bool Empty() const { return first == 0; }
		int Length() const;
		bool Find(int, T &) const;
		int Search(const T &) const;
		Chain<T> & Insert(int, const T &);
		Chain<T> & Delete(int, T &);
		void Display() const;
	private:
		ChainNode<T> *first;
};

int main() {
	int temp = 0;
	Chain<int> a;
	cout << "Length: " << a.Length() << endl;
	cout << "Empty: " << a.Empty() << endl;
	for(int i = 0; i < 10; i++)
		a.Insert(i, i);
	cout << "Display(): ";
	a.Display();
	cout << "Insert(1, 20)" << endl;
	cout << "Display(): ";
	a.Insert(1, 20);
	a.Display();
	a.Find(2, temp);
	cout << "Find(2): " << temp << endl;
	cout << "Search(2): " << a.Search(2) << endl;
	cout << "Delete(2): ";
	a.Delete(2, temp);
	a.Display();
	
	return 0;
}

template<class T> Chain<T>::~Chain() {
	ChainNode<T> *next;
	while (first) {
		next = first->link;
		delete first;
		first = next;
	}
}

template<class T> int Chain<T>::Length() const {
	ChainNode<T> *current = first;
	int length = 0;
	while(current) {
		length++;
		current = current->link;
	}
	return length;
}

template<class T> bool Chain<T>::Find(int k, T &x) const {
	if(k < 1 || k > this->Length())
		return false;
	ChainNode<T> *current = first;
	for(int i = 0; i < k-1; i++)
		current = current->link;
	x = current->data;
	return true;
}

template<class T> int Chain<T>::Search(const T &x) const {
	ChainNode<T> *current = first;
	int i = 1;
	while(current != NULL && current->data != x) {
		current = current->link;
		i++;
	}
	if(current)
		return i;
	else
		return -1;
}

template<class T> Chain<T>& Chain<T>::Insert(int k, const T &x) {
	if (k < 0) {
		cout << "Error: Out of Bounds" << endl;
		exit(1);
	}
	ChainNode<T> *p = first;
	for(int index = 1; index < k && p; index++)
		p = p->link;
	if (k > 0 && !p) {
		cout << "Error: Out of Bounds" << endl;
		exit(1);
	}
	
	ChainNode<T> *y = new ChainNode<T>;
	y->data = x;
	
	if(k) {
		y->link = p->link;
		p->link = y;
	}
	else if (first == 0) {
		first = y;
		first->link = NULL;
	}
	else {
		y->link = first;
		first = y;
	}
	return *this;
}

template<class T> Chain<T>& Chain<T>::Delete(int k, T &x) {
	ChainNode<T> *p = first;
	ChainNode<T> *q = p->link;
	if(k < 1) {
		cout << "Error: Out of Bounds" << endl;
		exit(1);
	}
	else if(k > 1) {
		for (int i = 1; i < k-1 && q; i++) {
			p = p->link;
			q = p->link;
		}
		if(q) {
			p->link = q->link;
			delete q;
		}
		else {
			cout << "Error: Out of Bounds" << endl;
			exit(1);
		}
	}
	else {
		first = first->link;
		delete p;
		delete q;
	}
	return *this;
}

template<class T> void Chain<T>::Display() const {
	ChainNode<T> *current = first;
	while(current) {
		cout << current->data << " ";
		current = current->link;
	}
	cout << endl;
}
