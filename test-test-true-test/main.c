//////////////////////////////////////////////////////  以下，大井さん
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define NDATA 100

// 構造体を新たな型として定義して便利に使う（int や double と同じ立場の「型」になる）
typedef struct {
  double element[ NDATA ];
  int nrow;
  int ncol;
} Matrix;

// 関数のプロトタイプ宣言：コンパイラに引数の数と形を教えるだけ
void matrixmultiply( Matrix *, Matrix *, Matrix *);
void print( Matrix *);










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










