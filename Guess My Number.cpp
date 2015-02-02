/* A simple interactive game in which a player
* guesses the number
* assigned to the computer on which this program is
* executed.
* The number of the machine is an unsigned integer
* between 0 and 100 assigned randomly. The player
* should be able to guess the
* number in about 6-7 attempts with intelligent logic.
*
* (c) 2013 Mihir Rana, IIT Roorkee
* Version: 1.0 dated August 06, 2013
*/

#include <cstdlib>    //C Standard library
#include <iostream>   //Standard input-output streams
#include <cmath>      //Math library functions
#include <ctime>

using namespace std;

const int NGOPT = 7;
const int NGMAX = 100;

int main()
{
    srand (time(0));
    const int mynumber = rand()% 100;
    
    int ng = 0, guess = 0;
    
    cout << "\t Welcome to Digiworld! "
         << " I am a computer identified\n"
         << "\t by a unique number between 0 and 100. \n"
         << "\t Can you guess my NUMBER?\n"
         << "\t You can make at most 100 attempts. \n"
         << "\t At each attempt, I will tell you how "
         << " good your guess is\n"
         << "\t GOOD LUCK! "   <<endl;
         
    for(ng = 1; ng <= NGMAX; ng++){
        cout << "Attempt no: " << ng << " Enter your guess: ";
        cin >> guess;
        
        if (guess > mynumber)
            cout << "\t\t Your guess is larger than"
                 << " my number" << endl;
        else if (guess<mynumber)
             cout << "\t\t Your guess is smaller than"
                << " my number" << endl;
             else {
                   if (ng == 0)
                   cout << "\n\t  GREAT!!! You are a perfect"
                        << "   GAMBLER. \n" << endl;
                   else if ( ng <= NGOPT)
                        cout << "\n\t WELL DONE!!! You made INTELLIGENT"
                             << " attempts. \n" << endl;
                        else 
                        cout << "\n\t OK, You got me! But, THINK before"
                             << " you guess! \n" << endl;
        break;
      }
  }
  system("PAUSE") ;
  return 0;
}

       
