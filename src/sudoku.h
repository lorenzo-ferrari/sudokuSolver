#ifndef SUDOKU_H
#define SUDOKU_H

bool contraddiction(int grid[9][9]);
bool isFull(int grid[9][9]);
void findASolution(int grid[9][9], int &analysisCounter, bool &gridFound);
#endif
