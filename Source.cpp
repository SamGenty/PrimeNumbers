
#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;

bool IsPrime(int Number);

int main()
{
	int counter = 1;
	int min = 10;
	int max = 100;
	cout << "Enter the lower limit : ";
	cin >> min;
	cout << "\nEnter the upper limit : ";
	cin >> max;
	cout << "Finding primes between " << min << " and " << max << "..." << endl << endl;

	ofstream outFile("Primes.txt");
	outFile << "Minimum value: " << min << " Maximum value : " << max << endl << endl;
	//Check all primes between the user given limits
	for (int i = min; i <= max; i++)
	{
		//If it is a prime, it is printed
		if (IsPrime(i))
		{
			counter++;
			outFile << " " << i;
			if (counter % 10 == 0)
			{
				outFile << "\n";
			}
		}
	}
	outFile << endl;
	outFile.close();
	cout << "Open Primes.txt to view primes . . ." << endl;
	cout << endl;
	system("pause");

}


//Function takes a number and tries to prove that it is not a prime
bool IsPrime(int Number)
{
	// Default, it's a prime
	bool result = true;
	for (int j = 2; j < sqrt((double)Number); j += 1)
	{
		if (Number % j == 0)
		{
			result = false;
		}
	}
	return result;
}