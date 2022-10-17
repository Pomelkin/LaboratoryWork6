#include <iostream>
#include "Krrab.h"
using namespace std;

int main()
{
    int nconst,n=0;
    float k = 0;
    setlocale(LC_ALL, "Russian");
    cout << "Введите кол-во заданий ";
    cin >> nconst;
    while (n < nconst)
    {
        int num1, num2;
        num1 = gen();
        num2 = gen();
        k += ball(Proverka(Question(num1, num2), num1 * num2));
        n += 1;
    }
    cout << "/nВаша оценка " << mark(k, nconst);
}

