#include <iostream>
//image18
class Base
{
public:
	void display() { std::cout << "Base class" << std::endl; }
};

class L1 : public Base
{
public:
	void display() { std::cout << "L1 class" << std::endl; }
};

class R1 : public Base
{
public:
	void display() { std::cout << "R1 class" << std::endl; }
};

class L2 : public L1, public R1
{
public:
	void display() { std::cout << "L2 class" << std::endl; }
};

class R2 : public Base, public L1
{
public:
	void display() { std::cout << "R2 class" << std::endl; }
};

class final :public L1, public L2, public R1, public R2
{
public:
	void display() { std::cout << "Final class" << std::endl; }
};

int main() {

	final test;
	test.display();
	test.L1::display();
	test.L2::display();
	test.R1::display();
	test.R2::display();
	test.Base::display();
	test.L2::L1::Base::display();
	test.R2::Base::display();
}