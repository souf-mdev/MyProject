#include "fibonacci.h"
#include <cassert>
#include <iostream>

int main(){
    assert(fibonacci(6) == 4);
    std::cout << "Test passed!" << std::endl;    
    return 0;
}
