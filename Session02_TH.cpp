#include <stdio.h>

int main(){
	//B1: Nhap 2 so nguyen
		//B1.1. Khai bao bien
		int firstNumber, secondNumber;
		//B1.2. Thong bao nhap
		printf("Nhap vao so nguyen thu nhat:");
		//B1.3: Su dung scanf lay gia tri nhap va luu vao bien
		scanf("%d",&firstNumber);
		printf("Nhap vao so nguyen thu hai:");
		scanf("%d",&secondNumber);
	//B2: Su dung cac toan tu tinh tong, tich, hieu, thuong
	int sum = firstNumber + secondNumber;
	int mul = firstNumber * secondNumber;
	int div = firstNumber / secondNumber;
	int sub = firstNumber - secondNumber;
	//B3: In gia tri tong, tich, hieu, thuong
	printf("Tong: %d - Hieu: %d - Tich: %d - Thuong: %d\n",sum, sub,mul, div);
}
