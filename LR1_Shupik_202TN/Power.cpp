#include"Power.h"
#include<iostream>
#include <math.h>
using namespace std;

Power Power::Init(int f, float s)
{
	Power tmp;
	//first - калорійність 100 г продукту;
	tmp.first = f;
    //second - маса продукту в кілограмах;
	tmp.second = s;
	return tmp;
}

Power Power::Read()
{
	Power tmp;
	cout << "Input сalorie content per 100 grams of product: " << endl;
	cin >> tmp.first;
	cout << "Input product weight in kilograms: " << endl;
	cin >> tmp.second;
	return tmp;
}

void Power::Display()
{
	
	/*
	Представимо, що:
	"second" грам продукту = "А" Ккал (загальна калорійность продукту);
	100 грам = "first" Ккал

    Щоб перетворити грами в кілограми потрібно їх поділити на 1000:

	100 грам = 0,1 кг

	Нам потрібно знайти загальну к-сть калорій "А". Тому:

	Total calorie content of the product(Ккал) = first(Ккал) * second(кг)/1000 * 0,1= first(Ккал) * second(кг)/100;

	*/

	float power = (first * second) / 100;
	
	cout << "Total calorie content of the product: " << power << endl;
}

