#include "include.h"

// функци€ по выделению пам€ти под массив
void allocate_memory_dinmassiv(int**& ar, int height, int width)
{
    //  дл€ каждого указател€ в массиве указателей нужно выделить пам€ть под строку данных типа инт
    // перебор указателей естественно выполн€етс€ циклом
    for (int y = 0; y < height; y++) // значени€ игреков будут: 0 1 2 3 4 (индексы строк)
    {
        ar[y] = new int[width];
    }
}

// функци€ заполн€ет массив случайными числами в указанном диапазоне
void random_fill_array_dinmassiv(int** ar, int height, int width, const int min, const int max)
{
    int k = max - min + 1;
    for (int y = 0; y < height; y++) // значени€ игреков будут: 0 1 2 3 4 (индексы строк)
    {
        // каждую €чейку одномерных массивов интов необходимо просмотреть и заполнить
        for (int x = 0; x < width; x++)
        {
            ar[y][x] = rand()% k + min;;
            
        }
        
    }  
}

// функци€ показывает элементы массива
void print_array_dinmassiv(int** ar, int height, int width)
{
    for (int y = 0; y < height; y++) // значени€ игреков будут: 0 1 2 3 4 (индексы строк)
    {
        // каждую €чейку одномерных массивов интов необходимо просмотреть и заполнить
        for (int x = 0; x < width; x++)
        {
            cout << ar[y][x] << "\t";
        }
        cout << "\n\n";
    }
}

//функци€ высвобождает пам€ть от массива
void free_memory_dinmassiv(int** ar)
{
    delete[] *ar;
}