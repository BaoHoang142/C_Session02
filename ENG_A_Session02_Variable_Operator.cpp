#include <stdio.h>
int main(){
	/*
		Cu phap khai bao bien:
			Datatype variableName;
		Cu phap khai bao va khoi tao bien:
			Datatype variableName = value;
	*/
	//1. Khai bao cac bien: tuoi sinh vien, diem trung binh, gioi tinh sinh vien
	int age;
	float avgMark;
	char sex;
//	int 4number;//Sai --> bat dau la so
//	int first Number;//Sai --> ky tu dac biet space
//	int SecondNumber;//Sai --> ky tu dau viet hoa
//	int _firstNumber;
//	int first_number;
//	int first*number;
//	int first4number;
	//2. Khoi tao gia tri cac bien age, avgMark, sex
	age = 18;
	avgMark = 7.2;
	sex = 'F';
	//3. Khai bao va khoi tao gia tri bien number voi gia tri la 10
	int number = 10;
	//4. Khai bao va khoi tao gia tri cho nhieu bien co cung kieu du lieu
	float firstNumber = 3.7, secondNumber = 8.5;
	
	//5. Toan tu so hoc: +, - , *, /, %, ++, --
	int number1 = 10;
	int number2 = 5;
	int sub = number1 - number2;//5
	int sum = number1 + number2;//15
	int div = number1 / number2;//2
	int mul = number1 * number2;//50
	int digit = number1 % number2;//0
	number1++;//11
	number2--;//4
	int number3 = number1 + number2++;
	//B1: number1 + number2--> number3= 15
	//B2: number2++ --> number2 = 5
	printf("Gia tri number3 la: %d\n",number3);
	int number4 = number1 + ++number2;
	printf("Gia tri number3 la: %d\n",number4);
	//B1: ++number2 --> number2 = 6
	//B2: number1 + number2 --> number4 = 17
	//6. Toan tu quan he: >, <, >=, <=, == , !=
	//Ket qua: true hoac false
	int number5 = 10;
	int number6 = 8;
	printf("Ket qua: %d",(number5>number6)); 
	//7. Toan tu logic: && , ||, NOT (!)
	//Expression: Condition1 && Condition2 || Condition3....
	// true && true --> true
	// true && false --> false
	// false && false --> false
	// true || true --> true
	// true || false --> true
	// false || false --> false
	//!true --> false, !false --> true
	//8. Toan tu gan
	int number7 = 10;
	int number8 += number7; //number8 = number8 + number7;
	int number9 *=number7;//number9 = number9*number7
	
	
	
}
