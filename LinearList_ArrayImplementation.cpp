#include <iostream>
using namespace std;

template<class T>
class LinearList {
	public:
		LinearList(int);
		~LinearList() { delete [] element; }
		bool Empty() const { return length == 0; }
		int Length() const { return length; }
		bool Find(int, T &) const;
		int Search(const T &) const;
		LinearList<T> & Push(const T &);
		LinearList<T> & Insert(int, const T &);
		LinearList<T> & Delete(int, T &);
		void Display() const;
	private:
		int length;
		int maxSize;
		T *element;
};

int main() {
	int temp = 0;
	LinearList<int> a(100);
	cout << "Length: " << a.Length() << endl;
	cout << "Empty: " << a.Empty() << endl;
	for(int i = 0; i < 10; i++)
		a.Push(i);
	cout << "Display(): ";
	a.Display();
	cout << "Length: " << a.Length() << endl;
	cout << "Empty: " << a.Empty() << endl;
	cout << "Insert(1, 20)" << endl;
	cout << "Display(): ";
	a.Insert(1, 20);
	a.Display();
	a.Find(2, temp);
	cout << "Find(2): " << temp << endl;
	cout << "Search(2): " << a.Search(2) << endl;
	cout << "Delete(3): ";
	a.Delete(3, temp);
	cout << temp << endl;
	a.Display();
	cout << "Delete(1): ";
	a.Delete(1, temp);
	cout << temp << endl;
	a.Display();
	
	return 0;
}

template<class T> LinearList<T>::LinearList(int maxListSize) {
	maxSize = maxListSize;
	element = new T[maxSize];
	length = 0;
}

template<class T> bool LinearList<T>::Find(int k, T &x) const {
	if(k < 1 || k > length)
		return false;
	x = element[k-1];
	return true;
}

template<class T> int LinearList<T>::Search(const T &x) const {
	for(int i = 0; i < length; i++)
		if(element[i] == x)
			return ++i;
	return -1;
}

template<class T> LinearList<T> & LinearList<T>::Push(const T &x) {
	if(length == maxSize) {
		cout << "Error: Out of Memory" << endl;
		exit(2);
	}
	length++;
	element[length-1] = x;
	return *this;
}

template<class T> LinearList<T>& LinearList<T>::Insert(int k, const T &x) {
	if(k < 1 || k > length) {
		cout << "Error: Out of Bounds" << endl;
		exit(1);
	}
	if(length == maxSize) {
		cout << "Error: Out of Memory" << endl;
		exit(2);
	}
	for(int i = length-1; i >= k; i--)
		element[i+1] = element[i];
	element[k] = x;
	length++;
	return *this;
}

template<class T> LinearList<T>& LinearList<T>::Delete(int k, T &x) {
	if(Find(k, x)) {
		for(int i = k; i < length; i++)
			element[i-1] = element[i];
		length--;
		return *this;
	}
	else {
		cout << "Error: Out of Bounds" << endl;
		exit(1);
	}
}

template<class T> void LinearList<T>::Display() const {
	for(int i = 0; i < length; i++)
		cout << element[i] << " ";
	cout << endl;
}
