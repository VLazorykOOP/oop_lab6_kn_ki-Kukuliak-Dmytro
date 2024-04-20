#include <iostream>
//image3
class Base {
public:
    void display() {
        std::cout << "Base\n";
    }
};

class Level1 : virtual public Base {
public:
    void display() {
        std::cout << "Level1\n";
    }
};

class Level11 : virtual public Base {
public:
    void display() {
        std::cout << "Level11\n";
    }
};

class Level2 : public Level1, public Level11 {
public:
    void display() {
        std::cout << "Level2\n";
    }
};

class Level3 : public Level2, public Level1 {
public:
    void display() {
        std::cout << "Level3\n";
    }
};

int main() {
    Level3 finalObject;
    finalObject.display();

    finalObject.Base::display();

    finalObject.Level1::display();

    finalObject.Level11::display();

    finalObject.Level2::display();

    finalObject.Level3::display();



    return 0;
}
