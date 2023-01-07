/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoh <jnoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 19:37:15 by jnoh              #+#    #+#             */
/*   Updated: 2023/01/07 21:27:07 by jnoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class   Contact {
    public:
		void			SetIdx(const int idx);
		void			SetFirstName(const std::string& first_name);
		void			SetLastName(const std::string& last_name);
		void			SetNickName(const std::string& nickname);
		void			SetPhoneNumber(const std::string& phone_number);
		void			SetDarkestSecrect(const std::string& darkest_secret);
		
		std::string&	GetFirstName();
		std::string&	GetLastName();
		std::stirng&	GetNickName();
		std::stirng&	GetPhoneNumber();
		std::stirng&	GetDarkestSecret();
		void			DisplayContact();
    private:
		int				idx_;
        std::string		first_name_;
        std::string		last_name_;
		std::string		nickname_;
		std::string		phone_number_;
		std::string		darkest_secret_;
};

#endif
