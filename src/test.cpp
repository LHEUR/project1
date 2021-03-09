#include <iostream>
#include <string>
#include <vector>

auto main() -> int {

    std::string s{"chaine de caractère"};
    std::vector<int> v{1,2,3,4,5}; 
  
    std::cout << s << std::endl;

    for(auto val : v) {
        std::cout << val << std::endl;
    }

    return 0;
} 