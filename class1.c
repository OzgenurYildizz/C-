#include <iostream>
using namespace std;
class Eleman{
private:
    int no;
    string isim;
public:
    Eleman(){};
    Eleman(int ,string );
    void setIsim(string isim){
        this->isim=isim;
    }
    string getIsim()
    {
        return isim;
    }
    void setNo(int no){
        this->no=no;
    }
    int getNo()
    {
        return no;
    }
    void yazdir(){
        cout<<"isim: "<<isim<<endl<<"Numara: "<<no<<endl;
    }

};
Eleman::Eleman(int n,string i) {
    isim=i;
    no=n;
}

int main() {
    Eleman el(12,"ozge");
    el.yazdir();

    return 0;
}





