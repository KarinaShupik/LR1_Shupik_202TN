#include"Power.h"
#include<iostream>
#include <math.h>
using namespace std;

Power Power::Init(int f, float s)
{
	Power tmp;
	//first - ���������� 100 � ��������;
	tmp.first = f;
    //second - ���� �������� � ���������;
	tmp.second = s;
	return tmp;
}

Power Power::Read()
{
	Power tmp;
	cout << "Input �alorie content per 100 grams of product: " << endl;
	cin >> tmp.first;
	cout << "Input product weight in kilograms: " << endl;
	cin >> tmp.second;
	return tmp;
}

void Power::Display()
{
	
	/*
	�����������, ��:
	"second" ���� �������� = "�" ���� (�������� ����������� ��������);
	100 ���� = "first" ����

    ��� ����������� ����� � �������� ������� �� ������� �� 1000:

	100 ���� = 0,1 ��

	��� ������� ������ �������� �-��� ������ "�". ����:

	Total calorie content of the product(����) = first(����) * second(��)/1000 * 0,1= first(����) * second(��)/100;

	*/

	float power = (first * second) / 100;
	
	cout << "Total calorie content of the product: " << power << endl;
}

