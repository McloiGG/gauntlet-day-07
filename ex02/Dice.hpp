#pragma once
#ifndef DICE_HPP
# define DICE_HPP

# include <cstdlib>

struct RandomSource;

class Dice
{
public:
	explicit Dice(RandomSource& rng) : m_rng(rng) {}

	int	roll(){ return std::rand() % 6 + 1; }

private:
	RandomSource&	m_rng;
};

#endif
