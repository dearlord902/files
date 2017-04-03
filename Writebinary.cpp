#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   	short int i = -6730;
	float f = 68.123;
	char c = 'J';
	ofstream test{"abc.bin", ios::binary};
		
	if (test)
		{
			test.write(reinterpret_cast<char*>(&i), sizeof(i));
			test.write(reinterpret_cast<char*>(&f), sizeof(f));
			test.write(reinterpret_cast<char*>(&c), sizeof(c));
			//cout<<"The data "<<i<<" , "<<f<<" "<<c<<" were read from abc.bin"<<endl;
		}
	else
		cout<<"Error abc.bin didn't open"<<endl;
	
	test.close();
	 
  // cout<<a<<" "<<b<<" "<<c<<endl;//display data to console (i.e. as formatted chars)

   cout<<endl;
 
   return 0;
}
