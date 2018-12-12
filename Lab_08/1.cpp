#include<iostream>
#include<memory>
using namespace std;
class Persoana 
{
    public:
	string nume;
        int varsta;
        Persoana (string nume, int varsta){ this->nume = nume; this->varsta = varsta;}   
	static Persoana *make_persoana(string nume, int varsta);  
};

Persoana *Persoana::make_persoana(string nume, int varsta)
{
  return new Persoana(nume, varsta);
}

void f1(string nume, int varsta)
{
	Persoana *p3 = Persoana::make_persoana(nume, varsta);
	cout<<p3->nume<<" "<<p3->varsta<<endl;
	delete p3;	
	cout<<p3->nume<<" "<<p3->varsta<<endl;
}
void f2()
{
	auto_ptr<Persoana> p3(Persoana::make_persoana("Andreea", 24));
	cout<<p3->nume<<" "<<p3->varsta<<endl;
	auto_ptr<Persoana> p4(p3);
	cout<<p4->nume<<" "<<p4->varsta<<endl;
	p3=p4;
	cout<<p4->nume<<" "<<p4->varsta<<endl;
}
void f3()
{
	shared_ptr<Persoana> p3(Persoana::make_persoana("Ioana", 28));
	cout<<p3->nume<<" "<<p3->varsta<<endl;
	shared_ptr<Persoana> p4(p3);
	cout<<p3->nume<<" "<<p3->varsta<<endl;
	cout<<p4->nume<<" "<<p4->varsta<<endl;
}
int main()
{
	Persoana p1 ("Rares", 22);
	cout<<p1.nume<<" "<<p1.varsta<<endl;
	Persoana p2 ("Gligor", 21);
	cout<<p2.nume<<" "<<p2.varsta<<endl;
	//f1("Andrei", 30);
	//f2();
	f3();
	return 0;
}
