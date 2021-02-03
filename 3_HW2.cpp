#include <iostream>
#include <iomanip>

using namespace std;

int** buildTable(int n);
void make_identity_matrix(int** table, int n);
void printTable(int** m, int n);

int main() {
	int n = 0;
	cout << "N�� �Է��Ͻÿ� : ";
	cin >> n;
	if (n < 1) {
		cout << "\n����� ������ �� �����ϴ�.\n" << endl;
		exit(EXIT_FAILURE);
	}

	int** table = buildTable(n);
	make_identity_matrix(table, n);
	printTable(table, n);

	for (int i = 0; i < n; i++)
		delete[] table[i];
	delete table;

	return 0;
}

int** buildTable(int n)
{
	int** mat = new int*[n];

	for (int i = 0; i < n; ++i)
	{
		mat[i] = new int[n];
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			mat[i][j] = 0;
		}
	}
	return mat;
}

void make_identity_matrix(int** table, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; ++j) 
		{
			if(i==j)
			table[i][i] = 1;
		}
	}
}

void printTable(int** m, int n) 
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << setw(4)<< m[i][j];
		}
		cout << '\n';
	}
}
