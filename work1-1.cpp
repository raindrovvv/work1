#include <iostream>
using namespace std;

void Caculate(double arr[], int size) {
	double sum = 0.0;
	double avg = 0.0; // 평균을 구할 때 실수형으로 계산하기 위해 double형으로 선언

	for (int i = 0; i < size; i++) {  // 입력받은 숫자들의 합계를 구하는 반복문
		sum += arr[i];
	}

	avg = sum / size;  // 입력받은 숫자들의 평균을 구하는 식
	cout << "합계: " << sum << endl;
	cout << "평균: " << avg << endl;
}

int main() {
	int size = 0;
	cout << "입력할 숫자의 개수를 입력하세요: ";
	cin >> size;

	// 동적 배열 할당 (동적 메모리)
	double* arr = new double[size];

	for (int i = 0; i < size; i++) {
		cout << i + 1 << "번째 숫자를 입력하세요: ";
		cin >> arr[i];
	}

	Caculate(arr, size);  // 입력받은 숫자들의 합계와 평균을 출력하는 함수 호출

	delete[] arr;  // 동적 배열(메모리) 해제

	return 0;
}
