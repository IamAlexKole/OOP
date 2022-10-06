#include <iostream>
using namespace std;

class Diamond {
private:
    float a, b;
public:
    Diamond() {
        this->a = 0;
        this->b = 0;
    }
    Diamond(float a, float b){
        this->a = a;
        this->b = b;
    }
    void setA(float a){
        this->a = a;
    }
    void setB(float b){
        this->b = b;
    }
    float getA(){
        return a;
    }
    float getB(){
        return b;
    }
    void print_sqrt() {
        cout << "1st Diagonal = " << a << endl;
        cout << "2nd Diagonal = " << b << endl;
        cout << "Square = " << 0.5 * (a * b);
    }
};
int main() {
    Diamond diam(10, 15);
    diam.print_sqrt();
    return 0;
}

#include <iostream>
#include <cstdlib>
using namespace std;
int i;
class Array {
    float* m;
    int n;
public:
    Array(int k) {
        cout << "Constructor with parametr" << endl;
        n = k;
        m = new float[n];
        set_data();
    }
    ~Array() {
        delete m;
        cout << "\nDestructor." << endl;
    }
    void set_data() {
        for (i = 0; i < n; i++) {
            if (i % 2 == 0) {
                m[i] = i + 4.1;
            }
            else {
                m[i] = i - 1.0;
            }
        }
        output();
    }
    void output() {
        cout << "Kolichestvo elementov: " << endl;
        for (i = 0; i < n; i++) {
            cout << m[i] << " ";
        }
    }

    friend void sum(Array obj);
};
void sum(Array obj) {
    float sum = 0.0;
    cout << "\nDodatni element: " << obj.m << "\n";
    for (i = 0; i < obj.n; i++) {
        if (!(i % 2) == 0) {
            cout << obj.m[i] << " ";
            sum = sum + obj.m[i];
        }
    } cout << endl;
    cout << "Summa dodatnih elementiv: " << sum;
}
int main()
{
    Array arr(15);
    sum(arr);
    system("pause");
    return 0;
}