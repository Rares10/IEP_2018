#include<iostream>
#include<math.h>
using namespace std;

class Complex{
	int re, im;
	public:
	Complex() { re = im = 0; }
	Complex(int a, int b) {re = a; im =b;}
	Complex &operator=(const Complex &c2)
	{
		if (this == &c2) 
		{
			cout<<"Acelasi numar complex.."<<endl;
			return *this;
		}
		cout<<"Numar complex diferit la atribuire.."<<endl;
		this->re = c2.re;
		this->im = c2.im;
		return *this;
	}
	Complex &operator+=(const Complex &c2)
	{
		this->re += c2.re;
		this->im += c2.im;
		return *this;
	}
	void afisare()
	{
		if (im > 0)
			cout << re <<"+"<<im<<"i"<<endl;
		else
			cout << re << im << "i" <<endl;
	}	
};
class ModComplex : public Complex{
	public:
        float mod;    
        ModComplex(int re, int im):Complex(re,im)
        {
            mod = sqrt(re*re + im*im);
        }

	ModComplex& operator=(const ModComplex& c2) 
        {
		if (this == &c2)
	        {
			cout<<"Acelasi numar complex.."<<endl;
			return *this;
           	}
		Complex::operator=(c2);
		this->mod = c2.mod;
	}
	void afisare()
	{
		Complex::afisare();
		cout<<"Modulul este "<<mod<<endl;
	}	
};
int main()
{
	Complex c1(1, 2), c2(10, -10);
	ModComplex c3(5,6), c4(10,2);
	c1.afisare();
	c2.afisare();
	c1+=c2; 
	c1.afisare();
	c2=c1;
	c2.afisare();
	c1=c1;
	c3.afisare();
	c4.afisare();
	c3=c4;
	c3.afisare();
	return 0;
}




