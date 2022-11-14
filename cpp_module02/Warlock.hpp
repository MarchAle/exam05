/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:21:11 by amarchal          #+#    #+#             */
/*   Updated: 2022/11/14 15:46:02 by amarchal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>
# include <vector>
# include "ATarget.hpp"
# include "ASpell.hpp"
# include "SpellBook.hpp"

class SpellBook;

class ATarget;

class Warlock
{
	private :
		Warlock();
		Warlock(Warlock const &src);
		Warlock &operator=(Warlock const &src);

		std::string name;
		std::string title;

		SpellBook *book;

	public :
		Warlock(std::string nameStr, std::string titleStr);
		~Warlock();

		std::string const	&getName() const;
		std::string const 	&getTitle() const;
		void				setTitle(std::string const &titleStr);
		void				introduce() const;
		void				learnSpell(ASpell *spell) const;
		void				forgetSpell(std::string spell) const;
		void				launchSpell(std::string spell, ATarget &target) const;
};

#endif

