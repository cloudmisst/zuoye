#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>

int checkstr(const char *s, char *t, int flag, int lenstr) {
    char *q;
    for (; *(s + lenstr); s++) {
        if (flag)  // ??????
        {
            for (q = t; (*s == *q || *s - 32 == *q || *s + 32 == *q) && *q; s++, q++);

        } else  //?????
        {
            for (q = t; *s == *q && *q; s++, q++);
        }

        if (!*q) {
            return 1;
        }
    }

    return 0;
}

void split(char *src,const char *separator,char **dest,int *num) {
    /*
        src 源字符串的首地址(buf的地址)
        separator 指定的分割字符
        dest 接收子字符串的数组
        num 分割后子字符串的个数
    */
    char *pNext;
    int count = 0;
    if (src == NULL || strlen(src) == 0){
        //如果传入的地址为空或长度为0，直接终止
        return;
    }
    if (separator == NULL || strlen(separator) == 0) {
        //如未指定分割的字符串，直接终止
        return;
    }
    pNext = (char *)strtok(src,separator); //必须使用(char *)进行强制类型转换(虽然不写有的编译器中不会出现指针错误)
    while(pNext != NULL) {
        *dest++ = pNext;
        ++count;
        pNext = (char *)strtok(NULL,separator);  //必须使用(char *)进行强制类型转换
    }
    *num = count;
}


int main(){

    char str[100]={0};  //str是string的缩写, 即字符串
//    printf("请输入字符串：\n");
    scanf("%s", str);

    char t;
    int flag =0;
    int len = 4;
    char *az="+";
    char *ax="-";
    char *ac="*";
    char *av="/";
    if(checkstr(str,az,flag,len)>0){
        t='+';
    }else if(checkstr(str,ax,flag,len)>0){
        t='-';
    }else if(checkstr(str,ac,flag,len)>0){
        t='*';
    }else if(checkstr(str,av,flag,len)>0){
        t='/';
    }

    char *revbuf[2] = {0}; //存放分割后的子字符串
    double a=0,b=0;
    //分割后子字符串的个数
    int num = 0;
    switch(t) {
        case '*':
            split(str,"*",revbuf,&num); //调用函数进行分割
            a=atof(revbuf[0]);
            b=atof(revbuf[1]);
            printf("%.2f*%.2f=%.2f",a,b,(a*b));
            break;
        case '-':
            //分割后子字符串的个数
            split(str,"-",revbuf,&num); //调用函数进行分割
            a=atof(revbuf[0]);
            b=atof(revbuf[1]);
            printf("%.2f-%.2f=%.2f",a,b,(a-b));
            break;
        case '+':
            split(str,"+",revbuf,&num); //调用函数进行分割
            a=atof(revbuf[0]);
            b=atof(revbuf[1]);
            printf("%.2f+%.2f=%.2f",a,b,(a+b));
            break;
        case '/':
            split(str,"/",revbuf,&num); //调用函数进行分割
            a=atof(revbuf[0]);
            b=atof(revbuf[1]);
            if(b<=0){
                printf("The divisor is 0。\n");
            }else{
                printf("%.2f/%.2f=%.2f",a,b,(a/b));
            }
            break;
        default:
            printf("The divisor is 0");
            break;

    }
    return 0;
}

