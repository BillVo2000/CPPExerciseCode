#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

 int main () {
 // rounding to the decimal number

 // the input of the number to floor command MUST BE FLOAT OR DOUBLE (***int is valid but not correct answer***)
    cout << "Method of rounding number: \n\nMethod 1: ";
     float x, y, z, t, e, f, f1, f2, c;
     y = floor (3.5674 * 1000 + 0.5) / 1000;  // rounding to the third decimal
     z = floor (3.543 * 100 +0.5) / 100;      // rounding to the second decimal
     t = floor (3.4275 * 100 + 0.5) / 100;    // rounding to the second decimal
     cout << "Rouding number to the third, second, second decimal: (3.5674; 3.543; 3.4275) are: \t" << y << "\t" << z << "\t" << t << endl;

    cout << "\nMethod 2, using ceil(), floor(), round(): \n";
     e = ceil (3.4674);
     cout << "ceil of 3.4674: " << e << endl;
      c = floor (3.5674);
     cout << "floor of 3.5674: " << c << endl;
     f = round (3.5674);
     cout << "round of 3.5674: " << f << endl;
     f1 = round (3.543);
     cout << "round of 3.543: " << f1 << endl;
      f2 = round (3.4235);
     cout << "round of 3.4235: " << f2 << endl;

     cout << "\nMethod 3, using fixed << setprecision(): \n";
     cout << "round number of 3.5674 using std::fixed<<std::setprecision() is: " << setprecision (2) << 3.5674 << endl << endl;

     cout << "When you can't show decimal number on the display screen, consider: \n-The type of variable. \n-Adding .00 following the number.";
     cout << "EX: P1 = hp1 * (1000.00 - d) / 1000.00;" << endl;
    return 0;
     }


