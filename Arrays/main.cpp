#include<iostream>
using namespace std;
//#define CLASSWORK
#define HOMEWORK
#if defined CLASSWORK
void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
int Sum(int arr[], const int n);
double Avg(int arr[], const int n);
void shiftLeft(int arr[], const int n, const int number_of_shifts);

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << "����� ���� ��������� ������� = " << Sum(arr, n) << endl;
	cout << "������ �������������� ��������� ������� = " << Avg(arr, n) << endl;

	int number_of_shifts;
	cout << "������� ���������� ������� "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);

	const int SIZE = 8;
	int brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	cout << "����� ���� ��������� ������� = " << Sum(brr, SIZE) << endl;
	cout << "������ �������������� ��������� ������� = " << Avg(brr, SIZE) << endl;

	cout << "������� ���������� ������� "; cin >> number_of_shifts;
	shiftLeft(brr, SIZE, number_of_shifts);
	Print(brr, SIZE);
	
}
void FillRand(int arr[], const int n)
{
	//���������� ������� ���������� �������:
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	//����� ������� �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
int Sum(int arr[], const int n)
{
	//����� ��������� �������:
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(int arr[], const int n)
{
	//������� ��������������:
	return (double)Sum(arr, n) / n;
}
void shiftLeft(int arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
#endif
#if defined HOMEWORK

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
int Sum(int arr[], const int n);
double Avg(int arr[], const int n);
double minVlaueIn(int arr[], const int n);
double maxVlaueIn(int arr[], const int n);
void shiftLeft(int arr[], const int n, const int number_of_shifts);
void shiftRight(int arr[], const int n, const int number_of_shifts);
void Sort(int arr[], const int n);


void main()

{
	setlocale(LC_ALL, "Russian");

	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "����� ���� ��������� ������� = " << Sum(arr, n) << endl;
	cout << "������ �������������� ������� = " << Avg(arr, n) << endl;
	cout << "����������� �������� ������� = " << minVlaueIn(arr, n) << endl;
	cout << "������������ �������� ������� = " << maxVlaueIn(arr, n) << endl;
	
	int number_of_shifts;
	cout << "������� ���������� ������� �����: "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	cout << "������� ���������� ������� ������: "; cin >> number_of_shifts;
	shiftRight(arr, n, number_of_shifts);
	Print(arr, n);
	
}
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		int mini = i;
		for (int j = i; j < n; j++)
			if (arr[j] < arr[mini])
				mini = j;
		swap(arr[i], arr[mini]);
	}
}
int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

double minVlaueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if(min > arr[i])
		{
			min = arr[i];
		}
	}
	return min;	
}

double maxVlaueIn(int arr[], const int n)
{
	int max = arr[0];
	for(int i = 0; i < n; i++)
		if (max < arr[i])
		{
			max = arr[i];
		}	
	return max;
}

void shiftLeft(int arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftRight(int arr[], const int n, const int number_of_shifts)
{	
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i >= 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;

	}
}

#endif

	