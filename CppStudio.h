#pragma once
#include "bibleh.h"
class CppStudio
{
private: // спецификатор доступа private
    string name, // день
        number, // мес€ц
        inf; // год
public: // спецификатор доступа public
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
    string getname() // отобразить текущую дату
    {
        return name;
    }
    string getnumber() // отобразить текущую дату
    {
        return number;
    }
    string getinf() // отобразить текущую дату
    {
        return inf;
    }

}; // конец объ€влени€ класса CppStudio
