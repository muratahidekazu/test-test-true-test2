//////////////////////////////////////////////////////  以下，大井さん












//////////////////////////////////////////////////////// 以下，お大熊さん














  //////////////////////////////////////////////// 以下，神田さん
// matrix1 に任意の (nrow1, ncol1) の行列を作る
for (int i = 0; i < matrix1.nrow * matrix1.ncol ; i++ ) {
  matrix1.element[i] = i + 1;
}
// matrix と matrix1 の積を計算し結果を matrix2 に入れる
matrix2.nrow = matrix.nrow;
matrix2.ncol = matrix1.ncol;
assert( matrix2.nrow * matrix2.ncol <= NDATA );

matrixmultiply( &matrix, &matrix1, &matrix2);

// matrix, matrix1, matrix2 を見やすく表示する
print( &matrix );
print( &matrix1 );
print( &matrix2 );
}

////////////////// 以下，桑島さん













//////////////////////// 以下，菅井さん










