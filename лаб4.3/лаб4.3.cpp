#include <iostream>
#include <string>
#include <cmath>
 
using namespace std;
 
int main() 
{
	setlocale(LC_ALL, "Rus");
	string a;
	string c;
	string z;
	int mass[20] = { '0','1','2','3','4','5','6','7','8','9' };
	cout << "Введите строку";
	cin >> a;
	for (int i = 0; i < a.length(); i++) {
		if (a[i]==mass[20]) {
			c = c + a[i];
		}
	}
	for (int i = 0; i < c.length(); i++) {
		for (int j = 0; i < c.length(); j++) {
			if (c[i] < c[j]) {
				z[i] = c[i]; 
				c[i] = c[j]; 
				c[j] = z[i];
			}
		}
		cout << c;
	}

}
