#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

struct address
{
	std::string town[3];
	std::string strit[3];
	int home[3];
	int apartment[3];
	int index[3];
};

void print(address& add1)
{
	setlocale(LC_ALL, "russian");
	address address_array;
	address* add = &address_array;
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
	setlocale(LC_ALL, "russian");
	int n = 3;
	address* address_array = new address[n];
	for (int i = 0; i < n; i++) {
		std::cout << "������� �������� ������:  ";
		std::cin >> address_array -> town[i];
		std::cout << std::endl;
		std::cout << "������� �������� �����:  ";
		std::cin >> address_array[i].strit[i];
		std::cout << std::endl;
		std::cout << "������� ����� ����:  ";
		std::cin >> address_array[i].home[i];
		std::cout << std::endl;
		std::cout << "������� ����� ��������:  ";
		std::cin >> address_array[i].apartment[i];
		std::cout << std::endl;
		std::cout << "������� ������:  ";
		std::cin >> address_array[i].index[i];
		std::cout << std::endl;

	}
	print(address_array[n]);
	delete[] address_array;
	return 0;
} 