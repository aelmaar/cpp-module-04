/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:03:47 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/03 11:11:11 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
    std::string ideas[100];
    public:
        Brain();
        Brain(Brain const &old_obj);
        Brain &operator=(Brain const &other);
        ~Brain();
};

#endif