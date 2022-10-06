#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template<typename T>
class Array
{
	private:
		T	*arr;
		int	n;
	public:
		Array()
		{
		}
		Array(unsigned int n)
		{
			T *ret = new T[n]();
			for (int i = 0; i < n; ++i)
				ret[i] = i + 9;
			//delete [] ret;
		}

		Array(const Array &obj)
		{
			*this = obj;
		}

		Array &operator=(const Array &obj)
		{
		}
		void operator[](int idx)
		{
			std::cout << this->arr[idx] << std::endl;
		}
};

#endif
