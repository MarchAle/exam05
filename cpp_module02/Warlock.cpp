/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:22:10 by amarchal          #+#    #+#             */
/*   Updated: 2022/11/14 15:45:50 by amarchal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock() {}

Warlock::Warlock(Warlock const &src) { (void) src; }

Warlock &Warlock::operator=(Warlock const &src) { (void) src; return (*this); }

Warlock::Warlock(std::string nameStr, std::string titleStr) : name(nameStr), title(titleStr)
{
	book = new SpellBook;
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	delete book;
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

void	Warlock::learnSpell(ASpell *spell) const
{
	book->learnSpell(spell);
}

void	Warlock::forgetSpell(std::string spell) const
{
	book->forgetSpell(spell);
}

void	Warlock::launchSpell(std::string spell, ATarget &target) const
{
	ATarget *test = 0;
	if (test == &target)
		return ;
	ASpell *newSpell = book->createSpell(spell);
	if (newSpell)
		newSpell->launch(target);
}


