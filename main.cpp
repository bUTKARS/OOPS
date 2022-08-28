#include<bits/stdc++.h>
using namespace std;
class Human{
private:
	string name;
	int age;
public:
	Human()
	{
		cout<<"Constructor called here"<<endl;
		age=22;
		name="Utkarsh";
	}
	Human(string s)
	{
		cout<<"Constructor with string argument"<<'\n';
		age=22;
		name=s;
	}
	Human(int s)
	{
		cout<<"Constructor with int parameter"<<'\n';
		age=s;
		name="tichu";

	}
	void display()
	{
		cout<<age<<" "<<name<<endl;
	}
};
int main()
{
	Human u;//will call the default constructor
	u.display();
	Human tichu(69);//will call the constructor function which uses integer input as arguent
	tichu.display();
	return 0;
	
}
