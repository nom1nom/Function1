#include<iostream>
using namespace std;

//30,04 - template - Homework -2

#define delimiter "\n_______________________________________________________\n"

const int ROWS = 2;
const int COLS = 3;

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T> void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T> T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T> double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T> T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T> T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);
//template<typename T> void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, const int number_of_shifts);
//template<typename T> void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);

void main()
{
	setlocale(LC_ALL, "");

	int arr[ROWS][COLS];
	FillRand(arr, ROWS, COLS);
	Print(arr, ROWS, COLS);
	cout << endl;
	cout << "Сумма элементов массива:" << Sum(arr, ROWS, COLS) << endl;
	cout << "Среднее арифмет.элементов массива:" << Avg(arr, ROWS, COLS) << endl;
	cout << "Минимальное значение массива:" << minValueIn(arr, ROWS, COLS) << endl;
	cout << "Максимальное значение массива:" << maxValueIn(arr, ROWS, COLS);
	/*int number_of_shifts; cout << "Введите количество сдвигов массива влево:"; cin >> number_of_shifts;
	shiftLeft(arr, ROWS, COLS, number_of_shifts);	Print(arr, ROWS, COLS); cout << endl;*/
	cout << delimiter;
	
	double d_arr[ROWS][COLS];
	FillRand(d_arr, ROWS, COLS);
	Print(d_arr, ROWS, COLS);
	cout << endl;
	cout << "Сумма элементов массива:" << Sum(d_arr, ROWS, COLS) << endl;
	cout << "Среднее арифмет.элементов массива:" << Avg(d_arr, ROWS, COLS) << endl;
	cout << "Минимальное значение массива:" << minValueIn(d_arr, ROWS, COLS) << endl;
	cout << "Максимальное значение массива:" << maxValueIn(d_arr, ROWS, COLS);
	/*int number_of_shifts; cout << "Введите количество сдвигов массива влево:"; cin >> number_of_shifts;
	shiftLeft(d_arr, ROWS, COLS, number_of_shifts);	Print(d_arr, ROWS, COLS); cout << endl;*/
	cout << delimiter;

	char c_arr[ROWS][COLS];
	FillRand(c_arr, ROWS, COLS);
	Print(c_arr, ROWS, COLS);
	cout << endl;
	cout << "Сумма элементов массива:" << Sum(c_arr, ROWS, COLS) << endl;
	cout << "Среднее арифмет.элементов массива:" << Avg(c_arr, ROWS, COLS) << endl;
	cout << "Минимальное значение массива:" << minValueIn(c_arr, ROWS, COLS) << endl;
	cout << "Максимальное значение массива:" << maxValueIn(c_arr, ROWS, COLS);
	/*int number_of_shifts; cout << "Введите количество сдвигов массива влево:"; cin >> number_of_shifts;
	shiftLeft(c_arr, ROWS, COLS, number_of_shifts);	Print(c_arr, ROWS, COLS); cout << endl;*/
	cout << delimiter;
}

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			arr[i][j] = 1 + rand() % 100;
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++) 
		{
			arr[i][j] = rand() % 100000;
			arr[i][j] /= rand() % 10;
		}	
	}
}
void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			arr[i][j] = float(rand() % 100000)/100;
	}
}
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			arr[i][j] = rand();
	}
}
template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j]<<"  ";
		}
		cout << endl;
	}
}
template<typename T>
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = 0;
	for (int i = 0; i < ROWS; i++) 
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
template<typename T>
double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
template<typename T>
T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}
	return max;
}
template<typename T>
T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > min)
			{
				min = arr[i][j];
			}
		}
	}
	return min;
}

//template<typename T>
//void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
//{
//	for (int i = 0; i < ROWS; i++) 
//	{
//		for (int j = 0; j < COLS; j++) 
//		{
//			
//}
