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

	void display()
	{
		cout<<age<<" "<<name<<endl;
	}
};
int main()
{
	
	Human tichu("dsfg",22);
	Human u;//passed with no paramters assigns the default value
	tichu.display();
	u.display();
	return 0;
	
}
