#include <iostream>
#include <windows.h>

using namespace std;

void start();

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    while (true) 
    {
        system("cls");

        cout << "\nЛабораторная 4\n" << endl;
        cout << "1. Условие задачи по варианту." << endl;
        cout << "2. Решение задачи по варианту" << endl;
        cout << "3. Выход из программы" << endl;

        int n;

        cout << "\nВведите номер пункта меню: ";
        cin >> n;

        switch (n)
        {
        case 1:
            system("cls");
            cout << "Даны натуральные числа n, а[1] ..., a[n]. Получить сумму членов последовательности а[1], ..., a[n], удовлетворяющих условию a[k] < (a[k-1] + a[k+1]) / 2." << endl;
            break;
        case 2:
            start();
            break;
        case 3:
            return 0;
        default:
            cout << "Пункта с номером " << n << " не существует!" << endl;
            break;
        }

        system("pause");
    }
}

// Данные для тестов                    - Результат
// 2, 3, 5,  7,  11, 13, 17, 19, 23, 29 - 3+7+13+19+23=65
// 3, 4, 6,  9,  10, 14, 15, 21, 22, 28 - 4+6+10+15+22=57
// 5, 7, 8,  11, 12, 18, 20, 21, 26, 27 - 8+12+21=41
// 6, 7, 10, 13, 16, 19, 22, 25, 27, 30 - 7+27=34
// 8, 9, 11, 15, 17, 24, 26, 31, 33, 36 - 9+11+17+26+33=96


void start() 
{
    system("cls");

    int n;

    cout << "Введите количество нат. чисел: ";
    cin >> n;

    int result = 0;

    int previous;
    int current;
    int next;

    cout << "Введите числа:" << endl;

    cin >> previous;
    cin >> current;

    for (int i = 2; i < n; i++)
    {
        cin >> next;

        float tmp = (previous + next) / 2.;

        if (current < tmp)
            result += current;

        previous = current;
        current = next;
    }

    cout << "Результат: " << result << endl;
}