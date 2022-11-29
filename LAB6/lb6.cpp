/*
 Виконав: Колесніков КІ-20009Б

*/
#include <iostream>
#include <windows.h>
using namespace std;

// Визначаємо базовий клас Товар
class Goods
{
    int price;
    string manufacturer;
    string category; // категорія
public:
    void set_price(int num) { price = num; }
    int get_price() { return price; }
    void set_category(string text) { category = text; }
    string get_category() { return category; }
    void set_manufacturer(string text) { manufacturer = text; }
    string get_manufacturer() { return manufacturer; }
};

// Визначаємо клас іграшка
class Toy : public Goods
{
    string toytype; // категорія іграшки
public:
    Toy(){string toytype="";}
    ~Toy(){}
    void set_toytype(string text) { toytype = text; }
    string get_toytype() { return toytype; }
    void show ();
};
// Визначаємо клас продукт
class Product : public Goods
{
    string producttype; // категорія продуктку
public:
    Product(){string producttype="";}
    ~Product(){}
    void set_producttype(string text) { producttype = text; }
    string get_producttype() { return producttype; }
    void show ();
};
// Визначаємо клас молочний продукт
class MilkProduct : public Goods
{
    int date;
    string milkproducttype; // категорія продуктку
public:
    MilkProduct(){string milkproducttype="";}
    ~MilkProduct(){}
    void set_date(int num) { date = num; }
    int get_date() { return date; }
    void set_milkproducttype(string text) { milkproducttype = text; }
    string get_milkproducttype() { return milkproducttype; }
    void show ();
};

void Toy::show()
{
    cout<<"Category of good: "<< get_category()  <<endl;
    cout<<"Type: "<<  toytype  <<endl;
    cout<<"Manufacturer: "<<  get_manufacturer() <<endl;
    cout<<"Price "<< get_price()  <<" uah"<<endl<<endl;
}
void Product::show()
{
    cout<<"Category of good: "<< get_category()    <<endl;
    cout<<"Type: "<<  producttype  <<endl;
    cout<<"Manufacturer: "<< get_manufacturer()   <<endl;
    cout<<"Price "<< get_price()  <<" uah"<<endl<<endl;
}
void MilkProduct::show()
{
    cout<<"Category of good: "<<  get_category()   <<endl;
    cout<<"Type: "<<  milkproducttype  <<endl;
    cout<<"Manufacturer: "<<  get_manufacturer() <<endl;
    cout<<"Date of manufacture: "<<  date  <<endl;
    cout<<"Price "<< get_price()  <<" uah"<<endl<<endl;
}
int main()
{
    if(true){
        SetConsoleOutputCP(1251);

        Goods f;

        Toy a;
        Product b;
        MilkProduct c;

        a.set_category("Toys");
        a.set_toytype("ToyCar");
        a.set_manufacturer("China");
        a.set_price(900);

        b.set_category("Product");
        b.set_producttype("Mivina");
        b.set_manufacturer("Ukraine");
        b.set_price(10);

        c.set_category("Milk product");
        c.set_milkproducttype("Cheese");
        c.set_manufacturer("Ukraine");
        c.set_date(25092022);
        c.set_price(10);

        a.show();
        b.show();
        c.show();
    }
}
