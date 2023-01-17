/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoh <jnoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 20:52:53 by jnoh              #+#    #+#             */
/*   Updated: 2023/01/17 19:13:46 by jnoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class   PhoneBook {
	public:
		PhoneBook();
		void			AddContact();
		void			SearchContact();
		void			DisplayContactAll();
		void			DisplayContact(int idx);

	private:
		Contact			contacts_[8];
		int				contact_cnt_;
};

#endif
