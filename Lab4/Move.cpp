#include "Move.h"
#include <iostream>

//void Move::move(int d)
//{
//	/*if (d > 1 && d << 4) {*/
//		if (d == NORTH) std::cout << "Движемся на Север\n";
//		else if (d == EAST) std::cout << "Движемся на Восток\n";
//		else if (d == WEST) std::cout << "Движемся на Запад\n";
//		else if (d == SOUTH) std::cout << "Движемся на Юг\n";
//	//}
//	
//}

void Move::move(Direction d)
{
	if (d == Direction::NORTH) std::cout << "Движемся на Север\n";
	else if (d == Direction::EAST) std::cout << "Движемся на Восток\n";
	else if (d == Direction::WEST) std::cout << "Движемся на Запад\n";
	else if (d == Direction::SOUTH) std::cout << "Движемся на Юг\n";
}
