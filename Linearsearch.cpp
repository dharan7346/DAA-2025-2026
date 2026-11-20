#include <iostream>
#include <vector>

int linearSearch(const std::vector<int>& arr, int target) {

    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    std::vector<int> numbers = {10, 23, 45, 70, 11, 15};
    std::cout << linearSearch(numbers, 10) << std::endl;
    return 0;
}
