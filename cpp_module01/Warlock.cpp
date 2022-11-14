/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:22:10 by amarchal          #+#    #+#             */
/*   Updated: 2022/11/14 13:05:28 by amarchal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock() {}

Warlock::Warlock(Warlock const &src) { (void) src; }

Warlock &Warlock::operator=(Warlock const &src) { (void) src; return (*this); }

Warlock::Warlock(std::string nameStr, std::string titleStr) : name(nameStr), title(titleStr)
{
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!" << std::endl;
}

std::string const &Warlock::getName() const
{
	return (name);
}

std::string const &Warlock::getTitle() const
{
	return (title);
}

void	Warlock::setTitle(std::string const &titleStr)
{
	title = titleStr;
}

void	Warlock::introduce() const
{
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell *spell)
{
	std::vector<ASpell *>::iterator it = spells.begin();
	while (it != spells.end())
	{
		if ((*it)->getName().compare(spell->getName()) == 0)
			return ;
		it++;
	}
	spells.push_back(spell);
}

void	Warlock::forgetSpell(std::string spell)
{
	std::vector<ASpell *>::iterator it = spells.begin();
	while (it != spells.end())
	{
		if ((*it)->getName().compare(spell) == 0)
		{
			spells.erase(it);
			return ;
		}
	}
}

void	Warlock::launchSpell(std::string spell, ATarget &target)
{
	std::vector<ASpell *>::iterator it = spells.begin();
	while (it != spells.end())
	{
		if ((*it)->getName().compare(spell) == 0)
		{
			(*it)->launch(target);
			return ;
		}
	}
}


