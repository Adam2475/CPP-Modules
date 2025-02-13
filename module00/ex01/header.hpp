#ifndef HEADER_H
# define HEADER_H

# include <iostream>
# include <cctype>
# include <string>
# include <unistd.h>
# include <cstdlib>
# include <iomanip>
# include <cstdio>

// Declare a string type
typedef std::string str;

# define add "ADD"
# define search "SEARCH"
# define exit "EXIT"


class	Contact {
	public:
		Contact();
		~Contact();

		void	setName(str name);
		void	setLast(str last);
		void	setNick(str nick);
		void	setPhone(str phone);
		void	setSecret(str secret);
		str		getName() const;
		str		getLast() const;
		str		getNick() const;
		str		getPhone() const;
		str		getSecret() const;

	private:
		str	name;
		str	last;
		str	nick;
		str	phone;
		str	secret;
};

class	PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();

		void	add_contact();
		void	search_contact();
		
	private:
		int			current_nb;
		int			nb_contacts;
		Contact		array[8];
};

#endif