#include <iostream>

using namespace std;
int* makeArray(const int n);

void printArray(const int* arr, const int n);
int sumArray(const int n);

int main()
{
	int n;
	cout << "Enter Arrary size : " ;
	cin >> n;

	int* arr = makeArray(n) ;
	printArray(arr, n);
	int sum = sumArray(n);

	cout << "\nSum of the array : " << sum;

	delete[] arr;
	return 0;


}

int* makeArray(const int n) 
{
	
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = i + 1;
	}

	return arr;

}

void printArray(const int*arr, const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
	}

}

int sumArray(const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += i+1;
	}
	return sum;
}

