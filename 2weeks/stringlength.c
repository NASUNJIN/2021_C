#include<stdio.h>

int main() {
	int i, length = 0;
	char str[50];

	printf("\n���ڿ��� �Է��ϼ��� : ");
	gets(str);

	printf("\n�Էµ� ���ڿ��� \n \"");
	for (i = 0; str[i] != '\0'; i++) {
		printf("%c", str[i]);
		length += 1;
	}
	/*for(i=0;str[i];i++){
	printf("%c", str[i]);
		length += 1;
	*/
	printf("\" \n�Դϴ�.");
	printf("\n\n�Էµ� ���ڿ��� ���� = %d \n", length);
}