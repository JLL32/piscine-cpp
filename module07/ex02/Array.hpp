//
// Created by jll32 on 2/3/2022.
//

#ifndef EX02_ARRAY_HPP
#define EX02_ARRAY_HPP


template<typename T>
class Array {
public:
    Array() : _array(new T[0]), _size(0) {}

    Array(int size) : _array(new T[size]), _size(size) {}

    ~Array() {
        delete[] _array;
    }

    Array<T> &operator=(const Array<T> &other) {
        if (this != &other) {
            delete[] _array;
            _array = new T[other._size];
            _size = other._size;
            for (int i = 0; i < _size; i++) {
                _array[i] = other._array[i];
            }
        }
        return *this;
    }

    Array(const Array<T> &other): _array(new T[0]), _size(0) {
        *this = other;
    }

    T &operator[](int index) const {
        if (index < 0 || index >= _size) {
            throw std::out_of_range("Index out of bounds!!");
        }
        return _array[index];
    }

    int size() const {
        return _size;
    }

private:
    T *_array;
    int _size;
};

std::ostream &operator<<(std::ostream &os, const Array<int> &array) {
    os << array.size() << " ";
    os << "[";
    for (int i = 0; i < array.size(); i++) {
        os << array[i];
        if (i != array.size() - 1) {
            os << ", ";
        }
    }
    os << "]";
    return os;
}

#endif //EX02_ARRAY_HPP
