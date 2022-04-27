#include <iostream>
using namespace std;

//#define TASK_1
//#define TASK_2
//#define TASK_3
//#define TASK_4
#define TASK_5
#if defined TASK_1
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
	cout << "Сумма всех элементов массива = " << Sum(arr, n) << endl;
	cout << "Средне арифметическое массива = " << Avg(arr, n) << endl;
	
	int number_of_shifts;
	cout << "Введите количество сдвигов массива: "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
}
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
	cout << endl;
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
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
#if defined TASK_2 //Сортировка выбора через конструкцию ветвления
void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n];
	int buf = 0;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		int mini = i;
		for (int j = i; j < n; j++)
		{			
		if (arr[j] < arr[mini])

			{
				mini = j;
			}
		}
		if (i != mini)
		{
			buf = arr[i]; 
			arr[i] = arr[mini];
			arr[mini] = buf;
		}
		cout << arr[i] << "\t";
	}  		
}
#endif
#if defined TASK_3 //Сортировка выбора через swap
void main()
{
	setlocale(LC_ALL, "Russian");

	const int n = 5; 
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		int mini = i;
		for (int j = i; j < n; j++)
			if (arr[j] < arr[mini])
				mini = j;
		swap(arr[i], arr[mini]);
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
		
}
#endif
#if defined TASK_4 //Перегрузка

int Sum(int a, int b);
double Sum(double a, double b);
int Sum(int a, int b, int c);
void main()
{
	setlocale(LC_ALL, "Russian");
	cout << Sum(4, 5) << endl;
	cout << Sum(3.2, 4.5) << endl;
	cout << Sum(5, 7, 1) << endl;
}
int Sum(int a, int b)
{
	return a + b;
}
double Sum(double a, double b)
{
	return a + b;
}
int Sum(int a, int b, int c)
{
	return a + b + c;
}
#endif
#if defined TASK_5
#endif
