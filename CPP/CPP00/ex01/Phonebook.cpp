/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 17:16:40 by marvin            #+#    #+#             */
/*   Updated: 2025/12/29 17:16:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>
#include <iomanip>

Phonebook::Phonebook(void) : index(0) {}

Phonebook::~Phonebook(void) {}

void Phonebook::ADD(void)
{
    Contact     c;
    std::string input;

    std::cout << "First name: ";
    std::getline(std::cin, input);
    c.set_prenom(input);

    std::cout << "Last name: ";
    std::getline(std::cin, input);
    c.set_nom(input);

    std::cout << "Nickname: ";
    std::getline(std::cin, input);
    c.set_surnom(input);

    std::cout << "Phone number: ";
    std::getline(std::cin, input);
    c.set_numero(input);

    contacts[index % 8] = c;
    index++;
}

static std::string truncate(std::string str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void Phonebook::PRINT(void)
{
    std::cout << "|"
              << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First name" << "|"
              << std::setw(10) << "Last name" << "|"
              << std::setw(10) << "Nickname" << "|"
              << std::endl;

    int max = index < 8 ? index : 8;
    for (int i = 0; i < max; i++)
    {
        std::cout << "|"
                  << std::setw(10) << i << "|"
                  << std::setw(10) << truncate(contacts[i].get_prenom()) << "|"
                  << std::setw(10) << truncate(contacts[i].get_nom()) << "|"
                  << std::setw(10) << truncate(contacts[i].get_surnom()) << "|"
                  << std::endl;
    }
}

void Phonebook::SEARCH(void)
{
    int i;

    PRINT();
    std::cout << "Enter index: ";
    std::string input;
    std::getline(std::cin, input);
    i = std::atoi(input.c_str());
    if (i < 0 || i >= index || i >= 8)
    {
        std::cout << "Invalid index" << std::endl;
        return;
    }
    std::cout << "First name: " << contacts[i].get_prenom() << std::endl;
    std::cout << "Last name: " << contacts[i].get_nom() << std::endl;
    std::cout << "Nickname: " << contacts[i].get_surnom() << std::endl;
    std::cout << "Phone number: " << contacts[i].get_numero() << std::endl;
}


