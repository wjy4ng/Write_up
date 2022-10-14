/*
	* 학번 및 이름 : 202101354 정보통신공학과 양원준
	* 목적 및 개요 : 2-2학기 자료구조및알고리즘 과제 <큐를 이용한 고객서비스 시뮬레이션>
	* 과제수행날짜 : 2022.10.14(금)
	* 사용언어 : C언어
	* 프로그램 작성환경 및 실행환경 :
	*	OS : Kali GNU/Linux Rolling 2022.3
	*	IDE : vim editor 9.0
	*	Compiler gcc 11.3.0
*/



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_QUEUE_SIZE 5

// 고객 구조체 생성
typedef struct{
	int id;
	int arrival_time;
	int service_time;
} element;

// 원형큐 타입 고객 배열 구조체 생성
typedef struct{
	element data[MAX_QUEUE_SIZE];
	int front, rear;
} QueueType;

// 사용자 함수 프로토타입 선언
void init_queue(QueueType *q);
int is_empty(QueueType *q);
int is_full(QueueType *q);
void enqueue(QueueType *q, element item);
element dequeue(QueueType *q);


int main(){
	int minutes=60;
	int total_wait=0;
	int total_customers=0;
	int service_time=0;
	int service_customer;
	QueueType queue;
	init_queue(&queue);
}


// 큐 초기화 함수
void init_queue(QueueType *q){
	q->front = q->rear = 0;
}

// 큐 비어있는지 확인하는 함수
int is_empty(QueueType *q){
	return (q->front == q->rear);
}

// 큐 가득찼는지 확인하는 함수
int is_full(QueueType *q){
	return ((q->rear + 1) % MAX_QUEUE_SIZE == q->front);
}

// 큐 리어에 데이터 삽입하는 함수
void enqueue(QueueType *q, element item){
	if(is_full(q)){
		printf("큐가 포화상태입니다."); // error?
		exit(1);
	}
	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
	q->data[q->rear] = item;
}

// 큐 프론트의 데이터 삭제하는 함수
element dequeue(QueueType *q){
	if(is_empty(q)){
		printf("큐가 공백상태입니다.");
		exit(1);
	}
	q->front = (q->front + 1) % MAX_QUEUE_SIZE;
	return q->data[q->front];
}

