/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 23:42:06 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/23 16:57:55 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <stdlib.h>

class Contact {

public:
    Contact();
    ~Contact();
    void setFirst(std::string input);
    void setLast(std::string input);
    void setNick(std::string input);
    void setPhone(std::string input);
    void setSecret(std::string input);
    std::string getFirst();
    std::string getLast();
    std::string getNick();
    std::string getPhone();
    std::string getSecret();
    int repertoring(std::string input, int i);
private:
    std::string _first_name;
    std::string _last_name;
    std::string _nick_name;
    std::string _phone_number;
    std::string _darkest_secret;
};

#endif