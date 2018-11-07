#include<iostream>
using namespace std;
class Persoana 
{
    public:
        Persoana (string nume, int varsta);
        string nume;
        int varsta;
};

Persoana::Persoana (string nume, int varsta)
:nume(nume),
 varsta(varsta)
 {}

int main()
{
    int x = 0;
    double d;
    const char *text = "Rares Gligor";
    cout<<"d = "; cin >> d;
    cout<<"x = "<<x<<" text = "<<text<<" d = "<<d<<endl;

    Persoana p1 ("Rares", 22);
    cout<<p1.nume<<" "<<p1.varsta<<endl;
    Persoana p2 ("Gligor", 21);
    cout<<p2.nume<<" "<<p2.varsta<<endl;
    Persoana p3(p2);
    cout<<p3.nume<<" "<<p3.varsta<<endl;
    p3 = p1;
    cout<<p3.nume<<" "<<p3.varsta<<endl;
    return 0;
}