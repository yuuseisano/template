#include <iostream>

template<typename T , std::size_t N>

class StaticArray {
	T data[N];
public:

	constexpr T & operator[](std::size_t i)  {return data[i];}
	constexpr const T& operator[](std::size_t i) const {return data[i];}
	constexpr std::size_t size() const {return N;}

};

template <typename T> struct IsPointer {
	static constexpr bool value = false;
};

template <typename U> struct IsPointer<U*> {
	static constexpr bool value = true;
};

int main() {
	StaticArray<int, 30> data;
	IsPointer<int> a;

	std::cout << a.value << std::endl;

	for (auto i = 0; i < data.size(); ++i) {
		data[i] = i;
	}
	std::cout << data[5] << std::endl;
}