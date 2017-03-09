#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <algorithm>


class Gameboard {
private:
	int difficulty;
	int gridsize;
	int BankSZ;
	public:
		void SetDifficulty(int i);
		int GetGridSize();
		void SetGridSize(int i);
		int GetGridSize();
		char GetWordbank();


};
