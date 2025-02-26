#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <Windows.h>
using namespace std;

struct address
{
	std::string town;
	std::string strit;
	int home;
	int apartment;
	int index;
};

void print(address add[3])
{
	for (int i = 0; i < 3; i++) {
		std::cout << "Город: " << add[i].town << std::endl;
		std::cout << "Улица: " << add[i].strit << std::endl;
		std::cout << "Номер дома: " << add[i].home << std::endl;
		std::cout << "Номер квартиры: " << add[i].apartment << std::endl;
		std::cout << "Индекс: " << add[i].index << std::endl;
		std::cout << " " << std::endl;
	}
}

int main(int argc, char** argv)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "russian");
	int n = 3;
	address* address_array = new address[n];
	for (int i = 0; i < n; i++) {
		std::cout << "Введите название города:  ";
		std::cin >> address_array[i].town;
		std::cout << std::endl;
		std::cout << "Введите название улицы:  ";
		std::cin >> address_array[i].strit;
		std::cout << std::endl;
		std::cout << "Введите номер дома:  ";
		std::cin >> address_array[i].home;
		std::cout << std::endl;
		std::cout << "Введите номер квартиры:  ";
		std::cin >> address_array[i].apartment;
		std::cout << std::endl;
		std::cout << "Введите индекс:  ";
		std::cin >> address_array[i].index;
		std::cout << std::endl;
	}
	print(address_array);
	delete[] address_array;
	return 0;
} 