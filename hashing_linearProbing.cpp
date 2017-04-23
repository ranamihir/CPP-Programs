#include <iostream>
using namespace std;

template<class E, class K>
class HashTable {
	public:
		HashTable(int);
		~HashTable();
		bool Search(const K &, E &) const;
		bool Insert(const E &);
	private:
		int d;
		int hSearch(const K &) const;
		E *ht;
		bool *empty;
};


int main() {
	int d = 11;
	HashTable<int, int> *ht = new HashTable<int, int>(d);
	int a[] = {83, 14, 29, 70, 10, 55, 72, 45, 11, 67, 90, 24, 3, 72, 46};
	int length = sizeof(a)/sizeof(a[0]);
	
	for(int i = 0; i < length; i++) {
		cout << "Inserting " << a[i] << "... ";
		cout << (ht->Insert(a[i]) ? " Done.\n" : "");
			
	}

	for(int i = 0; i < length; i++) {
		int s = a[i];
		cout << "Searching for " << s << "..." << endl;
		cout << (ht->Search(s, s) ? "Found " : "Could not find " ) << s << "." << endl;
	}

	return 0;
}

template<class E, class K>
HashTable<E, K>::HashTable(int divisor=11) {
	d = divisor;
	ht =  new E[d];
	empty = new bool[d];
	for(int i = 0; i < d; i++)
		empty[i] = true;
}

template<class E, class K>
HashTable<E, K>::~HashTable() {
	delete []ht;
	delete []empty;
	
};

template<class E, class K>
int HashTable<E, K>::hSearch(const K &k) const {
	int i = k % d;
	int j = i;
	do {
		if(empty[j] || ht[j] == k)
			return j;
		j = (j+1) % d;
	} while(j != i);
	return j;
}

template<class E, class K>
bool HashTable<E, K>::Search(const K &k, E &e) const {
	int b = hSearch(k);
	if(empty[b] || ht[b] != k)
		return false;
	e = ht[b];
	return true;
}

template<class E, class K>
bool HashTable<E, K>::Insert(const E &e) {
	K k = e;
	int b = hSearch(k);
	if(empty[b]) {
		empty[b] = false;
		ht[b] = e;
		return true;
	}
	
	if(ht[b] == k) {
		cout << "Error: Duplicate input." << endl << "Cannot insert " << e << "." << endl;
		return false;
	}
	
	cout << "Error: No memory." << endl << "Cannot insert " << e << "." << endl;
	return false;
}
