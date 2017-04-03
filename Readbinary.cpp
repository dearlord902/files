#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   	short int i = 0;
	float f = 0.0f;
	char c = 'a';
	ifstream test{"abc.bin", ios::binary};
		
	if (test)
		{
			test.read(reinterpret_cast<char*>(&i), sizeof(i));
			test.read(reinterpret_cast<char*>(&f), sizeof(f));
			test.read(reinterpret_cast<char*>(&c), sizeof(c));
			cout<<"The data "<<i<<" , "<<f<<" "<<c<<" were read from abc.bin"<<endl;
		}
	else
		cout<<"Error abc.bin didn't open"<<endl;
	
	test.close();
	 
  // cout<<a<<" "<<b<<" "<<c<<endl;//display data to console (i.e. as formatted chars)

   cout<<endl;
 
   return 0;
}
