/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 18:17:15 by marvin            #+#    #+#             */
/*   Updated: 2025/12/29 18:17:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(str name) 
{
	this->name = name;
}

Zombie::~Zombie() {
	std::cout << "Zombie" << this->name << " destroyed" << std::endl;
}

void	Zombie::announce() 
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}