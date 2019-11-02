#define _CRT_SECURE_NO_WARNINGS 1
#include"common.h"
#include"bintree.h"
int main()
{
	//ABC##DE##F##G#H##
	//¶þ²æÊ÷
	BinTree bt;
	BinTreeInit(&bt);
	CreateBinTree(&bt);
	printf("VLR : ");//ABCDEFG
	PreOrder(&bt);
	printf("\n");
	printf("LVR : ");//CBEDFAGH
	InOrder(&bt);
	printf("\n");
	printf("LRV : ");//
	PostOrder(&bt);
	printf("\n");
	return 0;
}