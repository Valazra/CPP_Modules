#include "Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed c(15);
	Fixed d(333.33f);

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;

	std::cout << std::endl;

	std::cout << "c = " << c << " et d = " << d << std::endl;
	std::cout << "c > d : " << (c > d) << std::endl;
	std::cout << "c < d : " << (c < d) << std::endl;
	std::cout << "c >= d : " << (c >= d) << std::endl;
	std::cout << "c <= d : " << (c <= d) << std::endl;
	std::cout << "c == d : " << (c == d) << std::endl;
	std::cout << "c != d : " << (c != d) << std::endl;
	
	std::cout << std::endl;

	std::cout << "c + d = " << (c + d) << std::endl;
	std::cout << "c - d = " << (c - d) << std::endl;
	std::cout << "c * d = " << (c * d) << std::endl;
	std::cout << "c / d = " << (c / d) << std::endl;

	std::cout << std::endl;

	std::cout << "min is " << Fixed::min(c, d) << std::endl;
	std::cout << "max is " << Fixed::max(c, d) << std::endl;
	
	std::cout << std::endl;

	Fixed const e(10);
	Fixed const f(15);
	std::cout << "e is " << e << " and f is " << f << std::endl;
	std::cout << "min is " << Fixed::min(e, f) << std::endl;
	std::cout << "max is " << Fixed::max(e, f) << std::endl;
	return (0);
}
