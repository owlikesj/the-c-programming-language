#include <stdio.h>

#define MAX_LENGTH 100
#define IN 1
#define OUT 0

void main()
{
	char c;
	long count[MAX_LENGTH];
	int i, j, state, length = 0;

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

	// 打印水平直方图
	for (i = 0; i < MAX_LENGTH; i++)
		if (count[i])
		{
			printf("%3d | ", i);
			for (j = 0; j < count[i]; j++)
				putchar('#');
			putchar('\n');
		}
}
