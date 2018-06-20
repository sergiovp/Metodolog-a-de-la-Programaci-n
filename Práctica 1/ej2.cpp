#include <iostream>
#include <limits>
using namespace std;

int main() {
cout << numeric_limits<signed short int>::max() << endl;
cout << numeric_limits<signed long int>::max() << endl;
cout << numeric_limits<unsigned short int>::max() << endl;
cout << numeric_limits<unsigned int>::max() << endl;
cout << numeric_limits<unsigned long int>::max() << endl;
cout << numeric_limits<float>::max() << endl;
cout << numeric_limits<double>::max() << endl;
cout << numeric_limits<long double>::max() << endl;
}


