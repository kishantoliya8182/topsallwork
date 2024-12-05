
#include <iostream>

using namespace std;

class cal {
	int a, b, add, sub, mul;


public:
	void get();
	void sum();
	void subt();
	void mult();

};
inline void cal ::get()
{
	cout << "Enter first value:";
	cin >> a;
	cout << "Enter second value:";
	cin >> b;
}

inline void cal ::sum()
{
	add = a + b;
	cout << "Addition of two numbers: " << a + b << "\n";
}

inline void cal ::subt()
{
	sub = a - b;
	cout << "Difference of two numbers: " << a - b << "\n";
}

inline void cal ::mult()
{
	mul = a * b;
	cout << "Product of two numbers: " << a * b << "\n";
}


int main()
{
	cout << "Program using inline function\n";
	cal s;
	s.get();
	s.sum();
	s.subt();
	s.mult();

	return 0;
}

