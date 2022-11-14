/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:45:45 by amarchal          #+#    #+#             */
/*   Updated: 2022/11/14 11:55:52 by amarchal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(std::string nameStr, std::string effectsStr) : name(nameStr), effects(effectsStr)
{}

ASpell::~ASpell() {}

ASpell::ASpell(ASpell const &src)
{
	(void) src;
}

ASpell &ASpell::operator=(ASpell const &src)
{
	(void) src;
	return (*this);
}

std::string ASpell::getName() const
{
	return (name);
}

std::string ASpell::getEffects() const
{
	return (effects);
}

void	ASpell::launch(ATarget const &target) const
{
	target.getHitBySpell(*this);
}
	
