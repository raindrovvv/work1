#include <iostream>
using namespace std;

void Caculate(double arr[], int size) {
	double sum = 0.0;
	double avg = 0.0; // ����� ���� �� �Ǽ������� ����ϱ� ���� double������ ����

	for (int i = 0; i < size; i++) {  // �Է¹��� ���ڵ��� �հ踦 ���ϴ� �ݺ���
		sum += arr[i];
	}

	avg = sum / size;  // �Է¹��� ���ڵ��� ����� ���ϴ� ��
	cout << "�հ�: " << sum << endl;
	cout << "���: " << avg << endl;
}

int main() {
	int size = 0;
	cout << "�Է��� ������ ������ �Է��ϼ���: ";
	cin >> size;

	// ���� �迭 �Ҵ� (���� �޸�)
	double* arr = new double[size];

	for (int i = 0; i < size; i++) {
		cout << i + 1 << "��° ���ڸ� �Է��ϼ���: ";
		cin >> arr[i];
	}

	Caculate(arr, size);  // �Է¹��� ���ڵ��� �հ�� ����� ����ϴ� �Լ� ȣ��

	delete[] arr;  // ���� �迭(�޸�) ����

	return 0;
}