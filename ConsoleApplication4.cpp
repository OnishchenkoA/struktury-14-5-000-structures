#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

struct address
{
	std::string town;
	std::string strit;
	int home;
	int apartment;
	int index;
};

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "russian");
	int i = 3;
	address* address_array = new address[3];
	for (int i = 0; i < 3; i++) {
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
	for (int i = 0; i < 3; i++) {
		std::cout << "�����: " << address_array[i].town << std::endl;
		std::cout << "�����: " << address_array[i].strit << std::endl; 
		std::cout << "����� ����: " << address_array[i].home << std::endl; 
		std::cout << "����� ��������: " << address_array[i].apartment << std::endl; 
		std::cout << "������: " << address_array[i].index << std::endl;
		std::cout << " " << std::endl;
	}
	return 0;
}
