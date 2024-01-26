#include <iostream>
using namespace std;

int main(){

	int a = 5;
	char b = 'A';
	char &c = b;
	int *x = &a;
	int **z = &x;
	char *y = &b;

	cout << a << " " << b << " " << c << " " << x << " " << z << " " << (int*)y << endl;
	cout << &a << " " << (int*)&b << " " << (int*)&c << " " << &x << " " << &z << " " << (int*)&y << endl;

	c = 'F';

	cout << a << " " << b << " " << c << " " << x << " " << z << " " << (int*)y << endl;

	*y = 'W';

	cout << a << " " << b << " " << c << " " << x << " " << z << " " << (int*)y << endl;

	*x = 6;

	cout << a << " " << b << " " << c << " " << x << " " << z << " " << (int*)y << endl;

	**z = 7;

	cout << a << " " << b << " " << c << " " << x << " " << z << " " << (int*)y << endl;
	
	return 0;
}
