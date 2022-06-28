#include<iostream> 
#include<string>
using namespace std;
class Clock{
	public:
		Clock();
		Clock(string str,double price);
		void print_clock(){cout << name << " " << price <<endl;
		}
	private:
		string  name;
		double price;
};
Clock::Clock(string str,double price){
	name=str;this->price=price;
}

const int test(const int a){

return 0;
}

int main()
{
	Clock c("AA",3.4);
	//c.Clock("AA",3.4);
	c.print_clock();
	
	
}
