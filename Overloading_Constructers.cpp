#include<iostream>
using namespace std;

class CRectangle{
    private:
        int weight;
        int hight;

    public:
        CRectangle(int, int);
        CRectangle();
        int get_value(void){return (weight * hight);}
};

CRectangle::CRectangle(){
    weight = 5;
    hight = 5;
}

CRectangle::CRectangle(int a, int b){
    weight = a;
    hight = b;
}

int main(){
    CRectangle recta;
    CRectangle rectb(7, 8);
    cout << recta.get_value() << endl;
    cout << rectb.get_value() << endl;

    return 0;
}

