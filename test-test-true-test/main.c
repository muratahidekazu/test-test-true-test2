//////////////////////////////////////////////////////  以下，大井さん












//////////////////////////////////////////////////////// 以下，お大熊さん














  //////////////////////////////////////////////// 以下，神田さん














////////////////// 以下，桑島さん













//////////////////////// 以下，菅井さん
void print( Matrix *matrix ){
  for ( int irow = 0 ; irow < matrix->nrow ; irow++ ){
    for ( int icol = 0 ; icol < matrix->ncol ; icol++ ){
      printf("%g ",matrix->element[irow * matrix->ncol + icol ]);
    }
    printf("\n");
  }
  printf("\n");
}









