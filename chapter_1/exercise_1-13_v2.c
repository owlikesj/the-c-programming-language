#include <stdio.h>

#define MAX_LENGTH 100
#define IN 1
#define OUT 0

void main()
{
	char c;
	long count[MAX_LENGTH];
	int i, j, state, length = 0, maxLength = 0;

	// 初始化统计数组
	for (i = 0; i < MAX_LENGTH; i++)
		count[i] = 0;

	// 统计各长度单词的数量
	state = OUT;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\t' || c == '\n')
		{
			if (state == IN)
			{
				count[length]++;
				if (count[length] > maxLength)
					maxLength = count[length];
				length = 0;
			}
			state = OUT;
		}
		else
		{
			state = IN;
			length++;
		}
	}

	// 打印垂直直方图
	for (i = 0; i < maxLength; i++)
	{
		for (j = 0; j < MAX_LENGTH; j++)
			if (count[j])
				if (count[j] >= maxLength - i)
					printf("  #");
				else
					printf("   ");
		putchar('\n');
	}
	for (j = 0; j < MAX_LENGTH; j++)
		if (count[j])
			printf("___");
	putchar('\n');
	for (j = 0; j < MAX_LENGTH; j++)
		if (count[j])
			printf("%3d", j);
	putchar('\n');
}
