#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <cstdlib>
# include <climits>
# include <cerrno>
# include <cfloat>

class Convert
{
	public :

		Convert(void);
		Convert(std::string av1);
		Convert(Convert const & src);
		~Convert(void);

		Convert & operator=(Convert const & rhs);
		std::string getAv1(void) const;
		std::string getType(void) const;
		std::string whatType(void);
		int	getCaseSwitch(void);
		void	convertType(void);
		void	convertChar(void);
		void	convertInt(void);
		void	convertFloat(void);
		void	convertDouble(void);

	private :

		std::string	_av1;
		std::string	_type;
};

#endif
