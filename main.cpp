#include<bits/stdc++.h>
using namespace std;

class Human{
private:
	int age;
public:
	void displayage(){
		cout<<age<<endl;
	}
	void setAge(int value)
	{
		age=value;
	}
};
int main()
{
	Human tichu;
	tichu.setAge(69);
	tichu.displayage();
}
