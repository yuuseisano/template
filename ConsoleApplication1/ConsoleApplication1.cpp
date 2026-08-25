#include <iostream>

template <typename T> struct IsPointer {
	static constexpr bool value = false;
};

template <typename U> struct IsPointer<U*> {
	static constexpr bool value = true;
};

struct NotPointer : IsPointer<int>{

};

int main() {
	std::cout<< IsPointer<int>::value << std::endl;
	std::cout << IsPointer<int*>::value << std::endl;
	std::cout << IsPointer<float>::value << std::endl;
	std::cout << IsPointer<float*>::value << std::endl;
	std::cout << NotPointer::value << std::endl;

}