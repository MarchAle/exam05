/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:59:33 by amarchal          #+#    #+#             */
/*   Updated: 2022/11/14 14:25:32 by amarchal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {}

void	TargetGenerator::learnTargetType(ATarget *target)
{
	if (target)
	{
		std::vector<ATarget *>::iterator it = targets.begin();
		while (it != targets.end())
		{
			if ((*it)->getType().compare(target->getType()) == 0)
				return ;
			it++;
		}
		targets.push_back(target);
	}
}

void	TargetGenerator::forgetTargetType(std::string const &type)
{
	std::vector<ATarget *>::iterator it = targets.begin();
	while (it != targets.end())
	{
		if ((*it)->getType().compare(type) == 0)
		{
			targets.erase(it);
			return ;
		}
		it++;
	}
}

ATarget *TargetGenerator::createTarget(std::string const &type)
{
	std::vector<ATarget *>::iterator it = targets.begin();
	while (it != targets.end())
	{
		if ((*it)->getType().compare(type) == 0)
		{
			return ((*it)->clone());
		}
		it++;
	}
	return (NULL);	
}
