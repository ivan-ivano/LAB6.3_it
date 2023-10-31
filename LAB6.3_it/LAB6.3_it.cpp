#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

template <typename T>
void generateArrayTemplate(T ar[], int n) {
	for (int i = 0; i < n; i++) {
		ar[i] = -40 + rand() % (91);
	}
}

template <typename R>
R arr_sumTemplate(R ar[], int n) {
	R sum = 0;
	for (int i = 0; i < n; i++) {
		sum += ar[i];
	}
	return sum;
}

template <typename P>
void PrintTemplate(P * a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << a[i] << setw(4);
	cout << endl;
}


void generateArray(int ar[], int n) {
	for (int i = 0; i < n; i++) {
		ar[i] = -40 + rand() % (91);
	}
}

int arr_sum(int ar[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += ar[i];
	}
	return sum;
}

void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << a[i] << setw(4);
	cout << endl;
}


int main()
{
	srand((unsigned)time(NULL));
	int a[22];

	generateArray(a, 22);

	Print(a, 22);
	cout << endl;
	cout << "Sum: " << arr_sum(a, 22) << endl;
	cout << endl;

	int b[22];

	generateArrayTemplate(b, 22);

	PrintTemplate(b, 22);

	cout << endl;
	cout << "Template Sum: " << arr_sumTemplate(b, 22) << endl;

	return 0;
}
