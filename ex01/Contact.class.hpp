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
#ifndef _CONTACT_CLASS_HPP
# define _CONTACT_CLASS_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <stdlib.h>

class Contact {
public:
    Contact();
    ~Contact();
    void set_first(std::string input);
    void set_last(std::string input);
    void set_nick(std::string input);
    void set_phone(std::string input);
    void set_secret(std::string input);
    void get_first();
    void get_last();
    void get_nick();
    void get_phone();
    void get_secret();
    std::string get();
    int repertoring(std::string input, int i);
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;
    std::string darkest_secret;
private:
    

};

#endif
