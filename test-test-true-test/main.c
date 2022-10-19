//////////////////////////////////////////////////////  以下，大井さん












//////////////////////////////////////////////////////// 以下，お大熊さん














  //////////////////////////////////////////////// 以下，神田さん














////////////////// 以下，桑島さん

void matrixmultiply(  Matrix *matrix, Matrix *matrix1, Matrix *matrix2){
  for (int irow = 0; irow < matrix2->nrow; irow++) { //matrix2 の要素（irow,icol）とする
    for (int icol = 0; icol < matrix2->ncol; icol++) {
      double sum = 0.;
      for (int k = 0; k < matrix->ncol; k++) {
        sum += matrix->element[ irow * matrix->ncol + k ] * matrix1->element [ k * matrix1->ncol + icol ];
      }
      matrix2->element[ irow * matrix2->ncol + icol ] = sum;
    }
  }
}











//////////////////////// 以下，菅井さん










