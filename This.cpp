#include <iostream>
using namespace std;

class CThis{
    public:
        int isitem(CThis &param);
};

int CThis::isitem(CThis &param){
    if(&param == this) return 1;
    else return 0;
}

int main(){
    CThis a;
    CThis *b = &a;

    if(b -> isitem(a)) cout << "YES!!!" << endl;

    return 0;
}