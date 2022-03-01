#include <string>
#include "iter.hpp"

int main() {

    const char *str = "hello world";
    int arr[] = {1, 2, 3, 4, 5};

    iter<char>(str, strlen(str), printElement);
    iter<int>(arr, 5, printElement);

    return 0;
}
