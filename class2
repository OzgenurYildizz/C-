#include <iostream>
using namespace std;
class Rasyonel{
private:
    int pay;
    int payda;
public:
    Rasyonel(int x,int y){
        pay=x;
        payda=y;
    }
    int payAl(){return pay;}
    int paydaAl(){return payda;}
    Rasyonel carp(Rasyonel& r);
};

Rasyonel Rasyonel::carp(Rasyonel &r) {
    int a=r.payAl();
    int b=r.paydaAl();

    return Rasyonel(pay*a, payda*b);
}

int main() {

    Rasyonel s(1,3),t(2,5);
    Rasyonel son=s.carp(t);
    cout<<s.payAl()<<"/"<<s.paydaAl();
    cout<<" = "<<son.payAl()<<"/"<<son.paydaAl()<<endl;
    
    return 0;
}





