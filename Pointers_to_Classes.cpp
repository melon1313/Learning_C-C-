#include<iostream>
using namespace std;

class CREctangle{
    private:
        int weight;
        int hight;
    
    public:
        void set_value(int, int);
        int get_area(void){ return (weight * hight);}
};

void CREctangle::set_value(int a, int b){
    weight = a;
    hight = b;
}

int main(){
    CREctangle a, *b, *c;
    CREctangle *d = new CREctangle[2];

    b = new CREctangle;
    c = &a;

    a.set_value(3, 4);
    b -> set_value(5, 6);
    d -> set_value(7, 8);
    d[1].set_value(8, 9);

    cout << a.get_area() << endl;
    cout << b -> get_area() << endl;
    cout << c -> get_area() << endl;
    cout << d[0].get_area() << endl;
    cout << d[1].get_area() << endl;

    
}