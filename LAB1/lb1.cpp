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
        cout << "Square = " << a * b;
    }
};
int main() {
    Diamond diam(10, 15);
    diam.print_sqrt();
    return 0;
}