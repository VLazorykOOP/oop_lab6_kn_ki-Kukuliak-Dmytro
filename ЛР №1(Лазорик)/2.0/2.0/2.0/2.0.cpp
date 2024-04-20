
#include <iostream>

class progression 
{
public:
    virtual double member(int n) = 0;
    virtual double sum(int n) = 0;
};

class aProgression :public progression
{
public:
    aProgression(double x, double y) :a1(x), d(y) {};

    double member(int n) override {
       
        return a1 + (n - 1)* d;

    }
    double sum(int n) override {
        return (n / 2) * (a1 + member(n));
    }
private:
    double a1;
    double d;
};

class gProgression : public progression
{
public:
    gProgression(double x, double y) :b1(x), q(y) {};

    double member(int n) override {
       
        return b1*pow(q,n-1);

    }
    double sum(int n) override {
        if (q == 1) { std::cout << "q=1, the sum is not possible to calculate" << std::endl; return 0; }
        else return b1*(pow(q,n)-1)/(q-1);
    }
private:
    double b1;
    double q;
};

int main()
{
    aProgression test1(1,2);
    std::cout << test1.sum(64) << std::endl;
    std::cout << test1.member(5)<< std::endl;

    gProgression test2(1, 2);
    std::cout << test2.sum(16) << std::endl;
    std::cout << test2.member(5) << std::endl;

}


