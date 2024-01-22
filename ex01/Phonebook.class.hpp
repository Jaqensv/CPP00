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

#ifndef _PHONEBOOK_CLASS_HPP
    #define _PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"
class PhoneBook {
public:
    PhoneBook();
    ~PhoneBook();
    Contact contact_tab[8];
    void displayContacts(PhoneBook directory) const;
    void display_a_contact(PhoneBook directory, std::string index) const;
};

#endif