/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 17:55:22 by marvin            #+#    #+#             */
/*   Updated: 2025/12/29 17:55:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

typedef std::string str;

class Zombie {
    private:
        str name;
        void announce();
    public:
        Zombie(str name);
        ~Zombie();
         Zombie* newZombie(str name);
	    void    randomChump(str name);
};
#endif