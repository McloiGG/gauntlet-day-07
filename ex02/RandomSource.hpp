#pragma once
#ifndef RANDOMSOURCE_HPP
# define RANDOMSOURCE_HPP

struct RandomSource
{
	virtual int next(int max)= 0;
	virtual ~RandomSource() = default;
};

#endif
