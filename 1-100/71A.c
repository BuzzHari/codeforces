#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d", &n);
    char str[101];
    while(n--){
        scanf("%s", str);
        int len = strlen(str);
        if(len>10)
            printf("%c%d%c\n", str[0],len-2,str[len-1]);
        else
            printf("%s\n",str);
    }
    return 0;
}
