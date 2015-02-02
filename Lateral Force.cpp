#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
double lateralForce(double, double, double, double, double, double);
int main(){
	ifstream myfile1("normal_loads.txt");
	long i = 0;
	int *a = new int[2], *b = new int[8];
	while (! myfile1.eof()){
  		myfile1 >> a[i];
  		i++;
	}
  	myfile1.close();
	double Fz1 = a[0], Fz2 = a[1]+2, slip1 = 3.8, slip2 = 6.5;
	/* Case 1:
	Gravel, 10 psi, low camber
	 */
		// Fz = 210 lbs
		cout << "10 psi, low camber:" << endl;
		b[0] = ceil(lateralForce(Fz1, -0.58, 6.627, -.58, 6.727, slip1));
		cout << "\t210 lbs: " << b[0] << " lbs" << endl;
		// Fz = 140 lbs
		b[1] = ceil(lateralForce(Fz2, -0.58, 6.727, -.58, 6.727, slip2));
		cout << "\t140 lbs: " << b[1] << " lbs" << endl;
		cout << endl;

	/* Case 2:
	Gravel, 10 psi, high camber
	 */
	 	// Fz = 210 lbs
	 	cout << "10 psi, high camber:" << endl;
	 	b[2] = ceil(lateralForce(Fz1, -0.627, 10.812, -.634, 10.967, slip1));
	 	cout << "\t210 lbs: " << b[2] << " lbs" << endl;
	 	// Fz = 140 lbs
	 	b[3] = ceil(lateralForce(Fz2, -0.627, 10.812, -.634, 10.967, slip2));
	 	cout << "\t140 lbs: " << b[3] << " lbs" << endl;
	 	cout << endl;

	/* Case 3:
	Gravel, 5 psi, low camber
	 */
	 	// Fz = 210 lbs
	 	cout << "5 psi, low camber:" << endl;
	 	b[4] = ceil(lateralForce(Fz1, -0.583, 8.366, -.595, 8.68, slip1));
	 	cout << "\t210 lbs: " << b[4] << " lbs" << endl;
	 	// Fz = 140 lbs
	 	b[5] = ceil(lateralForce(Fz2, -0.583, 8.366, -.595, 8.68, slip2));
	 	cout << "\t140 lbs: " << b[5] << " lbs" << endl;
	 	cout << endl;

	/* Case 4:
	Gravel, 5 psi, high camber
	 */
	 	// Fz = 210 lbs
	 	cout << "5 psi, high camber:" << endl;
	 	b[6] = ceil(lateralForce(Fz1, -0.469, 4.333, -.473, 4.334, slip1));
	 	cout << "\t210 lbs: " << b[6] << " lbs" << endl;
	 	// Fz = 140 lbs
	 	b[7] = ceil(lateralForce(Fz2, -0.469, 4.333, -.473, 4.334, slip2));
	 	cout << "\t140 lbs: " << b[7] << " lbs" << endl;
	 	cout << endl;
	ofstream myfile2;
  	myfile2.open("lateral_loads.txt");
	for(int i = 0; i < 8; i++){
		myfile2 << b[i] << "\n";
		if(i & 1)
			myfile2 << "\n";
	}
  	myfile2.close();
	delete [] a, b;
	system("PAUSE");
	return 0;
}
double lateralForce(double Fz, double m1, double C1, double m2, double C2, double slip){
	double B = C1*pow(Fz, m1);
	double A = C2*pow(Fz, m2);
	double Fy = (Fz)*A*(1-exp(-slip*B));
	return Fy;
}
