#include <iostream>
#include <iomanip>    // Needed to do formatted I/O
using namespace std;
int main() {
  // Floating point numbers
  double pi = 3.14159265;
  cout << fixed << setprecision(4); // fixed format with 4 decimal places
  cout << pi << endl;
  cout << "|" << setw(8) << pi << "|" << setw(10) << pi << "|" << endl;
  // setw() is not sticky, only apply to the next operation.
  cout << setfill('-');
  cout << "|" << setw(8) << pi << "|" << setw(10) << pi << "|" << endl;
  cout << scientific;  // in scientific format with exponent
  cout << pi << endl;
  // booleans
  bool done = false;
  cout << done << endl;  // print 0 (for false) or 1 (for true)
  cout << boolalpha;     // print true or false
  cout << done << endl;
  return 0;
}

// The <iomanip> header provides so-called I/O manipulators for formatting input and output:
// setw(int field-widht): set the field width for the next IO operation. setw() is non-sticky and must be issued prior to each IO operation. The field width is reset to the default after each operation (with just enough width to accommodate the field).
// setfill(char fill-char): set the filled character for padding to the field width.
// left|right|internal: set the alignment
// fixed/scientific (for floating-point numbers): use fixed-point notation (e.g, 12.34) or scientific notation (e.g., 1.23e+006).
// setprecision(int numDecimalDigits) (for floating-point numbers): specify the number of digits after the decimal point.
// boolalpha/noboolalpha (for bool): display bool values as alphabetic string (true/false) or 1/0.
