#include <iostream>

void three_max(int& refnum1, int& refnum2, int& refnum3) {

	if (refnum1 > refnum2 && refnum1 > refnum3) {
		refnum2 = refnum1;
		refnum3 = refnum1;
	}

	if (refnum2 > refnum1 && refnum2 > refnum3) {
		refnum1 = refnum2;
		refnum3 = refnum2;
	}

	if (refnum3 > refnum1 && refnum3 > refnum2) {
		refnum1 = refnum3;
		refnum2 = refnum3;
	}

}

template<typename T>
void show_arr(T arr[], const int length) {
	std::cout << "[";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}
template<typename T>
int& masNegative(T arr, const int length) {

	for (int i = 0; i < length; i++) {
		int iNeg = 0;
		for (iNeg = 0; iNeg < length; iNeg++)
		if (arr[iNeg] < 0) {
			return arr[iNeg];
		}
		return arr[0];
	}
}

void range_array(int parr1[], int parr2[], const int length1, const int length2) {
	int inull = 0;
	for (int i = 0; i < length1; i++) {
		for (int j = 0; j < length2; j++) {
			if (*(parr1 + i) == *(parr2 + j))
				*(parr2 + j) = inull;
		}
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n1, n2, n3;

	std::cout << "������ 1. ��������� �������� �� ������������. \n";
	std::cout << "������� 1-� �����: ";
	std::cin >> n1;
	std::cout << "������� 2-� �����: ";
	std::cin >> n2;
	std::cout << "������� 3-� �����: ";
	std::cin >> n3;
	std::cout << "������ �������� �� ������������: ";
	three_max(n1, n2, n3);
	std::cout << n1 << ' ' << n2 << ' ' << n3;

	std::cout << "\n\n";


	std::cout << "������ 2. ����������� ������ �� ������ ������������� �������. \n";
	const int size = 7;
	int arr[size] = { 11, 5, 2, -3, 4, -6, 0 };
	show_arr(arr, size);
	std::cout << masNegative(arr, size) << "\n";
	std::cout << "\n\n";

	std::cout << "������ 3. ��������� ������������� ��������� �� ������ �������. \n";
	const int size1 = 5;
	int arr1[size1] = { 1, 2, 3, 4, 5 };
	std::cout << "������ ������: ";
	std::cout << "[";
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << ", ";
	std::cout << "\b\b]\n";

	const int size2 = 5;
	int arr2[size2] = { 2, 7, 5, 9, 10 };
	std::cout << "������ ������: ";
	std::cout << "[";
	for (int i = 0; i < size2; i++)
		std::cout << arr2[i] << ", ";
	std::cout << "\b\b]\n";
	range_array(arr1, arr2, size1, size2);
	std::cout << "������ ����� ������ �������: ";
	show_arr(arr2, size2);
	std::cout << "\n";



	return 0;
}