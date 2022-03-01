#include <cctype>
#include <iostream>
#include <string>

struct Data {
    Data() : height(180), age(30) {}

    int height;
    int age;
};

uintptr_t serialize(Data *ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw) {
    return reinterpret_cast<Data *>(raw);
}

int main() {
    Data *data = new Data();
    uintptr_t raw = serialize(data);

    std::cout << "data->hight: " << data->height << std::endl;
    std::cout << "data->age: " << data->age << std::endl;

    std::cout << "raw[0]: " << reinterpret_cast<int *>(raw)[0] << std::endl;
    std::cout << "raw[1]: " << reinterpret_cast<int *>(raw)[1] << std::endl;

    Data *data2 = deserialize(raw);
    std::cout << "data2->hight: " << data2->height << std::endl;
    std::cout << "data2->age: " << data2->age << std::endl;

    delete data;
    return 0;
}
