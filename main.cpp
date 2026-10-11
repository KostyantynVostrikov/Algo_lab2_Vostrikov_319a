#include <iostream>

#include <cmath> //підключення бібліотеки cmath

using namespace std;

int main ()
{// Завдання intenger 1
  int L, res; //декларація змінних

  cout << "Enter the distance in santimeters:" <<endl; cin >> L; //введення даних

  res = L / 100;//підрахунок

  cout <<"Number of full meters:" << res <<endl;//виведення результатів

  //Завдання Boolean 8

  int A, B; //декларація змінних

    cout << "Enter 2 numbers: "; cin >> A >> B; // введення даних

    bool result = (A % 2 != 0) && (B % 2 != 0); // виконання лоігчної операції

    cout << "Result: " << boolalpha << result << endl; // виведення результату

  //Завдання Eqation 42

    double x, num, denom, sin4, y;

    // введення даних
    cout << "Real argument x = ";
    cin >> x;

    // підрахунок
    num = tan(fabs(2 * x * x + 5 * x)) - log(fabs(x - 2.5)) / log(5); // чисельник

    sin4 = pow(sin(x * x * x), 4); // проміжна змінна

    denom = sqrt(fabs(sin4 + (1.0 / 5.0) * log(fabs(x * x - 2.5)) / log(5))); // знаменник
    y = num / denom;

    // виведення результату
    cout << "Function y = " << y << endl;

  return 0;
}