//------------------------------------------------------------------------------------------------------------
// 2021. 1학기 STL 화78 목23 -		3월 2일 목요일 (1주 2일)
// 이번시간 - 설문
//		      save 파일 분리
//			  정수 데이터 다루기
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <algorithm>
#include <random>
#include "save.h"

using namespace std;

// [문제] 임의의 값을 갖는 정수(랜덤엔진과 분포) 10000000개를 만들자 (천만개임)
// 출력해봐라
// 내림차순 정렬 해봐라
// 출력해봐라

// 지역에는 메모리 제한이 있당 :)

default_random_engine dre;
int a[10'000'000];

int main()
{
	uniform_int_distribution<> uid;

	for (int& num : a)
		num = uid(dre);

	//for (int d : a)
	//	cout << d << " ";
	//cout << endl;

	cout << "정렬 시작!" << endl;
	int count = 0;
//	sort(begin(a), end(a)); // 마지막 3번쨰 인자는 숨겨져있음 알려주면 됨 :) 그럼 내림차순도 된데이~ / 함수로 만들어준다 :)
	sort(begin(a), end(a), [&count](int a, int b) {
		count++;
		return a > b; 
		});

	/*for (int d : a)
		cout << d << " ";
	cout << endl;*/

	cout << "첫 원소 : "<< *begin(a) << endl;
	cout << "마지막 원소 : " << *(end(a) - 1) << endl;

	cout << "비교 호출 횟수 - " << count << endl;
	save("2021STL.cpp");
}
