/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:06:31 by user42            #+#    #+#             */
/*   Updated: 2022/03/23 02:17:52 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
	public :
		Harl(void);
		~Harl(void);
		void complain(std::string level);

	private :
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

#endif
