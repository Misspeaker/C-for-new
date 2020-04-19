/*
利用嵌套判断语句判定三条边是否能构成三角形
提供者：misspeak
定稿日期：2020-4-19
运行平台：VS2019(C++)
*/
#include <stdio.h>

//判断函数，任意两边之和大于第三边。
int Judge(int lineOne, int lineTwo, int lineThree) {
	if (lineOne + lineTwo > lineThree)
		if (lineOne + lineThree > lineTwo)
			if (lineTwo + lineThree > lineOne)
				return 1;
	return 0;
	//构成返回1，否则返回0；
}
int main()
{
	int data[3]; //定义存储边长的数组；
	printf("Input side length：\n");
	scanf_s("%d %d %d", &data[0], &data[1], &data[2]); //输入三条边长；     
	if (Judge(data[0], data[1], data[2])) printf("Yes\n");
	else printf("NO\n");
}
