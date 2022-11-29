/*
 Виконав: Колесніков КІ-20009Б
 1. Визначити ієрархію класів (відповідно до варіанта).
    З переліку  класів вибрати один, який буде стояти на чолі ієрархії. Переважно це має бути абстрактний клас.
 2. Реалізувати класи. Створити поліморфну функцію (віртуальну або чисто віртуальну) відповідно варіанту.
 3. Написати демонстраційну програму, в якій створюються об'єкти різних класів і поміщаються в масив або в список,
    після чого масив або список проглядається через виклик поліморфної функції.
 4. Якщо базовий клас не абстрактний, зробити відповідну поліморфну функцію не віртуальною і подивитися, що буде.
    Пояснити отриманий результат
 Task:
 Двигун, вічний двигун (perpetuum mobile), двигун внутрішнього згоряння, електродвигун.
 Поліморфна функція для двигуна внутрішнього згоряння виводить робочий об'єм двигуна (л), потужність (л.с) і витрата бензину на 100 км.,
 для електродвигуна - потужність (квт), напруга (в) і кількість фаз,
 ну а для perpetuum mobile - придумайте самі, щоб показати, що такий не існує.
 */
#include <iostream>
#include <windows.h>
using namespace std;

// Визначаємо базовий клас Товар
class Engine
{
public:
    virtual void GetInfo()=0;
};

class InternalEngine : public Engine
{
public:
    void GetInfo()
    {
        cout<<"Lamborghini Huracan"<<endl;
        cout<<"Engine capacity:	7.0l V12 "<<endl;
        cout<<"Power: 800l/s \n"<<endl;
    }
};

class ElectroEngine: public Engine
{
public:
    void GetInfo()
    {
        cout<<"Tesla Model S"<<endl;
        cout<<"Power: 761kWt"<<endl;
        cout<<"Number of phases: 3\n"<<endl;
    }
};

class EternalEngine: public Engine
{
public:
    void GetInfo()
    {
        cout<<"Perpetuum mobile"<<endl;
        cout<<"Doesn't exist"<<endl;
    }
};

int main()
{
    Engine *A[3];
    InternalEngine  B; ElectroEngine C; EternalEngine D;
    A[0] = &B;
    A[1] = &C;
    A[2] = &D;

    for(int i=0; i<3; i++)
        A[i]->GetInfo();
}
