#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,n;
	printf("entrer la taille de tableau:");
	scanf("%d",&n);
	int t[n];
	int v[n];
	for(i=0;i<n;i++){
	printf("entrer l'element%d de tableau",i+1);
	scanf("%d",&t[i]);
	}
	for(i=0;i<n;i++){
	v[i]=t[i];
	}	
	printf("les elements sont copie\t");
	for(i=0;i<n;i++){
	printf(":%d\t ",v[i]);
	}
	return 0;
}