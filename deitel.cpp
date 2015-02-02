#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class PhoneNumber
{
	friend ostream &operator<<( ostream &, const PhoneNumber & );
friend istream &operator>>( istream &, PhoneNumber & );
	private:
string areaCode; // 3-digit area code
string exchange; // 3-digit exchange
string line; // 4-digit line
 };	


// overloaded stream insertion operator; cannot be
// a member function if we would like to invoke it with
// cout << somePhoneNumber;
ostream &operator<<( ostream &output, const PhoneNumber &number )
{
output << "(" << number.areaCode << ") "
<< number.exchange << "-" << number.line;
return output; // enables cout << a << b << c;
} // end function operator<<
// overloaded stream extraction operator; cannot be
// a member function if we would like to invoke it with
// cin >> somePhoneNumber;
istream &operator>>( istream &input, PhoneNumber &number )
{
input.ignore(); // skip (
input >> setw( 3 ) >> number.areaCode; // input area code
input.ignore( 2 ); // skip ) and space
input >> setw( 3 ) >> number.exchange; // input exchange
input.ignore(); // skip dash (-)
input >> setw( 4 ) >> number.line; // input line
return input; // enables cin >> a >> b >> c;
} // end function operator>>


int main()
{
PhoneNumber phone; // create object phone

 cout << "Enter phone number in the form (123) 456-7890:" << endl;



cin >> phone;

 cout << "The phone number entered was: ";



cout << phone << endl;
} // end main
