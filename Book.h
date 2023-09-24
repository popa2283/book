#pragma once
#include "CppStudio.h"
class Book {
private:
    vector<CppStudio>books;
public:
    void print() {
        for (size_t i = 0; i < books.size(); i++)
        {
            cout << "ФИО: " << books[i].getname() << " \n" << "Номер: " << books[i].getnumber() << "\n" << "инфа: " << books[i].getinf() << endl;
        }
    }
    void add(string name, string number, string inf) {
        CppStudio book(name, number, inf);
        books.push_back(book);
    }
    void search(string name) {
        bool found = false;

        for (vector<CppStudio>::iterator iter = books.begin(); iter != books.end(); iter++)
        {
            CppStudio book = *iter;

            if (book.equalname(name))
            {
                found = true;
                cout << "ФИО: " << book.getname() << endl;
                cout << "Номер: " << book.getnumber() << endl;
                cout << "инфа: " << book.getinf() << endl;
                cout << "----------------------------" << endl;
            }
        }

        if (!found)
        {
            cout << "пользователь не найден" << endl;
        }
    }
    void del(string name) {
        int idx = 0;
        for (vector<CppStudio>::iterator iter = books.begin(); iter != books.end(); iter++)
        {
            CppStudio book = *iter;
            if (book.equalname(name))
            {
                this->books.erase(this->books.begin() + idx);
                break;
            }
            idx++;
        }
    }
};
