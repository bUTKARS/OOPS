#include<bits/stdc++.h>
using namespace std;
class HumanBeing{
public:
	string name;

	void introduce()
	{
		cout<<"hi"<<" "<<name;
	}
};
int main()
{
	HumanBeing u;
	u.name="xx";
	u.introduce();
	cout<<'\n';
	HumanBeing *kitchu=new HumanBeing();
	kitchu->name="tichu";
	kitchu->introduce();
	delete kitchu;
	cout<<'\n';
		return 0;
}
