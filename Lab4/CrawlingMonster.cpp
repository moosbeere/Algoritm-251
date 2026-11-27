#include "CrawlingMonster.h"
#include <iostream>

void CrawlingMonster::attack(Monster& m)
{
	std::cout << "Crawling monster deals damage " << m.getName() << "\n";
}
