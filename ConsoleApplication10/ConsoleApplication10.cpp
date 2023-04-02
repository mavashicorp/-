//Написать программу которая будет принимать у пользователя значения ФИО, дату рождения, знак задиака
//и выводить это все через лямбду

#include <iostream>
#include<string>
using namespace std;

void main()
{
    setlocale(LC_ALL, "Ru");
    // Запрос у пользователя ФИО, даты рождения и знака задиака
    string Name;
    cout << "Введите ФИО: ";
    getline(cin, Name);

    string Date;
    cout << "Введите дату рождения: ";
    getline(cin, Date);

    string Zodiac;
    cout << "Введите знак задиака: ";
    getline(cin, Zodiac);

    auto Viev{ [](auto FIO, auto Date, auto Zodiac) {cout << FIO << "\t" << Date << "\t" << Zodiac << endl; } };
    Viev(Name, Date, Zodiac);
}