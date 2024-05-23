/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 23:42:06 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/23 17:03:14 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
    //std::cout << "default constructor called" << std::endl;
}
PhoneBook::~PhoneBook()
{
    //std::cout << "default destructor called" << std::endl;
}

void PhoneBook::displayContacts(PhoneBook directory) const
{
    std::cout << std::right << std::setw(10) << "Index" << " | "
            << std::setw(10) << "First Name" << " | "
            << std::setw(10) << "Last Name" << " | "
            << std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < 8; i++)
    {
        std::cout << std::right << std::setw(10) << i + 1 << " | "
                  << std::setw(10) << (directory.contact_tab[i].getFirst().length() > 10 ? directory.contact_tab[i].getFirst().substr(0, 9) + "." : directory.contact_tab[i].getFirst()) << " | "
                  << std::setw(10) << (directory.contact_tab[i].getLast().length() > 10 ? directory.contact_tab[i].getLast().substr(0, 9) + "." : directory.contact_tab[i].getLast()) << " | "
                  << std::setw(10) << (directory.contact_tab[i].getNick().length() > 10 ? directory.contact_tab[i].getNick().substr(0, 9) + "." : directory.contact_tab[i].getNick()) << std::endl;
    }
}

void PhoneBook::displayLine(PhoneBook directory, std::string index) const
{
    int i = std::atoi(index.c_str()) - 1;

    std::cout << std::right << std::setw(10) << "Index" << " | "
            << std::setw(10) << "First Name" << " | "
            << std::setw(10) << "Last Name" << " | "
            << std::setw(10) << "Nickname" << " | "
            << std::setw(10) << "Number" << " | "
            << std::setw(10) << "Secret" << std::endl;
    std::cout << std::right << std::setw(10) << i + 1 << " | "
            << std::setw(10) << (directory.contact_tab[i].getFirst().length() > 10 ? directory.contact_tab[i].getFirst().substr(0, 9) + "." : directory.contact_tab[i].getFirst()) << " | "
            << std::setw(10) << (directory.contact_tab[i].getLast().length() > 10 ? directory.contact_tab[i].getLast().substr(0, 9) + "." : directory.contact_tab[i].getLast()) << " | "
            << std::setw(10) << (directory.contact_tab[i].getNick().length() > 10 ? directory.contact_tab[i].getNick().substr(0, 9) + "." : directory.contact_tab[i].getNick()) << " | "
            << std::setw(10) << (directory.contact_tab[i].getPhone().length() > 10 ? directory.contact_tab[i].getPhone().substr(0, 9) + "." : directory.contact_tab[i].getPhone()) << " | "
            << std::setw(10) << (directory.contact_tab[i].getSecret().length() > 10 ? directory.contact_tab[i].getSecret().substr(0, 9) + "." : directory.contact_tab[i].getSecret()) << std::endl;
}
