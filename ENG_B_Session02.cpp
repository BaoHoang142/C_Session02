#include <stdio.h>
int main(){
	/*
		1. Khai bao cac bien: tuoi, gioi tinh, diem trung binh sinh vien	
		2. Khoi tao gia tri cho 3 bien
		3. Khai bao va khoi tao bien nam sinh cua sinh vien
		4. Khai bao va khoi tao cac diem toan,van, anh cua sv
	*/
	/*
		Cu phap khai bao bien:
			Datatype variableName;
		Cu phap khai bao va khoi tao bien:
			Datatype variableName = value;
	*/
	//1.
	int age;
	char sex;
	float avgMark;
	//2. Su dung toan tu = de khoi tao gia tri
	age = 18;
	sex = 'F';
	avgMark = 8.7;
	//3.
	int year = 2006;
	//4. Khai bao cac bien co cung kieu du lieu
	float toan = 8.2,van = 6.7, anh = 9.4;
	//Toan tu toan hoc : +, -, *, /, %, ++, --;
	10%2;//0
	int number = 10;
	int number1 = 2 + number++;
	//B1: 2+number --> 12 --> number1
	//B2: number++ --> number = 11
	printf("Gia tri number: %d\n",number1);
	int number2 = 2 + ++number;//13
	//B1: ++number --> number=11
	//B2: 11+2 --> number2 = 13
	//Toan tu so sanh: true || false (10>5-->true (1))
	//Toan tu logic: &&, ||, !
	//Toan tu gan: += (a+=b --> a = a+b), *=(a*=b--> a = a * b)
	
}
