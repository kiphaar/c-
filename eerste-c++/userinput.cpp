#include <iostream>

int main()
{

    std::string name;
    int age; 

    std::cout << "what is your name?" << '\n';
   
    std::getline(std::cin >> std::ws, name); //to read the full name with spaces
    

    std::cout << "how old are you?" << '\n';
    std::cin >> age;

    std::cout << "hello " << name << '\n';
    
    std::cout << "you are " << age << " years old" << '\n';


    return 0;
}