#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	char s[] = " Дано вот такое предложение ";
	int pos_end, pos_begin = 0;

	pos_end = strlen(s) - 1;
	while (s[pos_begin] == ' ')pos_begin++;
	while (s[pos_end] == ' ')pos_end--;
	while (s[pos_end] != ' ')pos_end--;
	swap(s[pos_begin], s[++pos_end]);
	cout << s;

	system("pause");
	return 0;
}