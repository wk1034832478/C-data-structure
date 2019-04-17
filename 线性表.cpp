/**
	本c语言代码将实现线性表的基本应用
	实现功能：
*/
#include<stdio.h>
#include<stdlib.h>
/**
* 确定线性表数据类型，使用typedef来实现，eg：typedef int EleType;
* 线性表应该具有的特性：
* 在数据元素的非空有限集合中：
* 1. 存在唯一的一个被称做第一个的数据元素
* 2. 存在唯一的一个被称做最后一个的数据元素
* 3. 除第一个外，集合中的每个数据元素均只有一个前驱
* 4. 除最后一个之外，集合中每个数据元素均只有一个后继
* 应当具有的功能：
* 1. InitList( List *list ); // 线性表初始化
* 2. DestroyList( List *list); // 销毁线性表
*
*/

// 初始容量
#define SIZE 20

enum HEALTH_STATUS {
	GOOD = 1, GENERAL, BAD = 2
};

/**
* 线性表使用的数据结构
*/
struct EleType {
	int id; // 个人id
	char* name ; // 姓名
	char gender ; // 性别
	short year; // 年龄
	HEALTH_STATUS health; //状况
}; // 健康

struct List {
	EleType *elements; // 数据元素
	int length; // 线性表长度,已经含有的数据元素 
	int size; // 线性表容量
} list;

int InitList( List *list ) {
	list->elements = (EleType*)malloc( sizeof(EleType) * SIZE );
	list->size = SIZE;
	return 0;
}

int DestroyList( List *list) {
	free( list->elements );
	list->size=0;
	list->length=0;
	return 0;
}

int main() {
	InitList( &list );
	DestroyList( &list );
	return 0;
}

