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
		std::cout << "�����: " << add[i].town << std::endl;
		std::cout << "�����: " << add[i].strit << std::endl;
		std::cout << "����� ����: " << add[i].home << std::endl;
		std::cout << "����� ��������: " << add[i].apartment << std::endl;
		std::cout << "������: " << add[i].index << std::endl;
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
		std::cout << "������� �������� ������:  ";
		std::cin >> address_array[i].town;
		std::cout << std::endl;
		std::cout << "������� �������� �����:  ";
		std::cin >> address_array[i].strit;
		std::cout << std::endl;
		std::cout << "������� ����� ����:  ";
		std::cin >> address_array[i].home;
		std::cout << std::endl;
		std::cout << "������� ����� ��������:  ";
		std::cin >> address_array[i].apartment;
		std::cout << std::endl;
		std::cout << "������� ������:  ";
		std::cin >> address_array[i].index;
		std::cout << std::endl;
	}
	print(address_array);
	delete[] address_array;
	return 0;
} 