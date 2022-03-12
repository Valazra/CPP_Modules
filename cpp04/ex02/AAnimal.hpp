/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:41:23 by user42            #+#    #+#             */
/*   Updated: 2022/03/12 16:22:44 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal
{
	public :
		AAnimal(void);
		AAnimal(AAnimal const & src);
		virtual ~AAnimal(void);

		AAnimal & operator=(AAnimal const & rhs);

		std::string getType(void) const;

		virtual void makeSound() const = 0;

	protected :
		std::string _type;
};

#endif
