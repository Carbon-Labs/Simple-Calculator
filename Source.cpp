#include <iostream>
#include <string>

int retrieveValue()
{
	using namespace std;
	cout << "Enter your interger: ";
	int input;
	cin >> input;
	return input;
}
double calculate(std::string mathsOperator, int x, int y)
{
	using namespace std;
	if (mathsOperator == "+" )
		return x + y;
	else if (mathsOperator == "-" )
		return x - y;
	else if (mathsOperator == "*" )
		return x * y;
	else if (mathsOperator == "/")
		return static_cast<double>(x) / static_cast<double>(y);
	else
		return 0.00;
}
int main()
{
	using namespace std;
	cout << "Carbon-Labs" << endl;
	cout << "Hello! What is you name?" << endl;
	cout << "Name: ";
	string name;
	getline(cin, name);
	cout << "So, hello, " << name << "!" << endl;
	cout << "This is a simple calculator" << endl;
	cout << "Please could you enter a number." << endl;
	int x = retrieveValue();
	cout << "Enter your preferred mathematical operation. Limited to the basic four." << endl;
	cout << "Press + for plus, - for minus, * for multiply and / for divide." << endl;
	string mathsOperator;
	cin >> mathsOperator;
	cout << "Please enter the other number." << endl;
	int y = retrieveValue();
	cout << "The answer is " << calculate(mathsOperator, x, y) << "." << endl;
	cout << "Thank you for using this program" << endl;
	string escape;
	cout << "Input anything to escape" << endl;
	cin >> escape;
	return 0;
}
