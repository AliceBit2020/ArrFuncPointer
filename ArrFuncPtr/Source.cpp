#include <iostream>
#include <functional>
using namespace std;

bool isEven(int);
bool isPositive(int);
void PrintCondition(function <bool(int)> condition, int numbers[], int n);

/////дз
///не парні , від'ємні, кратні 3, кратні 3 і 2 одночасно



////меню даєте вибір 1- парні, 2- непарні.....
////   PrintCondition(condition_arr[choice-1], nums, n);    switch не потрібен

int main()
{
    int nums[] = { -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5 };
    int n = sizeof(nums) / sizeof(nums[0]);

    cout << "Even numbers: " << endl;
    PrintCondition(isEven, nums, n);

    cout << "Positive numbers: " << endl;
    PrintCondition(isPositive, nums, n);



    ////////Массив указателей на функцию

    /*function <bool(int)> condition_arr[2] = { isEven,isPositive };


    cout << "Even numbers: " << endl;
    PrintCondition(condition_arr[0], nums, n);

    cout << "Positive numbers: " << endl;
    PrintCondition(condition_arr[1], nums, n);




    int choice;
    cout << R"(Make your choice: 
     1. Even numbers
     2. Positive numbers      
        )";
    PrintCondition(condition_arr[choice-1], nums, n);*/

    return 0;
}
bool isEven(int x)
{
    
    return x % 2 == 0;
}
bool isPositive(int x)
{
    return x > 0;
}

///Універсальна функція

void PrintCondition(function<bool(int)> condition, int numbers[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (condition(numbers[i]))//если элемент массива соответствует условию, то его выводим на экран. Условие condition зависит от того какую функцию проверки условия мы передадим
        {
            cout << numbers[i] << "\t";
        }

    }
    cout << endl;
}

/////////////////////////////////////////////////////Могли бі писать отдельніе функции, для каждого варианта, НО не будем так делать

void PrintEven( int numbers[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (isEven(numbers[i]))//если элемент массива соответствует условию, то его выводим на экран. Условие condition зависит от того какую функцию проверки условия мы передадим
        {
            cout << numbers[i] << "\t";
        }

    }
    cout << endl;
}


void PrintPositive(int numbers[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (isPositive(numbers[i]))//если элемент массива соответствует условию, то его выводим на экран. Условие condition зависит от того какую функцию проверки условия мы передадим
        {
            cout << numbers[i] << "\t";
        }

    }
    cout << endl;
}