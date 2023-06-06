//Контрольна робота
//1) Компілятор - програма, яка переводить текст написаний на мові програмування в машинний код.
//Компілятор перетворює початковий код повністю, операційна система може виконати самостійно.
//Інтерпретатор - виконує покомандну, посткрокову обробку, перетворення у машинні коди та виконання програми.
//Інтерпретатор читає програму і взаємодіючи з операційною системою виконує її.
//2) Змінна - іменована область пам'яті, у якій зберігаються дані визначеного типу.
//Константа - фіксоване значення, що не може змінюватися впродовж виконання всієї програми.
//int a = 25;
//const int b = 125;
//3) Типи даних :
//-int(цілочисельний);
//-short(короткі цілі числа);
//-long(довгі цілі числа);
//-long long(довгі цілі числа);
//-char(символьний);
//-float(дійсний);
//-double(дійсний з подвійною точністю);
//-bool(логічний);
//4) Результат: 8
//5)Оператори розгалуження :
//-if;
//-switch;
//6) enum - дозволяє перераховувати;
//enum colors { Red = 1, Orange = 2, Yellow = 3, Green = 4, Azure = 5, Blue = 6, Violet = 7 };
//7)Види циклів :
//-for (з лічильником);
//int n;
//cout << " Enter number: ";
//cin >> n;
//int sum = 0;
//for (; n <= 500; n++)
//{
//	sum = sum + n;
//}
//cout << " Sum of numbers: " << sum << endl;
//-while (з передумовою);
//int numb = 0;
//while (numb < 100)
//{
//	++numb;
//	cout << numb << " ";
//}
//- do while (з післяумовою);
//int sum_m = 0;
//int m = 7;
//int numbers_m;
//do
//{
//	cout << " Enter number: ";
//	cin >> numbers_m;
//	--m;
//	sum_m = sum_m + numbers_m;
//} while (m > 0);
//cout << " Sum of numbers: " << sum_m << endl << endl;
//8) Масив - набір змінних одного типу, які розрізняються порядковим номером.
//const int size = 5;
//int A[size];
//for (int i = 0; i < size; i++)
//{
//	A[i] = rand() % 20;
//}
//9) Ініціалізувати даними двовимірний масив :
//-Перший варіант :
//const int row = 5;
//const int col = 5;
//int arr[row][col];
//for (int i = 0; i < row; i++)
//{
//	for (int j = 0; j < col; j++)
//	{
//		arr[i][j] = rand() % 50;
//	}
//	cout << endl;
//}
//- Другий варіант :
//const int row = 5;
//const int col = 5;
//int arr[row][col] = { {1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5} };
//10) г - помилка на етапі компіляції.Для констант, що визначають розмір масиву треба застосувати тип даних int.
//11)
//#include <iostream>
//#include<iomanip>
//using namespace std;
//void main()
//{
//	const int Size = 10;
//	int A[Size] = { 0 };
//	for (int i = 0; i < Size; i++)
//	{
//		A[i] = rand() % 54 + 7;
//		cout << setw(4) << A[i] << " ";
//	}
//	cout << endl;
//	int c;
//	c = A[1];
//	A[1] = A[2];
//	A[2] = c;
//	for (int i = 0; i < Size; i++)
//	{
//		cout << setw(4) << A[i] << " ";
//	}
//}
//12)
//#include <iostream>
//#include<iomanip>
//using namespace std;
//void main()
//{
//	const int row = 10;
//	const int col = 10;
//	int B[row][col];
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			B[i][j] = rand() % 54 + 7;
//			cout << setw(4) << B[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//	const int size = 10;
//	int Z[size] = { 0 };
//	for (int i = 0; i < size; i++)
//	{
//		Z[i] = B[0][i];
//	}
//	for (int i = 0; i < size; i++)
//	{
//		B[0][i] = B[1][i];
//	}
//	for (int i = 0; i < size; i++)
//	{
//		B[1][i] = Z[i];
//	}
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			cout << setw(4) << B[i][j] << " ";
//		}
//		cout << endl;
//	}
//}