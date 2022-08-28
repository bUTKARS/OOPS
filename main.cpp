#include<bits/stdc++.h>
using namespace std;
class Human{
private:
	string name;
	int age;
public:
	
	Human(string s="Utkarsh",int a=33)
	{
		cout<<"Constructor called here"<<endl;
		name=s;
		age=a;
	}
	~Human()//called destructor
	{
		// to delete an object u for Human class you can type delete u;
		//the following line of code wil be executed before execution
		cout<<"the object has been destroyed"<<endl;

		
	}

	void display()
	{
		cout<<age<<" "<<name<<endl;
	}
};
int main()
{
	Human *u;
	u=new Human();
	delete u;
}
