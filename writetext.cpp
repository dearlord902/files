#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';

	ofstream test{"abc.txt"};
	
	if (test)
		test <<a<<" "<<b<<" "<<c<<endl;
	else
		cout<<"Error abc.txt didn't open"<<endl;
		
	test.close();
	 
   cout<<a<<" "<<b<<" "<<c<<endl;//display data to console (i.e. as formatted chars)

   cout<<endl;
 
   return 0;
}
