#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

template <typename T>
void generateArrayTemplate(T ar[], int n) {
	for (int i = 0; i < n; i++) {
		ar[i] = -40 + rand() % (50 + 40 + 1);
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

void generateArray(int ar[], int n) {
	for (int i = 0; i < n; i++) {
		ar[i] = -40 + rand() % (50 + 40 + 1);
	}
}

int arr_sum(int ar[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += ar[i];
	}
	return sum;
}


int main()
{
	srand((unsigned)time(NULL));
	int a[22];

	generateArray(a, 22);

	for (int i = 0; i < 22; i++) {
		cout << a[i] << " ";
	}

	cout << endl;
	cout << arr_sum(a, 22) << endl;

	generateArrayTemplate(a, 22);

	for (int i = 0; i < 22; i++) {
		cout << a[i] << " ";
	}

	cout << endl;
	cout << arr_sumTemplate(a, 22) << endl;

	return 0;
}
