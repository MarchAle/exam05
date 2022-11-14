/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:45:45 by amarchal          #+#    #+#             */
/*   Updated: 2022/11/14 12:00:18 by amarchal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"
#include "ASpell.hpp"

ATarget::ATarget() {}

ATarget::ATarget(std::string typeStr) : type(typeStr)
{}

ATarget::~ATarget() {}

ATarget::ATarget(ATarget const &src)
{
	(void) src;
}

ATarget &ATarget::operator=(ATarget const &src)
{
	(void) src;
	return (*this);
}

std::string ATarget::getType() const
{
	return (type);
}

void	ATarget::getHitBySpell(ASpell const &spell) const
{
	std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;
}
	
