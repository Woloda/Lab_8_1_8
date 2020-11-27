#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

string InsertBefore(string& string, const char* para, const char* zamina);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string lit_r = "SQsdgdgQShhQQQSdhd";
	cout << "Сфомований літерний рядок: " << endl << endl << lit_r << endl << endl;
	char para[] = "SQ";
	char para1[] = "QS";
	char zamina[] = "***";

	InsertBefore(lit_r, para, zamina);
	InsertBefore(lit_r, para1, zamina);

	cout << "Модифікований літерний рядок: " << endl << endl << lit_r << endl << endl;

	return 0;
}

string InsertBefore(string& string, const char* para, const char* zamina)
{
	size_t pos = 0;
	while ((pos = string.find(para)) != -1)
	{
		string.replace(pos, 2, zamina);
		pos += 3;
	}
	return string;
}