#include <iostream>

using namespace std;

int ReadNumber()
{

	int Number = 0;
	cout << "Please enter a number\n";
	cin >> Number;

	return Number;
}

int RandomNumber(int From, int To)
{

	int RandomNum = rand() % (To - From + 1) + From;

	return RandomNum;
}

void FillArrayWithRandomNumbers(int Arr[], int& ArrayLength)
{

	cout << "Enter number of elements you want to fill the array with\n";
	cin >> ArrayLength;

	for (int i = 0; i <= ArrayLength - 1; i++)
	{
		Arr[i] = RandomNumber(-100, 100);
	}

}

int CountNigativeNumbersInArray(int Arr1[], int Array1Length)
{
	int Counter = 0;

	for (int i = 0; i <= Array1Length - 1; i++)
	{
		if (Arr1[i] < 0)
		{
			Counter++;
		}
	}
	return Counter;
}

void PrintArray(int Arr[100], int ArrayLength)
{

	for (int i = 0; i <= ArrayLength - 1; i++)
		cout << Arr[i] << " ";

	cout << "\n";
}

int main()
{
	srand((unsigned)time(NULL));

	int Arr[100], Length = 0;

	FillArrayWithRandomNumbers(Arr, Length);

	cout << "Array 1 elements : ";
	PrintArray(Arr, Length);

	cout << "\nOdd numbers in array : ";
	cout << CountNigativeNumbersInArray(Arr, Length) << "\n";


}