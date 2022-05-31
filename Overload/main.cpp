#include<iostream>
using namespace std;

//classwork

#define delimiter "\n_______________________________________________________\n"

void FillRand(int arr[], const int SIZE);
void FillRand(double arr[], const int SIZE);
void FillRand(char arr[], const int SIZE);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[], const int SIZE);
void Print(double arr[], const int SIZE);
void Print(char arr[], const int SIZE);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int arr[], const int SIZE);
double Sum(double arr[], const int SIZE);

double Avg(int arr[], const int SIZE);
int minValueIn(int arr[], const int SIZE);
int maxValueIn(int arr[], const int SIZE);
void shiftLeft(int arr[], const int SIZE, int number_of_shifts);



void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE];
	int number_of_shifts;
	FillRand(arr, SIZE);
	cout << "Заполнение массива случайными числами" << endl;
	Print(arr, SIZE);
	cout << endl;
	cout << "Сумма элементов массива:" << Sum(arr, SIZE) << endl;
	cout << "Среднее арифмет.элементов массива:" << Avg(arr, SIZE) << endl;
	cout << "Минимальное значение массива:" << minValueIn(arr, SIZE) << endl;
	cout << "Максимальное значение массива:" << maxValueIn(arr, SIZE) << endl;
	cout << "Введите количество сдвигов массива влево:"; cin >> number_of_shifts;
	shiftLeft(arr, SIZE, number_of_shifts);
	Print(arr, SIZE);
	cout << endl;
	cout << "Введите количество сдвигов массива вправо:"; cin >> number_of_shifts;
	shiftRight(arr, SIZE, number_of_shifts);
	Print(arr, SIZE);
	cout << endl;
	cout << "Сортировка массива" << endl;
	Sort(arr, SIZE);
	Print(arr, SIZE);

	cout << delimiter << endl;

	const int D_SIZE = 5;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	cout << "Заполнение массива случайными дробными числами" << endl;
	Print(d_arr, D_SIZE); cout << endl;
	cout << "Сумма элементов массива:" << Sum(d_arr, D_SIZE) << endl << endl;

	cout << delimiter << endl;

	const int C_SIZE = 7;
	char c_arr[C_SIZE];
	FillRand(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);

	cout << delimiter << endl;

	const int ROWS = 2;
	const int COLS = 3;
	int arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);

}
void FillRand(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
		arr[i] = rand() % 100;
}
void FillRand(double arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
		arr[i] = double(rand() % 10000) / 100;
}
void FillRand(char arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
		arr[i] = rand();
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void Print(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(double arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(char arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}
}
int Sum(int arr[], const int SIZE)
{
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int SIZE)
{
	double sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(int arr[], const int SIZE)
{
	return (double)Sum(arr, SIZE) / SIZE;
}
int minValueIn(int arr[], const int SIZE)
{
	int min = 0;
	min = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}
int maxValueIn(int arr[], const int SIZE)
{
	int max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}
void shiftLeft(int arr[], const int SIZE, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < SIZE; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[SIZE - 1] = buffer;
	}
}
void shiftRight(int arr[], const int SIZE, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[SIZE - 1];
		for (int i = SIZE - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
void Sort(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i + 1; j < SIZE; j++)
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
	}
}