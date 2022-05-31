#include<iostream>
using namespace std;

//16,04 - overload - Homework

#define delimiter "\n______________________________________\n"

void FillRand(int arr[], const int SIZE);
void FillRand(double arr[], const int SIZE);
void FillRand(char arr[], const int SIZE);
void FillRand(float arr[], const int SIZE);

void Print(int arr[], const int SIZE);
void Print(double arr[], const int SIZE);
void Print(char arr[], const int SIZE);
void Print(float arr[], const int SIZE);

int Sum(int arr[], const int SIZE);
double Sum(double arr[], const int SIZE);
char Sum(char arr[], const int SIZE);
float Sum(float arr[], const int SIZE);

double Avg(int arr[], const int SIZE);
double Avg(double arr[], const int SIZE);
char Avg(char arr[], const int SIZE);
float Avg(float arr[], const int SIZE);

int minValueIn(int arr[], const int SIZE);
double minValueIn(double arr[], const int SIZE);
char minValueIn(char arr[], const int SIZE);
float minValueIn(float arr[], const int SIZE);

int maxValueIn(int arr[], const int SIZE);
double maxValueIn(double arr[], const int SIZE);
char maxValueIn(char arr[], const int SIZE);
float maxValueIn(float arr[], const int SIZE);

void shiftLeft(int arr[], const int SIZE, int number_of_shifts);
void shiftLeft(double arr[], const int SIZE, int number_of_shifts);
void shiftLeft(char arr[], const int SIZE, int number_of_shifts);
void shiftLeft(float arr[], const int SIZE, int number_of_shifts);

void shiftRight(int arr[], const int SIZE, int number_of_shifts);
void shiftRight(double arr[], const int SIZE, int number_of_shifts);
void shiftRight(char arr[], const int SIZE, int number_of_shifts);
void shiftRight(float arr[], const int SIZE, int number_of_shifts);

void Sort(int arr[], const int SIZE);
void Sort(double arr[], const int SIZE);
void Sort(char arr[], const int SIZE);
void Sort(float arr[], const int SIZE);

void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE];
	int number_of_shifts;
	FillRand(arr, SIZE);
	cout << "Заполнение массива случайными числами: ";
	Print(arr, SIZE); cout << endl;
	cout << "Сумма элементов массива:" << Sum(arr, SIZE) << endl << endl;
	cout << "Среднее арифмет.элементов массива:" << Avg(arr, SIZE) << endl << endl;
	cout << "Минимальное значение массива:" << minValueIn(arr, SIZE) << endl << endl;
	cout << "Максимальное значение массива:" << maxValueIn(arr, SIZE) << endl << endl;
	cout << "Введите количество сдвигов массива влево:"; cin >> number_of_shifts;
	shiftLeft(arr, SIZE, number_of_shifts);	Print(arr, SIZE); cout << endl;
	cout << "Введите количество сдвигов массива вправо:"; cin >> number_of_shifts;
	shiftRight(arr, SIZE, number_of_shifts); Print(arr, SIZE); cout << endl;
	cout << "Сортировка массива" << endl;
	Sort(arr, SIZE);
	Print(arr, SIZE);

	cout << delimiter << endl;

	const int D_SIZE = 5;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	cout << "Заполнение массива случайными дробными числами: ";
	Print(d_arr, D_SIZE);
	cout << endl;
	cout << "Сумма элементов массива:" << Sum(d_arr, D_SIZE) << endl << endl;
	cout << "Среднее арифмет.элементов массива:" << Avg(d_arr, D_SIZE) << endl << endl;
	cout << "Минимальное значение массива:" << minValueIn(d_arr, D_SIZE) << endl << endl;
	cout << "Максимальное значение массива:" << maxValueIn(d_arr, D_SIZE) << endl << endl;;
	cout << "Введите количество сдвигов массива влево:"; cin >> number_of_shifts;
	shiftLeft(d_arr, D_SIZE, number_of_shifts);	Print(d_arr, D_SIZE); cout << endl;
	cout << "Введите количество сдвигов массива вправо:"; cin >> number_of_shifts;
	shiftRight(d_arr, D_SIZE, number_of_shifts); Print(d_arr, D_SIZE); cout << endl;
	cout << "Сортировка массива" << endl;
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE); cout << endl;

	cout << delimiter << endl;

	const int C_SIZE = 7;
	char c_arr[C_SIZE];
	FillRand(c_arr, C_SIZE);
	cout << "Заполнение массива случайными символами: ";
	Print(c_arr, C_SIZE);
	cout << endl;
	cout << "Сумма элементов массива:" << Sum(c_arr, C_SIZE) << endl << endl;
	cout << "Среднее арифмет.элементов массива:" << Avg(c_arr, C_SIZE) << endl << endl;
	cout << "Минимальное значение массива:" << minValueIn(c_arr, C_SIZE) << endl << endl;
	cout << "Максимальное значение массива:" << maxValueIn(c_arr, C_SIZE) << endl << endl;
	cout << "Введите количество сдвигов массива влево:"; cin >> number_of_shifts;
	shiftLeft(c_arr, C_SIZE, number_of_shifts);	Print(c_arr, C_SIZE); cout << endl;
	cout << "Введите количество сдвигов массива вправо:"; cin >> number_of_shifts;
	shiftRight(c_arr, C_SIZE, number_of_shifts); Print(c_arr, C_SIZE); cout << endl;
	cout << "Сортировка массива" << endl;
	Sort(c_arr, C_SIZE);
	Print(c_arr, C_SIZE); cout << endl;

	cout << delimiter << endl;

	const int F_SIZE = 4;
	float f_arr[F_SIZE];
	FillRand(f_arr, F_SIZE);
	cout << "Заполнение массива случайными дробными числами: ";
	Print(f_arr, F_SIZE);
	cout << endl;
	cout << "Сумма элементов массива:" << Sum(f_arr, F_SIZE) << endl << endl;
	cout << "Среднее арифмет.элементов массива:" << Avg(f_arr, F_SIZE) << endl << endl;
	cout << "Минимальное значение массива:" << minValueIn(f_arr, F_SIZE) << endl << endl;
	cout << "Максимальное значение массива:" << maxValueIn(f_arr, D_SIZE) << endl << endl;;
	cout << "Введите количество сдвигов массива влево:"; cin >> number_of_shifts;
	shiftLeft(f_arr, F_SIZE, number_of_shifts);	Print(f_arr, F_SIZE); cout << endl;
	cout << "Введите количество сдвигов массива вправо:"; cin >> number_of_shifts;
	shiftRight(c_arr, C_SIZE, number_of_shifts); Print(f_arr, F_SIZE); cout << endl;
	cout << "Сортировка массива" << endl;
	Sort(f_arr, F_SIZE);
	Print(f_arr, F_SIZE); cout << endl;
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
	{
		arr[i] = rand();
	}
}
void FillRand(float arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
		arr[i] = float(rand() % 10000) / 100;
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
void Print(float arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
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
char Sum(char arr[], const int SIZE)
{
	char sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	return sum;
}
float Sum(float arr[], const int SIZE)
{
	float sum = 0;
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
double Avg(double arr[], const int SIZE)
{
	return (double)Sum(arr, SIZE) / SIZE;
}
char Avg(char arr[], const int SIZE)
{
	return (char)Sum(arr, SIZE) / SIZE;
}
float Avg(float arr[], const int SIZE)
{
	return (float)Sum(arr, SIZE) / SIZE;
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
double minValueIn(double arr[], const int SIZE)
{
	double min = 0;
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
char minValueIn(char arr[], const int SIZE)
{
	char min = 0;
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
float minValueIn(float arr[], const int SIZE)
{
	float min = 0;
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
double maxValueIn(double arr[], const int SIZE)
{
	double max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}
char maxValueIn(char arr[], const int SIZE)
{
	char max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}
float maxValueIn(float arr[], const int SIZE)
{
	float max = arr[0];
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
void shiftLeft(double arr[], const int SIZE, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[0];
		for (int i = 0; i < SIZE; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[SIZE - 1] = buffer;
	}
}
void shiftLeft(char arr[], const int SIZE, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[0];
		for (int i = 0; i < SIZE; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[SIZE - 1] = buffer;
	}
}
void shiftLeft(float arr[], const int SIZE, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		float buffer = arr[0];
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
void shiftRight(double arr[], const int SIZE, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[SIZE - 1];
		for (int i = SIZE - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
void shiftRight(char arr[], const int SIZE, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[SIZE - 1];
		for (int i = SIZE - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
void shiftRight(float arr[], const int SIZE, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		float buffer = arr[SIZE - 1];
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
void Sort(double arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i + 1; j < SIZE; j++)
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
	}
}
void Sort(char arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i + 1; j < SIZE; j++)
			if (arr[j] < arr[i])
			{
				char buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
	}
}
void Sort(float arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i + 1; j < SIZE; j++)
			if (arr[j] < arr[i])
			{
				float buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
	}
}

