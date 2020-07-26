// #include<iostream>
// using namespace std;
// class car
// {
// private:
// 	int price;
// 	public:

// 	// int price;
// 	int model;
// 	string name;
// 	void start()
// 	{
// 		cout<<"i am starting"<<"\t"<<name<<endl;
// 	}
// 	void setprice(int p)
// 	{
// 		if(p>1000)
// 		{
// 			price =p;
// 		}
// 		else
// 		{
// 			price = 1000;
// 		}
// 		// price=p;
// 	}
// 	int getprice()
// 	{
// 		return price;
// 	}
// 	car()
// 	{
// 		cout<< "am calling"<<endl;
// 	}
// };
// int main()
// {
// 	car c;
// 	c.setprice(12000);
// 	// c.price=1000;
// 	c.name = "BMW";
// 	c.model=125;
// 	c.start();
// 	cout<<c.getprice()<<endl;
// 	car s;
// }
#include<iostream>
#include<vectors>
using namespace std;
class listnode{
public:
	int val;
	listnode* next;
	listnode(int val)
	{
		this->val=val;
		this->next = NULL;
	}
};
int main()
{
	listnode x(20);
}