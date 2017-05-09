// Chapter7-ex4.cpp : Defines the entry point for the console application.
//

#include <iostream>

void maxInt(int* store_, int decision_);

int main()
{
	int store[100];

	int decision = 0;
	std::cout << "How many numbers do you want to type? max 100: ";
	std::cin >> decision;
	//extra comments :)
	for (int i = 0; i < decision; i++)
	{
		std::cout << "Please type nr " << i + 1 << ": ";
		std::cin >> store[i];
	}

	maxInt(store, decision);
	
	system("pause");
    return 0;
}
void maxInt(int* store_, int decision_)
{
		int tmpIndex = 0;
		int tmpValue = store_[0];

	for (int i = 0; i < decision_ -  1; i++)
	{

		for (int j = 0; j < decision_; j++)
		{
			if (store_[tmpIndex] <= store_[j+1])
			{
				tmpIndex = j+1;
				tmpValue = store_[j+1];
				
			}
		}
	}
			std::cout << "Index number:" << tmpIndex << std::endl;
			std::cout << "Largest number: " << tmpValue << std::endl;


}
