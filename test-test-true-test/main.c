// エディタでのコピーペーストではなく，マージ操作で自動的に自分の担当コードを加える練習


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
