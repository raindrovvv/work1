#include <iostream>
#include <string>

using namespace std;

void Calculate(double numbers[]) {
    double sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }
    cout << "합계: " << sum << endl;

    double average = sum / 5.0;
    cout << "평균: " << average << endl;
}

//오름차순 정렬 함수
void sortAscending(double numbers[], int size) {
    // 첫 번째 숫자부터 하나씩 비교하며 정렬
    for (int i = 0; i < size; i++) { 
        // 현재 숫자와 그 다음 숫자를 비교
        for (int j = i + 1; j < size; j++) {
            if (numbers[i] > numbers[j]) { 	
                // 현재 숫자가 다음 숫자보다 크면 두 숫자의 위치를 바꿈
                double temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
}

//내림차순 정렬 함수
void sortDescending(double numbers[], int size) {
    // 첫 번째 숫자부터 하나씩 비교하며 정렬
    for (int i = 0; i < size - 1; i++) {
        // 현재 숫자와 그 다음 숫자를 비교
        for (int j = i + 1; j < size; j++) {
            if (numbers[i] <  numbers[j]) {
                // 현재 숫자가 다음 숫자보다 크면 두 숫자의 위치를 바꿈
                double temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
}

int main() {
    // 5개의 숫자를 저장할 배열 만들기
    double numbers[5] = { 0 }; // 배열을 0으로 초기화
	int sortType = 0;

    // 숫자 5개 입력받기
    cout << "점수 5개를 입력해주세요" << endl;
    cout << "------------------------" << endl;

    for (int i = 0; i < 5; i++) {
        cout << i + 1 << "번째 점수: ";
        cin >> numbers[i];
    }

    cout << "------------------------" << endl;
    // 합계 및 평균 구하기
    Calculate(numbers);

    cout << "------------------------" << endl;

    //정렬 방식 선택
	cout << "정렬 방식을 선택해주세요(1: 오름차순, 2: 내림차순): ";
	cin >> sortType;

	//선택한 정렬 방식에 따라 정렬
    if (sortType == 1)
    {
        sortAscending(numbers, 5);
		cout << "오름차순 정렬 결과: ";
    }
    else if (sortType == 2)
    {
        sortDescending(numbers, 5);
        cout << "내림차순 정렬 결과: ";
	}
	else
	{
		cout << "잘못된 입력입니다." << endl;
		return 0;
	}

	// 정렬 결과 출력
	for (int i = 0; i < 5; i++) {
		cout << numbers[i] << " ";
	}

    return 0;
}