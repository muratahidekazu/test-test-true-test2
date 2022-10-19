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
int main(int argc, const char * argv[]) {
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
void print( Matrix *matrix ){
  for ( int irow = 0 ; irow < matrix->nrow ; irow++ ){
    for ( int icol = 0 ; icol < matrix->ncol ; icol++ ){
      printf("%g ",matrix->element[irow * matrix->ncol + icol ]);
    }
    printf("\n");
  }
  printf("\n");
}









