#include <iostream>
#include <iomanip>
#include <time.h>
#include <Windows.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High);
void Print(int* a, const int size);
void Find(int* a, const int size, int& max);

void Create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i];
    cout << endl;
}

void Find(int* a, const int size, int& max)
{
    for (int i = 0; i < size; i++) 
    {
        if (a[i] % 2 == 0) {
            if (a[i] > max)
                max = a[i];
        }
    }
}

int main()
{
    SetConsoleOutputCP(1251);

    srand((unsigned)time(NULL));
    const int n = 5;
    int a[n];
    int max = 0;

    int Low = -10;
    int High = 100;

    Create(a, n, Low, High);
    cout << "Масив = "; Print(a, n);

    Find(a, n, max);
    cout << "Максимальний парний елемент = " << max << endl;

}
