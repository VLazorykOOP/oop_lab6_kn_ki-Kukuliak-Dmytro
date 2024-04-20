
#include <iostream>


class figure
{
public:
	

	virtual ~figure() {};
};
class circle :virtual public figure
{
public:

	circle() { radius = 0; }
	circle(int x):radius(x) {}

	template <typename T>
	T area() {
		return 3.14 * radius * radius;
	}
	void set_radius(int x) { radius = x; }
	template <typename T>
	T get_radius() { return radius; }
private:
	int radius;
};
class square : virtual public figure 
{
public:
	square() { side = 0; }
	square(int x) :side(x) {}
	template <typename T>
	T area() {
		return side*side;
	}

	void set_side(int x) { side = x; }
	template <typename T>
	T get_side() { return side; }
private:
	int side;
	};
class both : public circle, public square
{public:
	both() { circle(); square(); }
	template <typename T> both(T x) { set_side(x); set_radius(x / 2); }

};


int main() {
	both test1(6.8);
	std::cout << test1.circle::area<double>()<< std::endl;
	std::cout << test1.square::area<double>()<< std::endl;
}