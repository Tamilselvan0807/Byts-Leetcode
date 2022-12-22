void rotate(int** matrix, int matrixSize, int* matrixColSize){
  int l = matrixSize - 1;
  
  for (int i = 0; i < matrixSize / 2; i++) {
    for (int j = 0; j < (matrixSize + 1) / 2; j++) {
      int tmp = matrix[i][j];

      matrix[i][j] = matrix[l-j][i];
      matrix[l-j][i] = matrix[l-i][l-j];
      matrix[l-i][l-j] = matrix[j][l-i];
      matrix[j][l-i] = tmp;
    }
  }
}
