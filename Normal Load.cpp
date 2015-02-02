#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
	double h, t, m;
	int a, b;
	cout << "Enter CG height: (m)" << endl;
	cin >> h;
	cout << "Enter track width: (m)" << endl;
	cin >> t;
	cout << "Enter mass of car: (kg)" << endl;
	cin >> m;
	double w = m*9.8;
	cout << "If weight distribution is in the form of a:b (front:rear),\nenter a and b separated by a space: " << endl;
	cin >> a >> b;
	// Assumption: A_y = (10 kmph)*g*(5/18)/(1 * 9.8) = 0.28*g
	double A_y = 0.28;
	double W_l = w/2 + w*(A_y)*h/t, W_r = w/2 - w*(A_y)*h/t;
	double W_l_n = a*(W_l)/(a+b), W_r_n = a*(W_r)/(a+b);
	double W_l_lbs = W_l_n/4.44, W_r_lbs = W_r_n/4.44;
	double l = ceil(W_l_lbs), r = ceil(W_r_lbs);
	cout << "Normal load on one of the front tyres: " <<  ceil(W_l_n) << " N (" << l << "lbs)" << endl;
	cout << "Normal load on the other front tyre: " << ceil(W_r_n) << " N (" << r << " lbs)" << endl;
	ofstream myfile;
  	myfile.open("normal_loads.txt");
	myfile << l << "\n" << r;
  	myfile.close();
	system("PAUSE");
	return 0;
}
