/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 18:04:00 by marvin            #+#    #+#             */
/*   Updated: 2025/12/19 18:04:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

std::string Contact::get_prenom() const {
    return this->prenom;
}

std::string Contact::get_nom() const {
    return this->nom;
}

std::string Contact::get_surnom() const {
    return this->surnom;
}

std::string Contact::get_numero() const {
    return this->numero;
}

void Contact::set_prenom(std::string str) {
    this->prenom = str;
}

void Contact::set_nom(std::string str) {
    this->nom = str;
}

void Contact::set_surnom(std::string str) {
    this->surnom = str;
}

void Contact::set_numero(std::string str) {
    this->numero = str;
}