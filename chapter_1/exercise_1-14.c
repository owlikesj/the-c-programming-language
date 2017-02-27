#include <stdio.h>

#define CHAR_NUM 128

void main()
{
	char c;
	long count[CHAR_NUM];
	int i, j;

	// 初始化统计数组
	for (i = 0; i < CHAR_NUM; i++)
		count[i] = 0;

	// 统计各个字符数量
	while ((c = getchar()) != EOF)
		count[c]++;

	// 打印水平直方图
	for (i = 0; i < CHAR_NUM; i++)
		if (count[i])
		{
			if (i == '\t')
				printf("\\t | ");
			else if (i == '\n')
				printf("\\n | ");
			else
				printf(" %c | ", i);
			for (j = 0; j < count[i]; j++)
				putchar('#');
			putchar('\n');
		}
		else
			putchar(count[i]);
}
