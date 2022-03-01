#include "Base.hpp"

int main() {
    Base *unknown = Base::generate();

    Base::identify(unknown);
    Base::identify(*unknown);

    delete unknown;
    return 0;
}
