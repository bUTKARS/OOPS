#include<bits/stdc++.h>
using namespace std;
class Human{
private:
	string name;
	int age;
public:
	Human()//This is a constructor it has the same name as the class
	{
		cout<<"Constructor called here"<<endl;
		age=22;
		name="Utkarsh";
	}
	void display()
	{
		cout<<age<<" "<<name<<endl;
	}
};
int main()
{
	Human u;// as soon as you execute this the constructor will be called automatically
	u.display();
	return 0;
	
}
