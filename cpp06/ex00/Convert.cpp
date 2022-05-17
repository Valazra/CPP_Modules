#include "Convert.hpp"

Convert::Convert(void) : _av1("")
{
	return ;
}

Convert::Convert(std::string av1) : _av1(av1)
{
	return ;
}

Convert::Convert(Convert const & src)
{
	*this = src;
	return ;
}

Convert::~Convert(void)
{
	return ;
}

Convert & Convert::operator=(Convert const & rhs)
{
	_av1 = rhs.getAv1();
	_type = rhs.getType();
	return (*this);
}

std::string	Convert::getAv1(void) const
{
	return (this->_av1);
}

std::string	Convert::getType(void) const
{
	return (this->_type);
}

std::string	Convert::whatType(void)
{
	std::string av1 = _av1;
	unsigned int size;
	unsigned int i = 0;
	unsigned int point = 0;
	unsigned int f = 0;
	unsigned int count = 0;

	size = av1.size();
	if (size == 1 && std::isdigit(av1[0]) == 0 && std::isprint(av1[0]))
		return (_type = "CHAR");
	if (av1[0] == '-' || av1[0] == '+')
		av1.erase(0,  1);
	size = av1.size();
	if (av1 == "inff" || av1 == "nanf")
		return (_type = "FLOAT");
	if (av1 == "inf" || av1 == "nan")
		return (_type = "DOUBLE");
	while (i < size)
	{
		if (!isdigit(av1[i]))
		{
			if (av1[i] == '.')
				point = i;
			if (av1[i] == 'f')
				f = i;
			count++;
		}
		i++;
	}
	if (count == 0)
		return (_type = "INT");
	else if (count == 2 && point > 0 && point < (size - 2) && f == (size - 1))
		return (_type = "FLOAT");
	else if (count == 1 && point > 0 && point < (size - 1))
		return (_type = "DOUBLE");
	return (_type = "ERROR");
}

int	Convert::getCaseSwitch(void)
{
	std::string typeTab[5] = {"CHAR", "INT", "FLOAT", "DOUBLE", "ERROR"};

	for (int i = 0 ; i < 5 ; i++)
	{
		if (_type == typeTab[i])
			return (i);
	}
	return (-1);
}

void	Convert::convertType(void)
{
	whatType();
	int i = getCaseSwitch();
	if (i != -1)
	{
		switch(i)
		{
			case 0:
				convertChar();
				break;
			case 1:
				convertInt();
				break;
			case 2:
				convertFloat();
				break;
			case 3:
				convertDouble();
				break;
			case 4:
				std::cout << "Problem with whatType function" << std::endl;
				break;
		}
	}
	else
		std::cout << "Problem with whatType function" << std::endl;
	return ;
}

void	Convert::convertChar(void)
{
	char c = (_av1.c_str()[0]);
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << std::fixed;
	std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
	std::cout << std::fixed;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void	Convert::convertInt(void)
{
	double av1 = atof(_av1.c_str());
	if (av1 < INT_MIN || av1 > INT_MAX)
	{
		std::cout << "Problem overflow or underflow" << std::endl;
		return ;
	}
	std::cout << "char: ";
	if (av1 < static_cast<int>(CHAR_MIN) || av1 > static_cast<int>(CHAR_MAX))
		std::cout << "impossible" << std::endl;
	else
	{
		char c = static_cast<char>(av1);
		if (isprint(c))
			std::cout << "'" << c << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	std::cout << "int: " << static_cast<int>(av1) << std::endl;
	std::cout << std::fixed;
	std::cout << "float: " << static_cast<float>(av1) << "f" << std::endl;
	std::cout << std::fixed;
	std::cout << "double: " << av1 << std::endl;
}

void	Convert::convertFloat(void)
{
	double av1 = atof(_av1.c_str());
	if (errno == ERANGE)
	{
		std::cout << "Problem overflow or underflow" << std::endl;
		return ;
	}
	std::cout << "char: ";
	if (av1 < static_cast<float>(CHAR_MIN) || av1 > static_cast<float>(CHAR_MAX) || _av1 == "nanf")
		std::cout << "impossible" << std::endl;
	else
	{
		char c = static_cast<char>(av1);
		if (isprint(c))
			std::cout << "'" << c << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	std::cout << "int: ";
	if (static_cast<long int>(av1) < INT_MIN || static_cast<long int>(av1) > INT_MAX || _av1 == "nanf")
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(av1) << std::endl;
	std::cout << std::fixed;
	std::cout << "float: " << static_cast<float>(av1) << "f" << std::endl;
	std::cout << std::fixed;
	std::cout << "double: " << av1 << std::endl;
}

void	Convert::convertDouble(void)
{
	double d = atof(_av1.c_str());
	if (errno == ERANGE)
	{
		std::cout << "Problem overflow or underflow" << std::endl;
		return ;
	}
	std::cout << "char: ";
	if (d < static_cast<double>(CHAR_MIN) || d > static_cast<double>(CHAR_MAX) || _av1 == "nan")
		std::cout << "impossible" << std::endl;
	else
	{
		char c = static_cast<char>(d);
		if (isprint(c))
			std::cout << "'" << c << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	std::cout << "int: ";
	if (static_cast<long int>(d) < INT_MIN || static_cast<long int>(d) > INT_MAX || _av1 == "nan")
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(d) << std::endl;
	std::cout << std::fixed;
	std::cout << "float: ";
	if (_av1 != "inf" && _av1 != "+inf" && _av1 != "-inf" && (d < static_cast<double>(-FLT_MAX) || d > static_cast<double>(FLT_MAX)))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<float>(d) << "f" << std::endl;
	std::cout << std::fixed;
	std::cout << "double: " << d << std::endl;
}
