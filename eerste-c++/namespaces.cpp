#include <iostream>

namespace first{

    int x = 1;
}
namespace second{

    int x = 2;
}

int main()
{
    // namespace for identical named entites

    using namespace std; 
    using std::cout;
    using std::string;

 

    cout << second::x; 

    return 0;
}