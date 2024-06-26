#include <iostream>
#include <Windows.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//#1
	int arr[6][6];
	int first;

	std::cout << "\n======ÇÀÄÀÍÈÅ 1======\n\n";

	std::cout << "Ââåäèòå ÷èñëî: ";
	std::cin >> first;
	std::cout << "\n";
	

	for (int i = 0; i < 6; i++)
	{
		first *= 2;
		arr[i][0] = first;
	}

	for (int i = 0; i < 6; i++)
	{
		std::cout << arr[i][0] << " ";
	}

	//#2
	
	int arr1[6][6];
	int second;

	std::cout << "\n\n======ÇÀÄÀÍÈÅ 2======\n\n";

	std::cout << "Ââåäèòå ÷èñëî: ";
	std::cin >> second;
	std::cout << "\n";

	for (int i = 0; i < 6; i++)
	{
		second += 1;
		arr1[i][0] = second;
	}

	for (int i = 0; i < 6; i++)
	{
		std::cout << arr1[i][0] << " ";
	}

	return 0;
}