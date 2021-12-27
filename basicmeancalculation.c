#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

/*basicmeancalculation
ver. 1
 main
 sqre
@ddaiem*/

int sqre(int A, int B) {
	int k;
	int result = 1;

	for (k = 0; k < B; k++) {
		result = result * A;
	}
	return result;
}

int main(void) {
	int i = 0, j = 0, sum1 = 0, sum2 = 0; //i=변량수 j=임의 실수
	int variance[50]; //변량값 입력
	int mean = 0, pmean = 0; //평균값
	int deviation[50]; //편차값

	double SD;//표준편차

	int n;//제곱 횟수

	printf("if standard deviation is less than 1, it returns '0'\n\n");

	printf("variance can only be integar");
	printf("enter number of variance:");
	scanf("%d", &i);

	for (j = 0; j < i; j++) {
		printf("enter variance[%d]:", j + 1);
		scanf("%d", &variance[j]);

		sum1 += variance[j];
	}

	mean = sum1 / i;

	for (j = 0; j < i; j++) {
		deviation[j] = (variance[j] - mean) * (variance[j] - mean);
		sum2 += deviation[j];
	}
	SD = sqrt(sum2 / i);

	printf("\n");
	printf("mean: %d\n", mean);
	printf("standard deviation: %f\n", SD);
	printf("sqaure of standard deviation: %f\n", SD * SD);

	printf("\n");

	printf("enter number of square:");
	scanf("%d", &n);

	for (j = 0; j < i; j++) {
		variance[j] = sqre(variance[j], n);
		printf("variance[%d]=%d\n", j + 1, variance[j]);

		pmean = pmean + variance[j];
	}

	pmean = pmean / i;

	printf("squared mean: %d\n", pmean);

	return 0;
}
