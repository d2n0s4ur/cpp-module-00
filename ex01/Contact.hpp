/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoh <jnoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 19:37:15 by jnoh              #+#    #+#             */
/*   Updated: 2023/01/06 21:19:50 by jnoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class   Contact {
    public:
		Contact();
		void			SetIdx(const int idx);
		void			SetFirstName(const std::string& first_name);
		void			SetLastName(const std::string& last_name);
		void			SetNickName(const std::string& nickname);
		void			SetPhoneNumber(const std::string& phone_number);
		void			SetDarkestSecrect(const std::string& darkest_secret);
		
		int				GetIdx();
		std::string&	GetFirstName();
		std::string&	GetLastName();
		std::string&	GetNickName();
		std::string&	GetPhoneNumber();
		std::string&	GetDarkestSecret();
		void			DisplayContact();
		void			DisplayContactAll();
    private:
		int				idx_;
        std::string		first_name_;
        std::string		last_name_;
		std::string		nickname_;
		std::string		phone_number_;
		std::string		darkest_secret_;
};

#endif
