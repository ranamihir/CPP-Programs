#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

#define pi 3.141592653589793

using namespace std;

double calculateCaster(double AA, double N, double Fy, double w, double r, double Tf, double a, double P, double x) {
	/* Convert to FPS units */
	N *= 2.2046;
	Tf *= 2.2046/9.8;

	/* Calculate constants */
	double i = (N * Fy) / ( pi * P * w * Tf * sin((a * pi) / 180) );
	double j = (Fy * r * x) / ( Tf * sin((a * pi) / 180) );

	double A = (i * i) + (j * j);

	double B = (-2.0 * AA * N * Fy) / (pi * P * w * Tf * sin((a * pi) / 180));

	double C = (AA * AA) - (j * j);

	return (acos( ((-1.0 * B) + sqrt((B * B) - (4.0 * A * C))) / (2 * A) )) * 180/pi;
}

double calculateArmLength(double K, double N, double Fy, double w, double r, double Tf, double a, double P, double x) {
	/* Convert to FPS units */
	N *= 2.2046;
	Tf *= 2.2046/9.8;
	K *= pi/180;

	/* Calculate constants */
	double i = (N * Fy) / ( pi * P * w * Tf * sin((a * pi) / 180) );
	double j = (Fy * r * x) / ( Tf * sin((a * pi) / 180) );

	return (i * cos(K)) + (j * sin(K));
}

void tabAAK() {
}

void tabKAA() {
}

int main() {
	ifstream file;
	file.open("caster_inputs.txt");
	
	double N, Fy, w, r, Tf, a, P, x=0.98;
	char resp = 'y';
	
	file >> w;
	file >> r;
	file >> Tf;
	file >> P;
	file >> a;
	
	file.close();
	
	do {
		cout << "Enter -";
		cout << "\n1. Normal Load (Kg): ";
		cin >> N;
		cout << "2. Lateral Force (Lbs): ";
		cin >> Fy;
		cout << "3. Width of tire (Inches): " << w;
//		cin >> w;
		cout << "\n4. Radius of tire (Inches, NOT Rolling): " << r;
//		cin >> r;
		cout << "\n5. Tie Rod Force (Newtons): " << Tf;
//		cin >> Tf;
		cout << "\n6. Ackerman Angle (Degrees): " << a;
//		cin >> a;
		cout << "\n7. Tire Pressure (psi): " << P;
//		cin >> P;
	
		int option = 1;
		cout << "\nChoose option - ";
		cout << "\n\t1. Enter AA (Arm Length), Get K (Caster)";
		cout << "\n\t2. Enter K, Get AA";
		cout << "\n\t3. Tabulate AA vs K";
		cout << "\n\t4. Tabulate K vs AA\n\n>>> ";
		cin >> option;
	
		double AAmin, AAmax, Kmin, Kmax;
		switch(option) {
			case 1: cout << "\nEnter AA (Inches): ";
					cin >> AAmin;
					cout << calculateCaster(AAmin, N, Fy, w, r, Tf, a, P, x) << " degrees";
					break;
			case 2: cout << "\nEnter K (Degrees): ";
					cin >> Kmin;
					cout << calculateArmLength(Kmin, N, Fy, w, r, Tf, a, P, x) << " inches";
					break;
			case 3: cout << "\nEnter MIN limit of AA: ";
					cin >> AAmin;
					cout << "\nEnter MAX limit of AA: ";
					cin >> AAmax;
					tabAAK();
					break;
			case 4: cout << "\nEnter MIN limit of K: ";
					cin >> Kmin;
					cout << "\nEnter MAX limit of K: ";
					cin >> Kmax;
					tabKAA();
					break;
		}
	
		cout << "\n\nAgain?\n>>> ";
		cin >> resp;
		
		cout << endl;
	} while(resp == 'y' || resp == 'Y');
	
	return 0;
}
