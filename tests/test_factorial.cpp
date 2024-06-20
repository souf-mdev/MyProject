#include "factorial.h"
#include <cassert>
#include <iostream>

int main(){
    assert(factorial(6) == 720);
    std::cout << "Test passed!" << std::endl;    
    return 0;
}
