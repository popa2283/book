#pragma once
#include "Book.h"
void print() {
    setlocale(0, "");
    Book bi;
    string name = "";
    string number = "";
    string inf = "";

    system("cls");
    cout << "������� �������" << endl;
    cout << "1 - ����� " << endl;
    cout << "2 - �������� ��������" << endl;
    cout << "3 - ���������� ��������" << endl;
    cout << "4 - ������" << endl;
    cout << "5 - ����� �� ���������" << endl;



    while (true) {
        if (_kbhit())
        {

            if (_getch() == '5') {
                break;
            }
            if (_getch() == '1') {
                cout << "���: ";
                cin >> name;
                cout << endl;
                cout << " - - - - - - - - - - - - - -" << endl;
                bi.search(name);
            }
            else if (_getch() == '2') {
                cout << "���: ";
                cin >> name;
                bi.del(name);
            }
            else if (_getch() == '3') {
                cout << "���: ";
                cin >> name;
                cout << "�����: ";
                cin >> number;
                cout << "��� ����: ";
                cin >> inf;
                bi.add(name, number, inf);
                cout << "��� ������� ��������� ����" << endl;

            }
            else if (_getch() == '4') {
                bi.print();
            }

        }
    }
}