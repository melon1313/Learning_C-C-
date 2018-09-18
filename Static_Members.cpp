#include <iostream>
using namespace std;

class CStatic{
    public:
        static int n;
        CStatic(){n++;};
        ~CStatic(){n--;};
};

int CStatic::n = 0;

int main(){
    CStatic a;
    CStatic b[5];
    CStatic *c = new CStatic;
    cout << a.n << endl;

    delete c;
    cout << a.n << endl;
    cout << CStatic::n << endl;
    
    return 0;
}