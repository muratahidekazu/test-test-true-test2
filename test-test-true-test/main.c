//////////////////////////////////////////////////////  以下，大井さん












//////////////////////////////////////////////////////// 以下，お大熊さん

Matrix matrix, matrix1, matrix2;
matrix.nrow=10; matrix.ncol=10;
matrix1.nrow=10; matrix1.ncol=5;
assert( matrix.nrow * matrix.ncol <= NDATA );
assert( matrix1.nrow * matrix1.ncol <= NDATA );

// 単位行列を作る
for ( int irow = 0 ; irow < matrix.nrow ; irow++ ){
  for ( int icol = 0 ; icol < matrix.ncol ; icol++ ){
    matrix.element[ irow * matrix.ncol + icol ] = ( irow == icol ) ? 1.0 : 0.0; // if文でももちろんOK
  }
}
//////////////////////////////////////////////// 以下，神田さん














////////////////// 以下，桑島さん













//////////////////////// 以下，菅井さん










