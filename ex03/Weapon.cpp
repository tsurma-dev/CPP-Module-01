/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 14:15:00 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/02 15:43:28 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) {
	this->type = type;
}

Weapon::~Weapon() {
}

void Weapon::setType(std::string type) {
	this->type = type;
}

std::string Weapon::getType(void) {
	return (this->type);
}

