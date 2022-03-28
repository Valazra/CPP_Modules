#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
	public :
		Contact(void);
		~Contact(void);
		void	add_contact();
		void	display_columns() const;
		void	display_one_contact() const;
		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string	getNickname(void);
		std::string	getPhoneNumber(void);
		std::string	getDarkestSecret(void);

	private :
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
};

#endif
