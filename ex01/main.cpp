/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 23:42:06 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/23 16:40:17 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

int main(void)
{
    PhoneBook directory; // directory est une instance de phonebook
    int i = 0;
    std::string input;
    std::cout << "available options : ADD, SEARCH, EXIT" << std::endl;
    while (1)
    {
        std::cout << input << std::endl;
        std::getline(std::cin, input);
        if (input == "ADD")
        {
            {
                if (directory.contact_tab[i].repertoring(input, i + 1) == 1)
                {
                    std::cout << "error : this field can't be empty" << std::endl;
                }
                else
                    i++;
                if (i == 8)
                    i = 0;
            }
        }
        else if (input == "SEARCH")
        {
            directory.displayContacts(directory);
            while (1)
            {
                std::cout << "please enter a contact index : " << std::endl;
                std::getline(std::cin, input);
                if (input >= "1" && input <= "9")
                {
                    directory.displayLine(directory, input);
                    break ;
                }
                else
                {
                    std::cout << "error : please enter a valid index" << std::endl;
                    break ;
                }
            }
        }
        else if (input == "EXIT")
            break ;
        else if (input != "")
        {
            std::cout << "Stop. Please use one of the following options : ADD, SEARCH, EXIT" << std::endl;
        }
        input = "";
    }
}
