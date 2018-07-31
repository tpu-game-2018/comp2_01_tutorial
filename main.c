#include <stdio.h>
#include <stdlib.h>

// argv[1] に問題のファイル名が入ってきます
int main(int argc, char *argv[]) 
{
    FILE *fp;

    // ファイルの読み込み
    char *filename = argv[1];
    if ((fp = fopen(filename, "r")) == NULL) {
        fprintf(stderr, "Failed to open %s.\n", filename);
        exit(EXIT_FAILURE);
    }

    //##### ここから書き換えてファイルを読み込んで、結果を出力する
    char str[256];
    fgets(str, sizeof(str), fp);// ファイルから一行読み込む
    printf("%s\n", "XXXXX");

    //##### だいたいここまで書き換える

    // ファイルを閉じる
    fclose(fp);

    return 0;
}
