#include <stdio.h>
#include <assert.h>               //assert专用文件
//void my_strcpy(char* ch1, char* ch2)
//{
//	while (*ch2 != '\0')
//	{
//		*ch1 = *ch2;
//		ch1++;
//		ch2++;
//	}
//	*ch1 = *ch2;
//	
//}
//int main()
//{
//	char ch1[20] = "*************";
//	char ch2[20] = "play";
//	my_strcpy(ch1, ch2);
//	printf("%s\n",ch1);
//	return 0;
//
//}
//char * my_strcpy(char* ch1, const char* ch2)
//{
//	char* ret = ch1;
//	assert(ch1 != NULL);   //断言(检查传参过来的是否为空指针，是则报错并显示错误在结果中。)
//	assert(ch2 != NULL);   //断言
//	
//		while (*ch1++ = *ch2++)
//		{
//			;
//			
//		}
//		return ret;
//}
//int main()
//{
//	char ch1[20] = "*************";
//	char ch2[20] = "play";
//	
//	printf("%s\n", my_strcpy(ch1, ch2) );
//	return 0;
//
//}
int my_strlen(char* ch)
{
	int count = 0;
	assert(ch != NULL);
	while (*ch != '\0')
	{
		
		count++;
		ch++;
	}
	return count;
}
int main()
{
	char ch[] = "abcdef";
	int num=my_strlen(ch);
	printf("该字符串长度为:%d\n", num);
	return 0;
}