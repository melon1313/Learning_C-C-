#include<iostream>
using namespace std;

class Rectangle{
    private:
        int weight;
        int hight;
    
    public:
        void set_value(int, int);
        int get_area(void){return (weight * hight);}
};

void Rectangle::set_value(int a, int b){
    weight = a;
    hight = b;
}

int main(){
    Rectangle a, *b, *c;
    Rectangle *d = new Rectangle[2];
    
    b = new Rectangle;
    c = &a;

    a.set_value(3, 4);
    b -> set_value(4, 5);
    d -> set_value(5, 6);
    d[1].set_value(6, 7);

    cout << a.get_area() << endl;
    cout << b -> get_area() << endl;
    cout << c -> get_area() << endl;
    cout << d[0].get_area() << endl;
    cout << d[1].get_area() << endl;

    return 0;
}