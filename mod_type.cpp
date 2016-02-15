#include <stdlib.h>
#include <iostream>

using namespace std;

int main()

{
  char a='a'; //1 bytes
  int a1=0; //4 bytes
  signed int b2=-10; //modificador tipo signed
  unsigned int c3=+10; //modificador tipo unsigned
  short int b=0;//2 bytes
  long int c=0;//4 bytes
  float d=0.5;
  double e=0.567890;
  bool f=true;
  cout <<"Lista de tipos de dados/modificadores e espaço ocupam memoria: " <<endl;
  cout << sizeof(a) << " bytes: " << " a:  " << (a) << "-char" <<endl;
  cout << sizeof(a1) << " bytes: " << " a1: " << (a1) << "-int" <<endl;
  cout << sizeof(b) << " bytes: " << " b: " << (b) << "-short int" <<endl;
  cout << sizeof(b2) << " bytes: " << " b2: " <<(b2)<< "-signed int"<<endl;
  cout << sizeof(c) << " bytes: " << " c: " << (c) << "-long int"<<endl;
  cout << sizeof(c3) << " bytes: " << " c3: " << (c3) << "-unsigned int"<<endl;
  cout << sizeof(d) << " bytes: " << " d: " << (d) << "-float"<<endl;
  cout << sizeof(e) << " bytes: " << " e: " << (e) << "-double"<<endl;
  cout << sizeof(f)<< " bytes: " << " f: " << (f) << "-bool"<<endl;
system ("pause");
return 0;
}