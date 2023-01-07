/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoh <jnoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 20:23:48 by jnoh              #+#    #+#             */
/*   Updated: 2023/01/07 21:06:43 by jnoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
    PhoneBook phonebook;
    std::string cmd;

    std::cout << "Welcome to PhoneBook" << std::endl;
    while (1)
    {
        std::cout << "Enter command: ";
        std::getline(std::cin, cmd);
        if (cmd == "EXIT")
            break ;
        else if (cmd == "ADD")
            phonebook.AddContact();
        else if (cmd == "SEARCH")
            phonebook.SearchContact();
        else
            std::cout << "Invalid command." << std::endl;
    }
    return (0);
}
