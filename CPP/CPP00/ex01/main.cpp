/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 17:07:43 by marvin            #+#    #+#             */
/*   Updated: 2025/12/03 17:07:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
# include <iostream>
# include <string>

int main (void)
{
    Phonebook   ph1;
    std::string str;

    while (true)
    {
        std::cout << "Enter a command > ";
        if (!std::getline(std::cin, str))
            break;

        if (str == "EXIT")
            break;
        else if (str == "ADD")
            ph1.ADD();
        else if (str == "SEARCH")
            ph1.SEARCH();
    }
    return 0;
}
