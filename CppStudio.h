#pragma once
#include "bibleh.h"
class CppStudio
{
private: // ������������ ������� private
    string name, // ����
        number, // �����
        inf; // ���
public: // ������������ ������� public
    CppStudio(string name, string number, string inf) {
        this->name = name;
        this->number = number;
        this->inf = inf;
    }
    bool equalname(string name) {
        bool found = this->name == name;
        return found;
    }
    void Set(string name, string number, string inf) {

    }
    string getname() // ���������� ������� ����
    {
        return name;
    }
    string getnumber() // ���������� ������� ����
    {
        return number;
    }
    string getinf() // ���������� ������� ����
    {
        return inf;
    }

}; // ����� ���������� ������ CppStudio
