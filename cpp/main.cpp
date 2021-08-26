#include <iostream>
#include <cstdlib>

#include "../lib/afficheurConsole.h"

int main()
{
	afficheurConsole aC{cout};
	aC.menu();
}
