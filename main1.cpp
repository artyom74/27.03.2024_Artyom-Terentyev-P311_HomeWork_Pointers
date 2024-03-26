#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	bool* bool_ptr;
	int* int_ptr;
	char* char_ptr;
	long long* long_long_ptr;

	cout << "bool ptr: " << sizeof(bool_ptr) << endl;
	cout << "int ptr: " << sizeof(int_ptr) << endl;
	cout << "char ptr: " << sizeof(char_ptr) << endl;
	cout << "long long ptr: " << sizeof(long_long_ptr) << endl;

	cout << "bool: " << sizeof(bool) << endl;
	cout << "int: " << sizeof(int) << endl;
	cout << "char: " << sizeof(char) << endl;
	cout << "long long: " << sizeof(long long) << endl;

	
	return 0;
} 

/*
¬ывести на печать размеры указателей дл€ типов  
bool, int, char, long long
¬ывести на печать размеры €чеек, на которые они ссылаютс€
*/
