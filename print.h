#pragma once
#include "Book.h"
void print() {
    setlocale(0, "");
    Book bi;
    string name = "";
    string number = "";
    string inf = "";

    system("cls");
    cout << "введите команду" << endl;
    cout << "1 - поиск " << endl;
    cout << "2 - удаление абонента" << endl;
    cout << "3 - добавление абонента" << endl;
    cout << "4 - список" << endl;
    cout << "5 - выход из программы" << endl;



    while (true) {
        if (_kbhit())
        {

            if (_getch() == '5') {
                break;
            }
            if (_getch() == '1') {
                cout << "фио: ";
                cin >> name;
                cout << endl;
                cout << " - - - - - - - - - - - - - -" << endl;
                bi.search(name);
            }
            else if (_getch() == '2') {
                cout << "фио: ";
                cin >> name;
                bi.del(name);
            }
            else if (_getch() == '3') {
                cout << "фио: ";
                cin >> name;
                cout << "номер: ";
                cin >> number;
                cout << "доп инфа: ";
                cin >> inf;
                bi.add(name, number, inf);
                cout << "жду команду основного меню" << endl;

            }
            else if (_getch() == '4') {
                bi.print();
            }

        }
    }
}