//chp1/cypher.c
#include<stdio.h>
#include<string.h>
void cypher(char* msg, int sft)
{
	char ch;
	int i;
	for (i = 0; msg[i] != '\0'; ++i)
	{
		ch = msg[i];
		if (ch >= 'A' && ch <= 'Z')
		{
			ch += sft;
			if (ch > 'Z')
			{
				ch = ch - 'Z' + 'A' - 1;
			}
			else if (ch < 'A')
			{
				ch = ch + 'Z' - 'A' + 1;
			}

			msg[i] = ch;
		}
	}
	for (i = 0; msg[i] != '\0'; ++i)
	{
		ch = msg[i];
		if (ch >= 'a' && ch <= 'z')
		{
			ch += sft;
			if (ch > 'z')
			{
				ch = ch - 'z' + 'a' - 1;
			}
			else if (ch < 'a')
			{
				ch = ch + 'z' - 'a' + 1;
			}

			msg[i] = ch;
		}
	}
}

	int main(void){


		//사용자에게 메세지를 받음.
		char message[100];
		printf("Enter a message\n");
		fgets(message, sizeof(message), stdin);

		int shift;
		printf("Enter shift value: ");
		scanf_s("%d", &shift);
		//암호로 변경하기
		cypher(message, shift);

		//암호화 메세지 출력
		printf("Encrypted! %s", message);
		return 0;
	}