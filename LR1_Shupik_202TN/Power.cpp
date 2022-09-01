#include"Power.h"
#include<iostream>
#include <math.h>
using namespace std;

Calories Calories::Init(int f, float s)
{
	Calories tmp;
	//first - калорійність 100 г продукту;
	tmp.first = f;
    //second - маса продукту в кілограмах;
	tmp.second = s;
	return tmp;
}

Calories Calories::Read()
{
	Calories tmp;
	cout << "Input сalorie content per 100 grams of product: " << endl;
	cin >> tmp.first;
	cout << "Input product weight in kilograms: " << endl;
	cin >> tmp.second;
	return tmp;
}

void Calories::Power()
{
	float power = (first * second) / 100;
	cout << "Total calorie content of the product: " << power << endl;
}

void Calories::Display()
{
	Power();
}



