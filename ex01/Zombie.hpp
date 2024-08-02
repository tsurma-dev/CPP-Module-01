/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 11:37:19 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/02 13:44:24 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
private:
std::string	name;

public:
	Zombie();
	~Zombie();
	void announce( void );
	void SetName( std::string name );
};

Zombie*	zombieHorde( int N, std::string name );

#endif
