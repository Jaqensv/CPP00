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

void Contact::set_first(std::string input)
{
    this->first_name = input;
}

void Contact::set_last(std::string input)
{
    this->last_name = input;
}

void Contact::set_nick(std::string input)
{
    this->nick_name = input;
}

void Contact::set_phone(std::string input)
{
    this->phone_number = input;
}

void Contact::set_secret(std::string input)
{
    this->darkest_secret = input;
}

int Contact::repertoring(std::string input, int i)
{
    std::cout << "First Name :" << " ";
    std::getline(std::cin, input);
    if (input == "")
        return (1);
    set_first(input);
    std::cout << "Last Name :" << " ";
    std::getline(std::cin, input);
    if (input == "")
        return (1);
    set_last(input);
    std::cout << "Nick Name :" << " ";
    std::getline(std::cin, input);
    if (input == "")
        return (1);
    set_nick(input);
    std::cout << "Phone Number :" << " ";
    std::getline(std::cin, input);
    if (input == "")
        return (1);
    set_phone(input);
    std::cout << "Darkest Secret :" << " ";
    std::getline(std::cin, input);
    if (input == "")
        return (1);
    set_secret(input);
    std::cout << std::endl;
    std::cout << "CONTACT " << i << " ADDED" << std::endl << std::endl;

    return (0);
}

Contact::Contact()
{
    //std::cout << "default constructor called" << std::endl;
}

Contact::~Contact()
{
    //std::cout << "default destructor called" << std::endl;
}