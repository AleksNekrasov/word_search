﻿// word_search.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>


int main()
{
    std::string path;
    std::cout << "enter the path to the file: ";
    std::cin >> path;
    std::ifstream words;
    words.open(path);
    if (!words.is_open())
    {
        std::cout << "Error! the file did not open.";
    }
    else
    {
        std::cout << "Enter a search word: ";
        std::string search_word;
        std::cin >> search_word;   // искомое слово
        std::string temp;          // ввременная переменная для сравнения
        int end = 0;               // счетчик слов
        while (!words.eof())
        {
            words >> temp;
            if (temp == search_word)
            {
                end++;
            }
        }
        std::cout << end;
    } 




    words.close();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
