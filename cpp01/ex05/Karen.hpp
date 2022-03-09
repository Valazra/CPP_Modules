/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:06:31 by user42            #+#    #+#             */
/*   Updated: 2022/03/09 15:25:45 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

class Karen
{
	public :
		Karen(void);
		~Karen(void);
		void complain(std::string level);

	private :
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

#endif
