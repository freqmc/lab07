#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

void task01(char);
void task02(float, char, float);
void task03(int);

int main() {
	char c;
	float x, y;
	int a;
	setlocale(LC_CTYPE, "RUS");
	printf("������� ������ : ");
	scanf("%c", &c);//���������� � �������
	getchar();
	task01(c);
	
	printf("������� ��������� ��������� �������: ����� ���� �����\n+ - ��������, - - ���������, * - ���������, / - �������, ^ - �������� � �������\n");
	scanf("%f %c %f", &x, &c, &y);
	getchar();
	task02(x, c, y);

	printf("������� �����\n");
	scanf("%d", &a);
	getchar();
	task03(a);
}

void task01(char c) {
	switch (c)
	{
	case 'a':
		printf("������� ����� %c.\n", c);
		break;

	case 'b':
		printf("������� ����� %c.\n", c);
		break;

	case 'c':
		printf("������� ����� %c.\n", c);
		break;

	case '1':
		printf("������� ����� %c.\n", c);
		break;

	case '2':
		printf("������� ����� %c.\n", c);
		break;

	case '3':
		printf("������� ����� %c.\n", c);
		break;

	default:
		printf("����������� ������\n");
	}
}

void task02(float x, char c, float y) {
	switch (c) {
	case '+':
		printf("%f %c %f = %f\n", x, c, y, x + y);
		break;

	case '-':
		printf("%f %c %f = %f\n", x, c, y, x - y);
		break;

	case '*':
		printf("%f %c %f = %f\n", x, c, y, x * y);
		break;

	case '/':
		printf("%f %c %f = %f\n", x, c, y, x / y);
		break;

	case '^':
		printf("%f %c %f = %f\n", x, c, y, pow(x,y));
		break;

	default:
		printf("����� �������� ���!");
		break;
	}
}

void task03(int num) {
	switch (num) {
	case 0:
		printf("%d - zero\n", num);
		break;
	
	case 1:
		printf("%d - one\n", num);
		break;
	
	case 2:
		printf("%d - two\n", num);
		break;
	
	case 3:
		printf("%d - three\n", num);
		break;
	
	case 4:
		printf("%d - four\n", num);
		break;
	
	case 5:
		printf("%d - five\n", num);
		break;
	
	case 6:
		printf("%d - six\n", num);
		break;
	
	case 7:
		printf("%d - seven\n", num);
		break;
	
	case 8:
		printf("%d - eight\n", num);
		break;
	
	case 9:
		printf("%d - nine\n", num);
		break;

	default:
		printf("Unknown number!\n");
		break;
	}
}