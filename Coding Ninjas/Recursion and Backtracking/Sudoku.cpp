bool check(int matrix[9][9], int num, int row, int col) {
    for(int i = 0; i < 9; i++)
        if(matrix[i][col] == num || matrix[row][i] == num)
            return false;
    int rw = row - row % 3;
    int cl =  col - col % 3;
    for(int i = 0; i < 3; i++)
        for(int j = 0;j < 3; j++)
            if(matrix[rw + i][cl + j] == num)
                return false;
    return true;
}

bool solveSudoku(int matrix[9][9], int row, int col)
{
    if(row == 9) 
        return true;
    if(col == 9) 
        return solveSudoku(matrix, row + 1, 0);
    if(matrix[row][col] != 0) 
        return solveSudoku(matrix, row, col + 1);

    for(int num = 1; num <= 9; num++) {
        if(check(matrix, num, row, col)) {
            matrix[row][col] = num;
            if(solveSudoku(matrix, row, col + 1)) 
                return true;
            matrix[row][col] = 0;
        }
    }
    return false;
}

bool isItSudoku(int matrix[9][9]) {
   if(solveSudoku(matrix, 0, 0))
       return true;
    return  false;
}
