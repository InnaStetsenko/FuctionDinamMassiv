#include "include.h"

// ������� �� ��������� ������ ��� ������
void allocate_memory_dinmassiv(int**& ar, int height, int width)
{
    //  ��� ������� ��������� � ������� ���������� ����� �������� ������ ��� ������ ������ ���� ���
    // ������� ���������� ����������� ����������� ������
    for (int y = 0; y < height; y++) // �������� ������� �����: 0 1 2 3 4 (������� �����)
    {
        ar[y] = new int[width];
    }
}

// ������� ��������� ������ ���������� ������� � ��������� ���������
void random_fill_array_dinmassiv(int** ar, int height, int width, const int min, const int max)
{
    int k = max - min + 1;
    for (int y = 0; y < height; y++) // �������� ������� �����: 0 1 2 3 4 (������� �����)
    {
        // ������ ������ ���������� �������� ����� ���������� ����������� � ���������
        for (int x = 0; x < width; x++)
        {
            ar[y][x] = rand()% k + min;;
            
        }
        
    }  
}

// ������� ���������� �������� �������
void print_array_dinmassiv(int** ar, int height, int width)
{
    for (int y = 0; y < height; y++) // �������� ������� �����: 0 1 2 3 4 (������� �����)
    {
        // ������ ������ ���������� �������� ����� ���������� ����������� � ���������
        for (int x = 0; x < width; x++)
        {
            cout << ar[y][x] << "\t";
        }
        cout << "\n\n";
    }
}

//������� ������������ ������ �� �������
void free_memory_dinmassiv(int** ar)
{
    delete[] *ar;
}