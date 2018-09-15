#include <iostream>
using namespace std;

class CVector{
    public:
        int x, y;
        CVector(){x = 0; y = 0;}
        CVector(int, int);
        CVector operator+(CVector);
};

CVector::CVector(int a, int b){
    x = a;
    y = b;
}

CVector CVector::operator+(CVector a){
    CVector temp;
    temp.x = x + a.x;
    temp.y = y + a.y;
    return temp;
}


int main(){
    CVector a(3, 4);
    CVector b(1, 2);
    CVector c;
    
    c = a + b;
    cout << "(" << c.x << "," << c.y << ")" << endl;  

    return 0;
}