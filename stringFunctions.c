#include<stdio.h>

int xstrlen(char *);
void xstrcpy1(char *,char *);
void xstrcpy2(char *,const char *s);
void xstrcat(char *,char *);
int xstrcmp(char *,char *);

int main(){
    char unameug[20]="REVA";
    char unamepg[]="KUVEMPU";
    char unamet[20];
    int len1,len2,ksc1,ksc2;

    len1=xstrlen(unameug);
    len2=xstrlen(unamepg);

    printf("String Length of Uname UG is %d\n",len1);
    printf("String Length of Uname PG is %d\n",len2);

    ksc1=xstrcmp(unameug,unamepg);
    ksc2='R'-'K';

    printf("String Comparison of Uname UG & Uname PG = %d\n",ksc1);
    printf("ASCII diffference of R & K = %d\n",ksc2);

    xstrcpy1(unamet,unameug);
    printf("String Copy of Unamet UnameUG\n");
    puts(unamet);

    xstrcpy2(unamet,unamepg);
    printf("String Copy of Unamet UnameUG(const)\n");
    puts(unamet);

    printf("String Concatination of Unamet & University\n");
    xstrcat(unamet," UNIVERSITY");
    puts(unamet);
}

int xstrlen(char *p){
    int len=0;
    while (*p!='\0')
    {
        len++;
        p++;
    }
    return len;
}

void xstrcpy1(char *t,char *s){
    while (*s!='\0')
    {
        *t=*s;
        s++;
        t++;
    }
    *t='\0';
}

void xstrcpy2(char *t,const char *s){
    while (*s!='\0')
    {
        *t=*s;
        s++;
        t++;
    }
    *t='\0';
}

void xstrcat(char *t,char *s){
    int len;
    len=xstrlen(t);
    t=t+len+1;
    *(t+len+1)="";
    t++;
    while(*s!='\0'){
        *t=*s;
        s++;
        t++;
    }
    *t='\0';
}

int xstrcmp(char *s1,char *s2){
    while(*s1==*s2){
        if(*s1=='\0')
            return 0;
            s1++;
            s2++;
    }
    return (*s1-*s2);
}
