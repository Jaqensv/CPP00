/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 23:42:06 by mde-lang          #+#    #+#             */
/*   Updated: 2023/05/29 22:48:32 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include "Contact.class.hpp"

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
                  << std::setw(10) << (directory.contact_tab[i].first_name.length() > 10 ? directory.contact_tab[i].first_name.substr(0, 9) + "." : directory.contact_tab[i].first_name) << " | "
                  << std::setw(10) << (directory.contact_tab[i].last_name.length() > 10 ? directory.contact_tab[i].last_name.substr(0, 9) + "." : directory.contact_tab[i].last_name) << " | "
                  << std::setw(10) << (directory.contact_tab[i].nick_name.length() > 10 ? directory.contact_tab[i].nick_name.substr(0, 9) + "." : directory.contact_tab[i].nick_name) << std::endl;
    }
}

void PhoneBook::display_a_contact(PhoneBook directory, std::string index) const
{
    int i = std::atoi(index.c_str()) - 1;

    std::cout << std::right << std::setw(10) << "Index" << " | "
            << std::setw(10) << "First Name" << " | "
            << std::setw(10) << "Last Name" << " | "
            << std::setw(10) << "Nickname" << " | "
            << std::setw(10) << "Number" << " | "
            << std::setw(10) << "Secret" << std::endl;
    std::cout << std::right << std::setw(10) << i + 1 << " | "
            << std::setw(10) << (directory.contact_tab[i].first_name.length() > 10 ? directory.contact_tab[i].first_name.substr(0, 9) + "." : directory.contact_tab[i].first_name) << " | "
            << std::setw(10) << (directory.contact_tab[i].last_name.length() > 10 ? directory.contact_tab[i].last_name.substr(0, 9) + "." : directory.contact_tab[i].last_name) << " | "
            << std::setw(10) << (directory.contact_tab[i].nick_name.length() > 10 ? directory.contact_tab[i].nick_name.substr(0, 9) + "." : directory.contact_tab[i].nick_name) << " | "
            << std::setw(10) << (directory.contact_tab[i].phone_number.length() > 10 ? directory.contact_tab[i].phone_number.substr(0, 9) + "." : directory.contact_tab[i].phone_number) << " | "
            << std::setw(10) << (directory.contact_tab[i].darkest_secret.length() > 10 ? directory.contact_tab[i].darkest_secret.substr(0, 9) + "." : directory.contact_tab[i].darkest_secret) << std::endl;
}
