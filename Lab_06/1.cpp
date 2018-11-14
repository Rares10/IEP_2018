#include<iostream>
using namespace std;
const int SIZE = 3;
class Complex{
	int re, im;
	public:
	Complex() { re = im = 0; }
	Complex(int a, int b) {re = a; im =b;}
	Complex operator+(Complex c2);
	Complex operator-(Complex c2);
	void afisare();
};

Complex Complex::operator+(Complex c2)
{
	Complex temp;
	temp.re = re + c2.re; 
	temp.im = im + c2.im; 
	return temp;
}

Complex Complex::operator-(Complex c2)
{
	Complex temp;
	temp.re = re - c2.re; 
	temp.im = im - c2.im; 
	return temp;
}
void Complex::afisare()
{
	if (im > 0)
		cout << re <<"+"<<im<<"i"<<endl;
	else
		cout << re << im << "i" <<endl;
}
class Vector 
{
	int a[SIZE];
	public:
	Vector() {
	register int i;
	for(i=0; i<SIZE; i++) a[i] = i;
	}	
	int &operator[](int i);
};
// Provide range checking for Vector.
int &Vector::operator[](int i)
{
	if(i<0 || i> SIZE-1) 
	{
		cout << "Index value of "<< i << " is out-of-bounds.\n";
		exit(1);
	}
	return a[i];
}
int main()
{
	Complex c1(1, 2), c2(10, -10), rez;
	c1.afisare();
	c2.afisare();
	rez = c1 + c2; 
	rez.afisare();
	rez = c1 - c2;
	rez.afisare();
	Vector v;
	cout << v[2]<<endl;
	v[2] = 25; 
	cout << v[2]<<endl; 
	v[3] = 44; 
	return 0;
}




