#include <stdio.h>
#include <assert.h>               //assertר���ļ�
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
//	assert(ch1 != NULL);   //����(��鴫�ι������Ƿ�Ϊ��ָ�룬���򱨴���ʾ�����ڽ���С�)
//	assert(ch2 != NULL);   //����
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
	printf("���ַ�������Ϊ:%d\n", num);
	return 0;
}