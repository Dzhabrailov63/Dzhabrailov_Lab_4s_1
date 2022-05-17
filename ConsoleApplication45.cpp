#include"Map_Tree.h"
#include<iostream>
#include <conio.h>
#include <string>

int get_key()
{
	int key = _getch();
	return key;
}

int menu1(Map_Tree m)
{
	system("cls");
	std::cout << "Select:" << "\n";
	std::cout << "1. Insert elem" << std::endl;
	std::cout << "2. Find elem" << std::endl;
	std::cout << "3. Erase elem" << std::endl;
	std::cout << "Esc. Exit" << std::endl;
	std::cout << "Your Tree:" << std::endl;
	m.Print();
	while (1)
	{
		int key = get_key();
		return key;
	}
}

int main()
{
	Map_Tree m;
	unsigned Menu;
	int key;
	std::string data;

	std::cout << "Laboratory work 1. Class:Map(Tree)" << "\n";
	system("pause");
	for (;;)
	{
		system("cls");
		std::cout << "Select:" << "\n";
		std::cout << "1. Insert elem" << std::endl;
		std::cout << "2. Find elem" << std::endl;
		std::cout << "3. Erase elem" << std::endl;
		std::cout << "Esc. Exit" << std::endl;
		std::cout << "Your Tree:" << std::endl;
		m.Print();
		Menu = _getch();
		if (Menu == 27) break;
		switch (Menu)
		{
		case 49:
			std::cout << std::endl;
			std::cout << "Your key = ";
			std::cin >> key;
			std::cout << "Your data = ";
			std::cin >> data;
			try {
				m.insert(key, data);
			}
			catch (const char* err)
			{
				std::cout << err << std::endl;
				system("pause");
				break;
			}
			break;
		case 50:
			std::cout << "Your key = ";
			std::cin >> key;
			try {
				std::cout << "Data in " << key << ": " << m.find(key) << std::endl;
				system("pause");
			}
			catch (const char* err)
			{
				std::cout << err << std::endl;
				system("pause");
				break;
			}
			break;
		case 51:
			std::cout << "Your key = ";
			std::cin >> key;
			try {
				m.erase(key);
			}
			catch (const char* err)
			{
				std::cout << err << std::endl;
				system("pause");
				break;
			}
			break;
		}
	}
	return 0;
}