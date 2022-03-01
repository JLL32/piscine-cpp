#include <string>
#include "iter.hpp"

int main() {

    const char *str = "hello world";
    int arr[] = {1, 2, 3, 4, 5};

    iter<const char>(str, strlen(str), printElement);
    iter<const int>(arr, 5, printElement);

    return 0;
}
