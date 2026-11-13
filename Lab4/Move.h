#pragma once

enum class Direction {
	NORTH,
	EAST,
	WEST,
	SOUTH
};

class Move
{
public:
	static void move(Direction d);
};

