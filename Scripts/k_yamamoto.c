# include<stdio.h>

int main(void){
    char y;

    y = "伊沢拓司"[0];

    for(int i = 0; i < 10; i++){
        printf("バカ → %c\n", y);
    }

    return 0;
}