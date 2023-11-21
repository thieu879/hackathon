#include<stdio.h>
#include<stdlib.h>
int main(){
	int row,col,min,max,sum,count,temp;
	int i,j,k,f;
	printf("Nhap so dong va cot:");
	scanf("%d %d",&row,&col);
	int numbers[row][col];
	do{
		printf("************************MENU**************************\n");
		printf("1. Nhap gia tri cac phan tu cua mang\n");
		printf("2. In gia tri cac phan tu trong mang theo ma tran\n");
		printf("3. Tinh so luong cac phan tu le chia het cho 5 trong mang\n");
		printf("4. In ra cac phan tu co gia tri lon nhat, nho nhat nam tren duong bien, duong cheo chinh, duong cheo phu\n");
		printf("5. Su dung thuat toan sap xep lua chon sap xep cac phan tu giam dan theo dong cua mang\n");
		printf("6. Tinh tong cac phan tu la so nguyen tu trong mang\n");
		printf("7. Su dung thuat toan chen sap xep cac phan tu tren duong chéo phu cua mang tang dan\n");
		printf("8. Nhap gia tri mot mang 1 chieu gom n phan tu và chi so cot muon chen vao mang, thuc hien chen vao mang 2 chieu\n");
		printf("9. Thoat\n");
		int choice;
		printf("Vui long nhap lua chon:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap cac gia tri cua mang:\n");
				for(i=0;i<row;i++){
					for(j=0;j<col;j++){
						printf("numbers[%d][%d]=",i,j);
						scanf("%d",&numbers[i][j]);
					}
				}
				break;
			case 2:
				for(i=0;i<row;i++){
					for(j=0;j<col;j++){
						printf("%d\t",numbers[i][j]);
					}
					printf("\n");
				}
				break;
			case 3:
				printf("so phan tu le chia het cho 5 trong mang la:");
				for (i = 0; i < row; i++){
					for (j = 0; j < col; j++){
						if (numbers[i][j] % 2 != 0 && numbers[i][j] % 5 == 0){
							count++;
						}
					}
				}
				printf("%d\n",count);
				break;
			case 4:
				max = numbers[0][0];
				min = numbers[0][0];
				for (i = 0; i < row; i++){
					for (j = 0; j < col; j++){
						max = (max < numbers[i][j]) ? numbers[i][j] : max;
						min = (min > numbers[i][j]) ? numbers[i][j] : min;
					}
				}
				printf("MAX la %d\tMIN la %d\n",max,min);
				break;
			case 5:
				for(i=0;i<row;i++){
					for(j=0;j<col-1;j++){
						for(f=j+1;f<col;f++){
							if(numbers[i][j]>numbers[i][j]){
								temp=numbers[i][j];
								numbers[i][j]=numbers[i][f];
								numbers[i][f]=temp;
							}
						}
					}
				}
				for(i=0;i<row;i++){
					for(j=0;j<col;j++){
						printf("%d\t",numbers[i][j]);
					}
				}
				printf("\n");
				break;
			case 6:
				sum=0;
				for(i=0;i<row;i++){
					for(j=0;j<col;j++){
						count=0;
						for(k=2;numbers[i][j]>k;k++){
							if(numbers[i][j]%k==0){
								count=1;
								break;
							}
						}
						if(count==0&&numbers[i][j]>=2){
							sum+=numbers[i][j];
						}
					}
				}
				printf("tong so nguyen to la:%d",sum);
				break;
			case 7:
				break;
			case 8:
				break;
			case 9:
				exit(0);
				break;
			default:
				printf("Vui long lua chon:\n");
		}
	}while(1==1);
}
