#include<stdio.h>
#include<string.h>

void string_ch_found() {

	char str[20], ch;
	int n, flag = 0,size,i=0;
	printf("enter string and character\n");

	gets(str);
	ch = getchar();
	
	//to find character predefined fun
	printf(" string %s and character %c\n",str,ch);
	if (strchr(str, ch))
		printf("found\n");
	else 
		printf("not found\n");
	//to calcuate len and size predefined
	n = strlen(str);
	size = sizeof(str);
	printf("strlen %d and size %d\n",n,size);


	while (str[i]) {
		if (str[i] == ch) {
			printf("found in loop\n");
			flag = 1;
			break;
		}
		i++;
	}

	if (flag==0)
		printf("not found in loop\n");
}

void stringcopy() {
	char s1[20], s2[20];
	char s3[60] = "hai",s4[30]="haiaadhya";
	int pos = 3;
	gets(s1);

	strcpy_s(s2,sizeof(s2), s1);  //tocopy from one str to str

	printf("str1 %s str2 %s\n", s1, s2);

	strcat_s(s3,sizeof(s3),s2);   // to add both 
	printf("str3 %s\n", s3);

	memmove(s4 + pos + strlen(s1), s4 + pos, strlen(s4 + pos));
	printf("str4 %s\n", s4);

	memmove(s4+3, s1,strlen(s1));  //tocopy from one str to str in middle

	printf("str4 %s\n", s4);
}

// find string occurances and if found remove
void strstr_manual() {
	char str1[20] = "AAdhyaAnushaAnd", str2[20] = "An";
	char* ptr;
	ptr = str1;

	//find string occurances
	while (ptr = strstr(ptr, str2)) {
		printf("found at %d\n", ptr - str1);
		ptr = ptr + strlen(str2);
	}

	ptr = str1;
	//Remove repetetions
	while (ptr = strstr(ptr, str2)) {
		strcpy_s(ptr, sizeof(str1)-(ptr-str1),ptr + strlen(str2));
	}
	printf("ptr string %s\n", str1);
}

void strcmp_manual() {
	char s1[20] = "1fabcd", s2[20] = "abcd";
	int n;
	n = strcmp(s1, s2);
	if (n == 0)
		printf("equal");
	else
		printf("not equal");

}