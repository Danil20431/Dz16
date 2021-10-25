#include <iostream>

using namespace std;

long long int sumArray() // 1
{
    const int size = 3;
    int array[size][size];
    srand(time(NULL));
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            array[i][j] = rand() % 10 + 1;
    int summa=0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            summa += array[i][j];

    return summa;
}

int maxArray() // 3
{
    const int size = 3;
    int array[size];
    srand(time(NULL));
    for (int i = 0; i < 3; i++)
        array[i] = rand() % 10 + 1;
    int max = array[0];
    for (size_t i = 0; i < size; ++i)
    {
        if (max < array[i])
            max = array[i];
    }
    return max;
}

int minArray() // 4
{
    const int size = 3;
    int array[size];
    srand(time(NULL));
    for (int i = 0; i < 3; i++)
        array[i] = rand() % 10 + 1;
    int min = array[0];
    for (size_t i = 0; i < size; ++i)
    {
        if (min > array[i])
            min = array[i];
    }
    return min;
}

int main()
{
    sumArray();

	return 0;
}