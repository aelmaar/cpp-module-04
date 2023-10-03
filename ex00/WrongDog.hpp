/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:17:13 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/03 10:41:40 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

#include "WrongAnimal.hpp"

class WrongDog: public WrongAnimal
{
    public:
        WrongDog();
        WrongDog(const std::string &type);
        WrongDog(WrongDog const &old_obj);
        WrongDog &operator=(WrongDog const &other);
        ~WrongDog();
        const std::string &getType() const;
        void makeSound() const;
};

#endif
