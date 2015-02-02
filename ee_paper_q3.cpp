#include <iostream>

using namespace std;

class array {
	public:
		void input();
		void max_min();
		void display();
		void del();
		
		private:
			int *arr;
			int size;
			int *large;
			int loc_large;
			int *small;
			int loc_small;
};

int main()
{
	array A;
	
	A.input();
	A.max_min();
	A.display();
	A.del();
	
	return 0;
}

void array::input()
{
	cout << "Enter the size of array: " << endl;
	cin >> size;
	
	arr = new int [size];
	
	cout << "Enter any " << size << " integers: " << endl;
	for(int i = 0; i < size; i++)
		cin >> arr[i];
}

void array::max_min()
{
	int max = arr[0];
	int min = arr[0];
	
	for(int i = 0; i < size; i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
			loc_large = i;
		}
	}
	
	for(int i = 0; i < size; i++)
	{
		if(arr[i] < min)
		{
			min = arr[i];
			loc_small = i;
		}
	}
	
	*large = max;
	*small = min;
}

void array::display()
{
	cout << "The largest element is: " << (*large) << endl;
	cout << "And its location is: " << (loc_large + 1) << endl;
	
	cout << "The smallest element is: " << (*small) << endl;
	cout << "And its location is: " << (loc_small + 1) << endl;
}

void array::del()
{
	delete [] arr;
}
