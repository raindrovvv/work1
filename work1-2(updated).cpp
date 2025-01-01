#include <iostream>
#include <string>

using namespace std;

void Calculate(double numbers[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }
    cout << "�հ�: " << sum << endl;

    double average = sum / size;
    cout << "���: " << average << endl;
}

void temp(double numbers[], int i, int j) {
    double temp = numbers[i];
    numbers[i] = numbers[j];
    numbers[j] = temp;
}

//�������� ���� �Լ�
void sortAscending(double numbers[], int size) {
    // ù ��° ���ں��� �ϳ��� ���ϸ� ����
    for (int i = 0; i < size; i++) {
        // ���� ���ڿ� �� ���� ���ڸ� ��
        for (int j = i + 1; j < size; j++) {
            if (numbers[i] > numbers[j]) {
                //���� ���ڰ� ���� ���ں��� ũ�� �� ������ ��ġ�� �ٲ�
                temp(numbers, i, j);
            }
        }
    }
}

//�������� ���� �Լ�
void sortDescending(double numbers[], int size) {
    // ù ��° ���ں��� �ϳ��� ���ϸ� ����
    for (int i = 0; i < size - 1; i++) {
        // ���� ���ڿ� �� ���� ���ڸ� ��
        for (int j = i + 1; j < size; j++) {
            if (numbers[i] < numbers[j]) {
                // ���� ���ڰ� ���� ���ں��� ũ�� �� ������ ��ġ�� �ٲ�
                temp(numbers, i, j);
            }
        }
    }
}

int main() {
    // 5���� ���ڸ� ������ �迭 �����
    int sortType = 0;
    int count = 0;

    // �Է� ���ڹޱ�
    cout << "�Է��� ������ ������ �Է����ּ���: " << endl;
    cin >> count;
    cout << "------------------------" << endl;

    if (count <= 0) {
        cout << "�߸��� �Է��Դϴ�." << endl;
        return 0;
    }

    //���� �迭 ����
    double* numbers = new double[count];

    cout << "������ �Է����ּ���." << endl;
    for (int i = 0; i < count; i++) {
        cout << i + 1 << "��° ����: ";
        cin >> numbers[i];
    }

    cout << "------------------------" << endl;
    // �հ� �� ��� ���ϱ�
    Calculate(numbers, count);

    cout << "------------------------" << endl;

    //���� ��� ����
    cout << "���� ����� �������ּ���(1: ��������, 2: ��������): ";
    cin >> sortType;

    //������ ���� ��Ŀ� ���� ����
    if (sortType == 1)
    {
        sortAscending(numbers, count);
        cout << "�������� ���� ���: ";
    }
    else if (sortType == 2)
    {
        sortDescending(numbers, count);
        cout << "�������� ���� ���: ";
    }
    else
    {
        cout << "�߸��� �Է��Դϴ�." << endl;
		delete[] numbers; // ���� �迭 �޸� ����
        return 0;
    }

    // ���� ��� ���
    for (int i = 0; i < count; i++) {
        cout << numbers[i] << " ";
    }

    delete[] numbers; // ���� �迭 �޸� ����
    return 0;
}