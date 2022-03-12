/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:41:23 by user42            #+#    #+#             */
/*   Updated: 2022/03/12 15:33:46 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	public :
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const & src);
		~WrongAnimal(void);

		WrongAnimal & operator=(WrongAnimal const & rhs);

		std::string getType(void) const;

// ici on enleve le virtual pour que le wrongCat prenne cette fonction au lieu de la sienne
		void makeSound() const;

	protected :
		std::string _type;
};

#endif
