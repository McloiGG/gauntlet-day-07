#pragma once
#ifndef DICE_HPP
# define DICE_HPP

# include "RandomSource.hpp"
// # include <cstdlib>

class Dice
{
public:
	explicit Dice(RandomSource& rng) : m_rng(rng) {}

	int	roll(){ return m_rng.next(6) + 1; }
	// int	roll(){ return std::rand() % 6 + 1; }

private:
	RandomSource&	m_rng;
};

#endif
