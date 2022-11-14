/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:22:10 by amarchal          #+#    #+#             */
/*   Updated: 2022/11/14 17:27:26 by amarchal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::SpellBook(SpellBook const &src) { (void) src; }

SpellBook &SpellBook::operator=(SpellBook const &src) { (void) src; return (*this); }

SpellBook::~SpellBook()
{
}

void	SpellBook::learnSpell(ASpell *spell)
{
	if (spell)
	{
		std::vector<ASpell *>::iterator it = spells.begin();
		while (it != spells.end())
		{
			if ((*it)->getName().compare(spell->getName()) == 0)
				return ;
			it++;
		}
		spells.push_back(spell->clone());
	}
}

void	SpellBook::forgetSpell(std::string const &spell)
{
	std::vector<ASpell *>::iterator it = spells.begin();
	while (it != spells.end())
	{
		if ((*it)->getName().compare(spell) == 0)
		{
			spells.erase(it);
			return ;
		}
		it++;
	}
}

ASpell	*SpellBook::createSpell(std::string const &spell)
{
	std::vector<ASpell *>::iterator it = spells.begin();
	while (it != spells.end()
	{
		if ((*it)->getName().compare(spell) == 0)
		{
			return ((*it)->clone());
		}
		it++;
	}
	return (NULL);
}


