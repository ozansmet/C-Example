#include <iostream>
using namespace std;
int main() {
	double a1, a2, a3;
	cout << "enter three numbers :";
	cin >> a1 >> a2 >> a3;
	if(a1 >= a2 && a1 >= a3)
	cout << "Ln \n"  << a1;
	if(a2 >= a3 && a2 >= a1)
	cout << "Ln \n"  << a2;
	if(a3 >= a2 && a3 >= a1)
	cout << "Ln \n"  << a3;
	return 0; 
	
}
