#include <iostream>
#include <string>

using namespace std;

class Array
{
    int size;
    int *array;
    int sum=0;
public:
    Array(int size);
    Array(const Array &obj);
    ~Array();
    void Count();
};

Array::Array(const Array &obj)
{
    cout << "\n";
    array = new int[obj.size];
    for (int i = 0; i < obj.size; i++){
        array[i]=obj.array[i];
        size=obj.size;
        cout << obj.array[i] << " " << endl;
    }
}

Array::Array(int a)
{
    size = a;
    array = new int[size];
    for(int i = 0; i < size; ++i){
        if (i%2)
            array[i] = rand() % 5 +5 ;
        else
            array[i] = rand() % 5 -2 ;

        cout << array[i] << " " << endl;
    }
}

Array::~Array()
{
    delete[]array;
}

void Array::Count()
{
    for(int i = 0; i < size; ++i) {
        if (i % 2 == 0)
            sum += array[i];
    }
    cout << "\nSum of even numbers: " << sum << endl;
}

int main()
{
    if(true)
    {
        Array a(9);
        a.Count();
        Array b=a;
    }
}