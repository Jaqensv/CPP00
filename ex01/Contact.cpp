/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 23:42:06 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/23 16:59:35 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

void Contact::setFirst(std::string input)
{
    this->_first_name = input;
}

void Contact::setLast(std::string input)
{
    this->_last_name = input;
}

void Contact::setNick(std::string input)
{
    this->_nick_name = input;
}

void Contact::setPhone(std::string input)
{
    this->_phone_number = input;
}

void Contact::setSecret(std::string input)
{
    this->_darkest_secret = input;
}

////////////////////////////////////////////////////

std::string Contact::getFirst()
{
    return this->_first_name;
}

std::string Contact::getLast()
{
    return this->_last_name;
}

std::string Contact::getNick()
{
    return this->_nick_name;
}

std::string Contact::getPhone()
{
    return this->_phone_number;
}

std::string Contact::getSecret()
{
    return this->_darkest_secret;
}

////////////////////////////////////////////////////

int Contact::repertoring(std::string input, int i)
{
    std::cout << "First Name :" << " ";
    std::getline(std::cin, input);
    if (input == "")
        return (1);
    setFirst(input);
    std::cout << "Last Name :" << " ";
    std::getline(std::cin, input);
    if (input == "")
        return (1);
    setLast(input);
    std::cout << "Nick Name :" << " ";
    std::getline(std::cin, input);
    if (input == "")
        return (1);
    setNick(input);
    std::cout << "Phone Number :" << " ";
    std::getline(std::cin, input);
    if (input == "")
        return (1);
    setPhone(input);
    std::cout << "Darkest Secret :" << " ";
    std::getline(std::cin, input);
    if (input == "")
        return (1);
    setSecret(input);
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