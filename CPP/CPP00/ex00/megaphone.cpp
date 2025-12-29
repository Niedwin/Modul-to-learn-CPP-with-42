/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 16:48:05 by marvin            #+#    #+#             */
/*   Updated: 2025/12/03 16:48:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    std::string no_argument = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::string current_arg;

    if (argc == 1)
    {
        std::cout << no_argument << std::endl;
        return (0);
    }
    for (int i = 1; i < argc; i++)
    {
        current_arg = argv[i];
        int len =  current_arg.length();
        for (int j = 0; j < len; j++)
        {
            std::cout << (char)(toupper(current_arg[j]));
        }
        std::cout << " ";
    }
    std::cout << std::endl;
    return (0);
}