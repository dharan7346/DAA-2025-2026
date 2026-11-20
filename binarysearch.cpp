#include <iostream>
#include <vector>
#include <algorithm> // Required for binary_search

int main() {
    std::vector<int> data = {1, 3, 5, 7, 9, 11, 13, 15};
    int target = 10;

    // The container must be sorted!
    // std::sort(data.begin(), data.end());

    if (std::binary_search(data.begin(), data.end(), target)) {
        std::cout << "Element found!" << std::endl;
    } else {
        std::cout << "Element not found." << std::endl;
    }
    return 0;
}
