#pragma once
#include "CppStudio.h"
class Book {
private:
    vector<CppStudio>books;
public:
    void print() {
        for (size_t i = 0; i < books.size(); i++)
        {
            cout << "���: " << books[i].getname() << " \n" << "�����: " << books[i].getnumber() << "\n" << "����: " << books[i].getinf() << endl;
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
                cout << "���: " << book.getname() << endl;
                cout << "�����: " << book.getnumber() << endl;
                cout << "����: " << book.getinf() << endl;
                cout << "----------------------------" << endl;
            }
        }

        if (!found)
        {
            cout << "������������ �� ������" << endl;
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
