/*
 Виконав: Колесніков КІ-20009Б
 Створити  клас «шайба» (правильний шестикутник), такий, що:
 a) його екземпляр містить розмір сторони a.
 b) його конструктор без параметра створює екземпляр зі значенням 0,а конструктор з параметрами створює екземпляр з відповідним значенням a.
 c) його методи дозволяють отримувати і присвоювати значення a та обчислювати значення площі виконуючи при цьому відповідні перетворення.
 d) операція «<<» перевантажена:  виводить на екран значення сторони і площі цієї фігури.
 e) операція «+» перевантажена:  отримує екземпляри двох шайб і повертає нову шайбу, площа якої дорівнює сумі площ цих двох шайб.
 Сторона нової шайби має бути перерахована.
*/
#include <iostream>

using namespace std;

class Hexagon
{
    float sidea;
    float sideb;
    float Toph;

    float area;

public:

    Hexagon()
    {
        sidea = 0;
        sideb = 0;
        Toph = 0;
        area = 0;
    }
    Hexagon(float a, float b, float h)
    {

        sidea = a;
        sideb = b;
        Toph = h;
        area = 0;
        calc();
    }
    void setSideA(float a)
    {
        sidea = a;
    }
    void setSideB(float b)
    {
        sideb = b;
    }
    void setTopH(float h)
    {
        Toph = h;
    }

    void calc()
    {
        area = (0.5 * (sidea + sideb) * Toph);
    }

    friend ostream &operator<<(ostream &t, Hexagon &obj)
    {
        t << "\nsidea\t" << obj.sidea << "\nsideb\t" << obj.sideb << "\nToph\t" << obj.Toph<< "\nArea\t" << obj.area  ;
        return t;
    }


    void getArea()
    {
        cout << "\n "<<area ;
    }
    void getSide()
    {
        cout << "\n "<<sidea ;
        cout << "\n "<<sideb ;
        cout << "\n "<<Toph ;
    }

    friend Hexagon operator + (Hexagon &s,Hexagon &c);
    friend Hexagon operator ++ (Hexagon &s);

};

Hexagon operator + (Hexagon &s,Hexagon &c)
{
    Hexagon temp;
    temp.sidea = s.sidea + c.sidea;
    temp.sideb = s.sideb + c.sideb;
    temp.Toph = s.Toph + c.Toph;
    temp.area = s.area + c.area;
    return temp;

}

Hexagon operator ++ (Hexagon &ss)
{
    Hexagon temp;
    temp.sidea = ss.sidea +1;
    temp.sideb = ss.sideb +1;
    temp.Toph = ss.Toph +1;
    return temp;
}
int main()
{
    Hexagon c;
    Hexagon c1;
    Hexagon a(7, 6, 4);
    Hexagon b(7, 4, 3);
    cout << a  ;
    c=a+b;
    c.getSide() ;
    c.getArea() ;
    c1=++c;
    c1.getSide();
}
