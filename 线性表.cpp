/**
	��c���Դ��뽫ʵ�����Ա�Ļ���Ӧ��
	ʵ�ֹ��ܣ�
*/
#include<stdio.h>
#include<stdlib.h>
/**
* ȷ�����Ա��������ͣ�ʹ��typedef��ʵ�֣�eg��typedef int EleType;
* ���Ա�Ӧ�þ��е����ԣ�
* ������Ԫ�صķǿ����޼����У�
* 1. ����Ψһ��һ����������һ��������Ԫ��
* 2. ����Ψһ��һ�����������һ��������Ԫ��
* 3. ����һ���⣬�����е�ÿ������Ԫ�ؾ�ֻ��һ��ǰ��
* 4. �����һ��֮�⣬������ÿ������Ԫ�ؾ�ֻ��һ�����
* Ӧ�����еĹ��ܣ�
* 1. InitList( List *list ); // ���Ա��ʼ��
* 2. DestroyList( List *list); // �������Ա�
*
*/

// ��ʼ����
#define SIZE 20

enum HEALTH_STATUS {
	GOOD = 1, GENERAL, BAD = 2
};

/**
* ���Ա�ʹ�õ����ݽṹ
*/
struct EleType {
	int id; // ����id
	char* name ; // ����
	char gender ; // �Ա�
	short year; // ����
	HEALTH_STATUS health; //״��
}; // ����

struct List {
	EleType *elements; // ����Ԫ��
	int length; // ���Ա���,�Ѿ����е�����Ԫ�� 
	int size; // ���Ա�����
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

