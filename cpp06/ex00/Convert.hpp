#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>

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
		void	convertType(void);

	private :

		std::string	_av1;
		std::string	_type;
};

#endif
