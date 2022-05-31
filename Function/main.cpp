#include<iostream>
using namespace std;

#define CLASS_WORK
//#define CLASS_WORK1
//#define CLASS_WORK2

#if defined CLASS_WORK

int Add(int a, int b);  //прототип (объявление) функции - function declaration
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);
double Avg(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "введите два числа:"; cin >> a >> b;
	int c = Add(a, b); //вызов функции (function call) - 
	// - использование ранее написанной функции
	cout << a << "+" << b << "=" << c << endl;
	cout << a << "-" << b << "=" << Sub(a, b) << endl;
	cout << a << "*" << b << "=" << Mul(a, b) << endl;
	cout << a << "/" << b << "=" << Div(a, b) << endl;
	cout << a << "+" << b << "/2" << "=" << Avg(a, b) << endl;
}
int Add(int a, int b)  //реализация (определение функции) - function definition
{
	//addition
	int c = a + b;
	return c;
}
int Sub(int a, int b)
{
	//subtraction
	return a - b;
}
int Mul(int a, int b)
{
	//multiplication
	return a * b;
}
double Div(int a, int b)
{
	//division
	return (double)a / b;
}
double Avg(int a, int b)
{
	//
	return (double)(a + b) / 2;
}

#endif

#if defined CLASS_WORK1

double length(double a1, double a2, double b1, double b2);

void main()
{
	setlocale(LC_ALL, "");
	double a1, a2, b1, b2;
	cout << "введите 4 числа:"; cin >> a1 >> a2 >> b1 >> b2;
	double len= length(a1, a2, b1, b2);
	cout << "a1 = "; cin >> a1;
	cout << "a2 = "; cin >> a2;
	cout << "b1 = "; cin >> b1;
	cout << "b2 = "; cin >> b2;
	cout << "length = " << len << endl;		
}
double length(double a1, double a2, double b1, double b2)
{
	len = sqrt((a1 - a2) * (a1 - a2)) + ((b1 - b2) * (b1 - b2));
	return len;
}


#endif

#if defined CLASS_WORK2

#define delimiter "\n_______________________________________________________\n"

const int ROWS = 3;
const int COLS = 5;

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T> 
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

void main()
{
	setlocale(LC_ALL, "");

	int arr[ROWS][COLS];
	FillRand(arr, ROWS, COLS);
	Print(arr, ROWS, COLS);
	
	cout << delimiter;

	double d_arr[ROWS][COLS];
	FillRand(d_arr, ROWS, COLS);
	Print(d_arr, ROWS, COLS);

	cout << delimiter;

	double f_arr[ROWS][COLS];
	FillRand(f_arr, ROWS, COLS);
	Print(f_arr, ROWS, COLS);

	cout << delimiter;

	char c_arr[ROWS][COLS];
	FillRand(c_arr, ROWS, COLS);
	Print(c_arr, ROWS, COLS);
}

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			arr[i][j] = 1 + rand() % 10;
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{ 
			arr[i][j] = rand() % 10000;
			arr[i][j] /= 100;
		}					
	}
}
void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS)

{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{ 
			arr[i][j] = rand() % 100;
			arr[i][j] /= 10;
		}	
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
		for (int j=0; j<COLS; j++)
		{
			cout << arr[i][j] << endl;
		}
		cout << endl;
	}
}




#endif