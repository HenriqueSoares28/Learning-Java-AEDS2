#include <stdio.h>
#include <string.h>

int main () {
    char str1[1000];
    char str2[1000];
    while(scanf("%s%s", str1, str2) &&  !feof(stdin)){
        int len1 = strlen(str1);
        int len2 = strlen(str2);
        int len3 = len1 + len2;
        char* str3 = (char*)malloc(sizeof(char)*len3);
        int c1 = 0, 
            c2 = 0;
        for(int i=0; i < len3; i++){
            if(i % 2 == 0){
                if(c1 < len1){
                    str3[i] = str1[c1];
                    c1++;
                }else{
                    str3[i] = str2[c2];
                    c2++;
                }
            }
            if(i % 2 != 0){
                if(c2 < len2){
                    str3[i] = str2[c2];
                    c2++;
                }else{
                    str3[i] = str1[c1];
                    c1++;
                }
            }
        }
        for(int i=0; i<len3; i++) printf("%c", str3[i]);
        printf("\n");
    };
}