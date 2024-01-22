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

#include <iostream>
#include <string.h>

int main(int argc, char **argv)
{    
    int i = 1;
    int j = 0;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (argv[i])
        {
            while (argv[i][j])
            {
                    std::cout << (char)toupper(argv[i][j]);
                j++;
            }
            i++;
            j = 0;
        }
        std::cout << std::endl;
    }
    return 0;
}