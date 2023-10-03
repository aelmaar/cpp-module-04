/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:17:13 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/03 11:31:51 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
    Brain *brain;
    public:
        Dog();
        Dog(const std::string &type);
        Dog(Dog const &old_obj);
        Dog &operator=(Dog const &other);
        virtual ~Dog();
        const std::string &getType() const;
        void makeSound() const;
};

#endif