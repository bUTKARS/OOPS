#include<bits/stdc++.h>
using namespace std;
class HumanBeing{
public:
	string name;

	void introduce();//You declared a function but not specified it
};
void HumanBeing::introduce()//You can declare it out of the scope of class by using scope
//resolution operator.
{
	cout<<HumanBeing::name<<'\n';//to access some element in the class tempalte you need to use 
	//:: operator again
}
// ::->scope resolution operator
int main()
{
	HumanBeing u;
	u.name="xx";
	u.introduce();
	cout<<'\n';
	
		return 0;
}
