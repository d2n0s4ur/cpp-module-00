/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoh <jnoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 19:51:10 by jnoh              #+#    #+#             */
/*   Updated: 2023/01/06 20:23:39 by jnoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact();

void	Contact::SetIdx(const int idx)
{
    idx_ = idx;
}

void	Contact::SetFirstName(const std::string& first_name)
{
    first_name_ = first_name;
}

void	Contact::SetLastName(const std::string& last_name)
{
    last_name_ = last_name;
}

void	Contact::SetNickName(const std::string& nickname)
{
    nickname_ = nickname;
}

void	Contact::SetPhoneNumber(const std::string& phone_number)
{
    phone_number_ = phone_number;
}

void	Contact::SetDarkestSecrect(const std::string& darkest_secret)
{
    darkest_secret_ = darkest_secret;
}

std::string&	Contact::GetFirstName()
{
    return idx_;
}

std::string&	Contact::GetLastName()
{
    return last_name_;
}

std::stirng&	Contact::GetNickName()
{
    return nickname_;
}

std::stirng&	Contact::GetPhoneNumber()
{
    return phone_number_;
}

std::stirng&	Contact::GetDarkestSecret()
{
    return darkest_secret_;
}

void			Contact::DisplayContact()
{
    std::cout << "|" << std::setw(10) << std::right << GetIdx();
    
    std::cout << "|";
    if (GetFirstName().size() > 10)
    {
        int i = 0;
        while (i < 9)
        {
            std::cout << GetFirstName().at(i);
            i ++;
        }
        std::cout << ".";
    }
    else
        std::cout << std::setw(10) << std::right << GetFirstName();

    std::cout << "|";
    if (GetLastName().size() > 10)
    {
        int i = 0;
        while (i < 9)
        {
            std::cout << GetLastName().at(i);
            i ++;
        }
        std::cout << ".";
    }
    else
        std::cout << std::setw(10) << std::right << GetLastName();
    
    std::cout << "|";
    if (GetNickName().size() > 10)
    {
        int i = 0;
        while (i < 9)
        {
            std::cout << GetNickName().at(i);
            i ++;
        }
        std::cout << ".";
    }
    else
        std::cout << std::setw(10) << std::right << GetNickName();
    std::cout << "|" << std::endl;
}