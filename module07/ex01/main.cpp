#include <string>
#include "iter.hpp"

int main() {
    const char *str = "hello world";
    iter<const char>(str, strlen(str), printElement);
    return 0;
}
