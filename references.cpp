#include <stdio.h>
#include <stdlib.h>

 void multiply_by_two(int parameter)
{
parameter=parameter*2;
}

int main()
{
  int x{1};
  cout<<"x value:"<<x<<endl;
  int y{x}; // y is a reference to x and is a copy of x
  cout<<"y value copied x:"<<y<<endl;
  y=2;
  cout<<"y value:"<<y<<endl;
  int& xref{x};
 cout<<"xref value:"<<xref<<endl;
  x=2;
  cout<<"x value:"<<x<<endl;
  xref=3;
  cout<<"xref value:"<<xref<<endl;

int z{1};
multiply_by_two(z);

//int& uninit;
int& zref{z};
cout<<"zref value:"<<zref<<endl;
  
int const& zrefconst{z};
cout<<"zrefconst value:"<<zrefconst<<endl;
  
zref=2;
//xrefconst=3;
  
return 0;
}
