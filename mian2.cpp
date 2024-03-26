#include <iostream> 
using namespace std;

int* copy_arr(int size1, int size2, int* arr1, int* arr2) {

	int* arr3 = new int[size1 + size2];

	for (int i = 0; i < size1; i++) {
		
		arr3[i] = arr1[i];
	}

	for (int i = 0; i < size2; i++) {

		arr3[i + size1] = arr2[i];
	}

	return arr3;
}

int main() {
	setlocale(LC_ALL, "ru");

	int size1 = 2;
	int* arr1 = new int[size1] {1, 2};

	int size2 = 3;
	int* arr2 = new int[size2] {6, 7, 8};

	int* result = copy_arr(size1, size2, arr1, arr2);

	cout << "√отовый массив: \n";

	for (int i = 0; i < size1 + size2; i++) {
		
		cout << result[i] << " ";
	}

	return 0;
}



/*«адание по динамическим массивам

Ќаписать функцию, котора€ принимает на вход 4 параметра:
указатель на массив, его длину, указатель на второй массив, его длину
¬ернуть массив, который представл€ет собой конктаенацию,
т.е. второй массив, приклеенный к первому.

[1, 4, 7]
[5, 8, 3, 7]

[1, 4, 7, 5, 8, 3, 7]*/


 