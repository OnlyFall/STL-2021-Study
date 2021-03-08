//------------------------------------------------------------------------------------------------------------
// 2021. 1�б� STL ȭ78 ��23 -		3�� 2�� ����� (1�� 2��)
// �̹��ð� - ����
//		      save ���� �и�
//			  ���� ������ �ٷ��
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <algorithm>
#include <random>
#include "save.h"

using namespace std;

// [����] ������ ���� ���� ����(���������� ����) 10000000���� ������ (õ������)
// ����غ���
// �������� ���� �غ���
// ����غ���

// �������� �޸� ������ �ִ� :)

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

	cout << "���� ����!" << endl;
	int count = 0;
//	sort(begin(a), end(a)); // ������ 3���� ���ڴ� ���������� �˷��ָ� �� :) �׷� ���������� �ȵ���~ / �Լ��� ������ش� :)
	sort(begin(a), end(a), [&count](int a, int b) {
		count++;
		return a > b; 
		});

	/*for (int d : a)
		cout << d << " ";
	cout << endl;*/

	cout << "ù ���� : "<< *begin(a) << endl;
	cout << "������ ���� : " << *(end(a) - 1) << endl;

	cout << "�� ȣ�� Ƚ�� - " << count << endl;
	save("2021STL.cpp");
}
