#include <iostream>
using namespace std;

int main() {
    bool a;
    int b;
    short int c;
    long int d;
    long long int e;
    float f;
    double g;
    char h;
    wchar_t i;
    int j [10];
    char k [10];

    cout << "Size of bool: " << sizeof (a) << endl;
    cout << "Size of int: " << sizeof (b) << endl;
    cout << "Size of short int: " << sizeof (c) << endl;
    cout << "Size of long int: " << sizeof (d) << endl;
    cout << "Size of long long int: " << sizeof (e) << endl;
    cout << "Size of float: " << sizeof (f) << endl;
    cout << "Size of double: " << sizeof (g) << endl;
    cout << "Size of char: " << sizeof (h) << endl;
    cout << "Size of wchar_t: " << sizeof (i) << endl;
    cout << "Size of int j [10]: " << sizeof (j) << endl;
    cout << "Size of char k [10]: " << sizeof (k) << endl;

    return 0;
}
