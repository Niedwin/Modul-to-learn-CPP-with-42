/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 17:45:57 by marvin            #+#    #+#             */
/*   Updated: 2025/12/19 17:45:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP

# define CONTACT_HPP

# include <iostream>
# include <string>


class   Contact
{
    private:
        std::string prenom;
        std::string nom;
        std::string surnom;
        std::string numero;

    public:
        Contact(void);
        ~Contact(void);
        std::string get_prenom(void) const;
        std::string get_nom(void) const;
        std::string get_surnom(void) const;
        std::string get_numero(void) const;
        void    set_prenom(std::string str);
        void    set_nom(std::string str);
        void    set_surnom(std::string str);
        void    set_numero(std::string str);
};

#endif