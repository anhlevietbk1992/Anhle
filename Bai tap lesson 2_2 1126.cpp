#include <stdio.h>
 int main(){
 	int a,b;
 	printf("Nhap so nguyen a: ");
 	scanf("%d",&a);
 	printf("Nhap so nguyen b: ");
 	scanf("%d",&b);
 	if	(a>=b){
 		printf("Ket qua a/b la %f",(float)a/b);
	 }else{
	 	printf("Ket qua b/a la %f",(float)b/a);
	 }
}
