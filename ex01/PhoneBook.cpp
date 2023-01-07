/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoh <jnoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 19:33:06 by jnoh              #+#    #+#             */
/*   Updated: 2023/01/07 21:07:32 by jnoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	contact_cnt_ = 0;
}

void	PhoneBook::AddContact()
{
	int	idx;
	std::string str;

	idx = contact_cnt_ % 8;
	contacts_[contact_cnt_].SetIdx(contact_cnt_);
	contact_cnt_ += (contact_cnt_ < 8);
	std::cout << "First Name: ";
	std::getline(std::cin, str);
	contacts_[idx].SetFirstName(str);
	std::cout << "Last Name: ";
	std::getline(std::cin, str);
	contacts_[idx].SetLastName(str);
	std::cout << "Nickname: ";
	std::getline(std::cin, str);
	contacts_[idx].SetNickName(str);
	std::cout << "Phone Number: ";
	std::getline(std::cin, str);
	contacts_[idx].SetPhoneNumber(str);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, str);
	contacts_[idx].SetDarkestSecrect(str);
}

void	PhoneBook::SearchContact()
{
	std::string	idx;

	if (contact_cnt_ == 0)
	{
		std::cout << "There is no contact." << std::endl;
		return ;
	}
	DisplayContactAll();
	std::cout << "Enter the index: ";
	std::getline(std::cin, idx);
	if (idx.length() != 1 || idx[0] < '0' || idx[0] >= contact_cnt_ + '0')
	{
		std::cout << "Invalid index." << std::endl;
		return ;
	}
	DisplayContact(idx[0] - '0');
}

void	PhoneBook::DisplayContactAll()
{
	std::cout << "|" << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|" << std::endl;
	for (int i = 0; i < contact_cnt_; i++)
		contacts_[i].DisplayContact();
}

void	PhoneBook::DisplayContact(int idx)
{
	contacts_[idx].DisplayContactAll();
}
