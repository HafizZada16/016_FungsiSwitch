#include <iostream>
using namespace std;

int bilA, bilB;

void input()
{
    cout << "Masukkan bilangan Pertama = ";
    cin >> bilA;
    cout << "Masukkan bilangan Kedua = ";
    cin >> bilB;
}

int penjumlahan(int a, int b)
{
    return a + b;
}

int pengurangan(int a, int b)
{
    return a - b;
}

int perkalian(int a, int b)
{
    return a * b;
}

float pembagian(float a, float b)
{
    return a / b;
}

int main()
{
    cout << "Kalkulator Sederhana" << endl;
    cout << "====================" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "1. Pengurangan" << endl;
    cout << "1. Perkalian" << endl;
    cout << "1. Pembagian" << endl;
}

