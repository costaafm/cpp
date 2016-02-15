
#include <iostream>

using namespace std;

class Complex
{
    private:
       int real;
       int imag;
    public:
       Complex(): real(0), imag(0) { }
       void Read()
        {
           cout<<"Enter real and imaginary number respectively:"<<endl;
           cin>>real>>imag;
        }
        void Add(Complex comp1,Complex comp2)
        {
            real=comp1.real+comp2.real;
 /* Here, real represents the real data of object c3 because this function is called using code c3.add(c1,c2); */
            imag=comp1.imag+comp2.imag;
 /* Here, imag represents the imag data of object c3 because this function is called using code c3.add(c1,c2); */
        }
        void Display()
        {
            cout<<"Sum="<<real<<"+"<<imag<<"i";
        }
};

int main()

{
    Complex c1,c2,c3;
    c1.Read();
    c2.Read();
    c3.Add(c1,c2);
    c3.Display();
    return 0;
}