#include <stdio.h>
#include <stdlib.h>

struct bilgi
{
char ad[10];
char soyad[15];	
};
int main() {
int n;
int i;
struct bilgi *p;
char ad,soyad;	
printf("lutfen kac ogrenci gireceginizi girin ");
scanf("%d",&n);
 p=(struct bilgi*)malloc(n*sizeof(struct bilgi));	
	
for(i=0;i<n;i++)
{
	printf("%d. ogrenci:\n",i+1);
	printf("ogrenci adi giriniz");
	scanf("%s",&p[i].ad);
	printf("soaydi giriniz");
	scanf("%s",&p[i].soyad);
	}	
	printf("\nkaydedilen bilgiler\n");
	for(i=0;i<n;i++)
	{
	printf("%d. ogrenci:\n",i+1);
			printf("ad: %s\n",p[i].ad);
	printf("soad: %s\n",p[i].soyad);
	}
	free(p);
	
	
	
	
	return 0;
}
