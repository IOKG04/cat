#define cmp(meow) if(strc(b, meow "\n")) printf("%s",b)
int strc(char *a, char *b){int i=0;while(a[i]){if(a[i]!=b[i])return 0;++i;}return 1;}int main(){for(;;){char b[256]={};int i=0;while((b[i++]=getchar())!='\n');cmp("meow");cmp("mew");cmp("miau");cmp("mijau");cmp("nya");cmp(":3");}}
