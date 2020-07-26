#include<iostream>
using namespace std;
class example
{
public:
	int speed,price;
	string name;

	void print()
	{
		cout<<"hi my speed is "<< speed <<endl;
	}
	void display()
	{
		cout<<"speed ->"<<speed<<endl;
		cout<<"name->"<<name<<endl;
		cout<<"price->"<<price<<endl;
		cout<<"*************************"<<endl;
	}
	//constructur
	//whenn i write my own constructur the by defult constructor is over rite
example()
{
 cout<<"this is my new constructur";
}

example
};
int main()
{

		example c;
		// c.name="audi";
		// c.speed=100;
		// c.price =10000;
		// c.print();
		// c.display();

   return 0;
}