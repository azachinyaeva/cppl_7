#include <iostream>
#include <vector>
#include <algorithm>

void unique(std::vector<int>& vec)
{
    std::sort(vec.begin(), vec.end());
    vec.erase((std::unique(vec.begin(), vec.end())), vec.end());
}

void print(std::vector<int>& vec)
{
    for (const auto& elem : vec)
        std::cout << elem << " ";
    std::cout << std::endl;
}

int main()
{
    std::vector<int> vec{ 1, 1, 2, 5, 6, 1, 2, 4 };
    std::cout << "[IN] ";
    print(vec);
    unique(vec);
    std::cout << "[OUT] ";
    print(vec);  
}

