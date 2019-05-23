#include <stdio.h>

char getHyouka(int); //関数プロトタイプの宣言
char* getKamoku(int); //関数プロトタイプの宣言

struct seiseki{ //成績を表示する構造体
    char cls; //クラス名（文字）
    int no; //出席番号
    char *name; //名前
    int tokuten[6]; //国語、数学、理科、社会、 英語、合計を格納
    char rank; //評価　400点以上A 300点以上B 200点以上C 100点以上D 100点未満E
};

int main(int argc, const char* argv[]){
    return 0;
}

//科目名を返す関数
char* getKamoku(int i){
    char *kamoku;
    switch (i)
    {
    };
    return 0;
}
