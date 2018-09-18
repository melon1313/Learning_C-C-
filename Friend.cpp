#include <iostream>
using namespace std;

class CRectangle{
    private:
        int weight, hight;
    
    public:
        void set_values(int, int);
        int cal_area(void){return (weight * hight);}
        friend CRectangle duplicate(CRectangle); 
};

void CRectangle::set_values(int a, int b){
    weight = a;
    hight = b;
}

CRectangle duplicate(CRectangle a){
    CRectangle temp;
    temp.weight = a.weight * 2;
    temp.hight = a.hight * 2;
    return temp;
}

int main(){
    CRectangle recta, rectb;
    recta.set_values(3, 4);
    rectb = duplicate(recta);
    cout << rectb.cal_area() << endl;

    return 0;
}