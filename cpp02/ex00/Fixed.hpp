#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public :
		Fixed(void);
		Fixed(Fixed const & src);
		~Fixed(void);

		Fixed & operator=(Fixed const & rhs);
		
		int	getRawBits(void) const;
		void	setRawBits(int const raw);

	private :
		int			_value_nb;
		static const int	_scaling_factor = 8;
};

#endif
