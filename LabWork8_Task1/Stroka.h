#pragma once

#include <iostream>
#include <cstring>

using namespace std;

class Stroka {
private:
    char* str; // Указатель на динамическую память
    int size;  // Размер буфера

public:
    // Конструкторы
    Stroka(); // Конструктор по умолчанию
    Stroka(int capacity); // Конструктор с указанием размера буфера
    Stroka(const char* string); // Конструктор с параметром
    Stroka(const Stroka& s); // Копирующий конструктор

    // Деструктор
    ~Stroka();

    // Оператор присваивания
    Stroka& operator=(const Stroka& s);

    // Оператор сцепления строк
    Stroka operator+(const Stroka& s) const;

    // Оператор сравнения
    int operator==(const Stroka& s);

    // Перегрузка оператора вывода
    friend ostream& operator<<(ostream& os, const Stroka& s);

    // Перегрузка оператора ввода
    friend istream& operator>>(istream& is, Stroka& s);

    // Методы
    int dlina(); // Возвращает длину строки
    void vvod(); // Ввод строки
    void vyvod(); // Вывод строки
};
