/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 14:15:00 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/05 14:35:12 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) {
	std::cout << "Default constructor called" << std::endl;
	this->type = type;
}

Weapon::~Weapon() {
	std::cout << "Destructor called" << std::endl;
}

void Weapon::setType(std::string type) {
	this->type = type;
}

std::string Weapon::getType(void) {
	return (this->type);
}
