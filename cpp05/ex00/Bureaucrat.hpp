/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:51:16 by user42            #+#    #+#             */
/*   Updated: 2022/03/12 17:54:51 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
	public :
		Bureaucrat(void);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat(void);

		Bureacrat & operator=(Bureaucrat const & rhs);

		void	getName(void) const;
		void	getGrade(void) const;
		void	incrementeGrade(void);
		void	decrementeGrade(void);


	private :
		std::string const	_name;
		int			grade;
};

#endif
