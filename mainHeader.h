#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <Windows.h>
#include <string>
#include <conio.h> //입출력 관련

#define CLS system("cls")
#define Slep5 Sleep(5)
#define Slep10 Sleep(10)
#define Slep20 Sleep(20)
#define Slep100 Sleep(100)

//KeyBorad
#define UP 0
#define DOWN 1
#define PICK 4

//Min, Sec
#define FIRST 0,10 
#define SECOND 0,30
#define THIRD 1,0
#define MORE 2,0

//Main 
int chef_recom(int mon, int* Lockstack, int stack); //쉐프 추천 함수
int global(const char* Menu_table, int mon, int sel, int* Lockstack, int stack); //개별 추천 함수
void percent(int num, int *Lockstack); //잠금 확률 함수


//UI
int MainUI(); //메인 메뉴 UI
int priceUI(int select); //가격 설정 UI
int MenuUI(int select, const char* food, const char* price, const char* kcal); //메뉴 추천 UI
int LockUI(int min, int sec); //잠금 화면 UI

//Util
void gotoxy_s(int x, int y); //좌표 지정
int rand_c(int count); //count 이하의 랜덤 수 반환
int keyControl(); //키보드 컨트롤
