#include <iostream>

class Animal
{
    private:
        std::string name;
    public:
        Animal(const std::string & name);
        Animal();
        void run();
};

Animal::Animal(const std::string & name)
{
    this->name = name;
}

Animal::Animal(){name="default";}

void Animal::run()
{
    std::cout << name << " run..." << std::endl;
}

class Cat:public Animal
{
   public:
        Cat(const std::string & m_name); 
        void eatFish(const std::string & name);
};

Cat::Cat(const std::string & m_name) : Animal(m_name)
{

}

void Cat::eatFish(const std::string & fish){std::cout <<" eat " << fish << std::endl;}

int main(int argc, char const *argv[])
{
    Cat cat("cat");
    cat.run();   
    // 基类引用可以指向派生类引用 基类指针也可以指向派生类指针
    Animal * ap = &cat;
    Animal & a = cat; 
    a.run();
    cat.eatFish("鲫鱼");
    return 0;
}
