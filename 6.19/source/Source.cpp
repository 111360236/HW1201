#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main() {
	srand(time(NULL));
	int a ; 
	int b ;
	int total[11] = {};
	for (int i = 0; i < 36000; i++) {
		a = rand() % 6 + 1;
		b = rand() % 6 + 1;
		switch (a+b)
		{
		case 2:
			total[0]++;
			break;

		case 3:
			total[1]++;
			break;

		case 4:
			total[2]++;
			break;

		case 5:
			total[3]++;
			break;

		case 6:
			total[4]++;
			break;

		case 7:
			total[5]++;
			break;

		case 8:
			total[6]++;
			break;

		case 9:
			total[7]++;
			break;

		case 10:
			total[8]++;
			break;

		case 11:
			total[9]++;
			break;

		case 12:
			total[10]++;
			break;
		default:
			break;
		}
	}
	
	printf("¼Æ¦r\t");
	for (int i = 2; i < 13; i++) {
		printf("%d\t",i);
	}
	printf("\n¼Æ¶q\t");
	for (int i = 0; i <11 ; i++) {
		printf("%d\t", total[i]);
	}
}