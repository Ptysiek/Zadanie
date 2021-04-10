#include <iostream>
#include "parseQuantity.h"


int main() {
    std::cout << parseQuantity(nullptr) << "\n"
        << parseQuantity(0) << "\n"
        << parseQuantity("") << "\n"
        << parseQuantity("123") << "\n"
        << parseQuantity("abc") << "\n"
        << parseQuantity("123abc") << "\n"    
        << parseQuantity("abc123") << "\n";

    return 0;
}



