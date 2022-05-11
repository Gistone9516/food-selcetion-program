#include "main_header.h"

//ap_src 문자열에서 a_deli or NULL이 나올때까지 ap_buf 메모리에 문자열을 복사한다
//if, ap_src == "mon,str" and a_deli == "," 일때 ap_buf 에는 "mon"이 저장됨
//위의 예시로 이 함수는 "," 가 위치한 주소를 반환한다
char* GetNext(char* ap_src, char a_deli, char* ap_buf) {
	while (*ap_src && *ap_src != a_deli) { *ap_buf++ = *ap_src++; }
	//a_deli가 나올때까지 문자열(ap_src)을 계속 읽으며, ap_buf에 읽은 값(한 글자)을 넣는다.

	if (*(ap_buf - 1) == '\n') { *(ap_buf - 1) = 0; } 
	else { *ap_buf = 0; }
	//ap_buf의 마지막 문자가 '\n' 이라면 NULL(0)로 바꿔준다.
	//'\n' 이 아니라면 NULL을 붙여준다. 

	if (*ap_src == a_deli) { ap_src++; }
	//현재 ap_src 포인터가 가리키는 a_deli 값은 이미 문자열 분리에 사용된 위치거나 NULL값이다
	//건너뜀으로써 다음 a_deli 값을 찾을 수 있게 된다

	return ap_src;
	//탐색 종료한 위치 주소 반환
}

int rand_c(int count) {
	srand((unsigned int)time(NULL));
	int num = NULL;
	do {
		num = rand()%100;
		Slep10;
	} while (num >= count);
	return num;
}


int global(const char* Menu_table, int mon, int sel, int* Lockstack, int stack) {

	if (*Lockstack > 0) { percent(stack, Lockstack); } // 이후 잠금
	while (1) {

		FILE* p_file = NULL;
		if (0 == fopen_s(&p_file, Menu_table, "rt")) {

			int o = 0; //로딩 변수
			char line_s[128], str[32], * p_pos; //라인 저장, 
			const char* data_table[3] = { " %s ", " %s ", " %s \n" }; //데이터 받아들이는 형태. 이름, 가격, 칼로리, 고유번호
			char data[2000] = { NULL };//정제되지 않은 데이터 저장 배열

			while (NULL != fgets(line_s, 128, p_file)) {
				p_pos = line_s;
				Slep5;
				for (int i = 0; *p_pos; i++) {
					p_pos = GetNext(p_pos, ',', str);  // 데이터 수집. p_pos 파일의 한 줄, ',' 분리시킬 문자, 분리된 문자열을 저장할 배열
					strcat(data, (data_table[i], str)); //data_table[i]는 비어있는 상태. str을 넣어주고 data에 한번더 넣어줌
					Slep5;
					strcat(data, " "); //공백을 넣어줌으로써 분리 기준점을 만듦
					//김밥" "2000" "300" "

				}
				strcat(data, "\n"); //한 줄을 가져온 후 엔터
				//김밥" "2000" "300" "\n
				//오징어볶음" "5000" "500" "\n


				printf("Loding~ %d\n", o);
				system("cls");
				o++;
			}//TOTAL DATA   ------- 정보 가져옴

			char* data_a[90];
			char* ptr = strtok(data, "\n");
			int count = 0;
			while (ptr != NULL) {
				data_a[count] = ptr;
				ptr = strtok(NULL, "\n");
				count++;
			}
			// 
			// 
			// /[0]김밥" "2000" "300" "\n
				//[1]오징어볶음" "5000" "500" "\n
			//엔터를 기준으로 데이터를 나눔
			printf("Complete\n");
			int num = NULL;
			char* info[4];
			bool food = 1;
			int loding_stack = 0;
			do {
				num = rand_c(count); //하나의 메뉴 선정
				char* pto = strtok(data_a[num], " ");
				Slep100;
				//뽑힌 메뉴는 한 줄의 데이터를 가짐. 공백을 기준으로 나눈다
				//info[0] == name, info[1] == price, info[2] == kcal
				for (int i = 0; i < 3; i++) {
					info[i] = pto;
					pto = strtok(NULL, " ");
					if (loding_stack < 7) { Sleep(600); }
					else { Sleep(800); }
					printf("Almost Done. . .\n");
					system("cls");
				}
				//
				int price = atoi(info[1]); //atoi 문자열(정수) -> int형변환
				if (price - mon <= 2000 && price - mon >= -2000) {
					food = 0;
				}
				Slep100;
				Slep10;
			} while (food);
			printf("Done\n");
			int buf = MenuUI(sel, info[0], info[1], info[2]); // 0 name, 1 price, 2 kcal 문자열 데이터이다.

			if (buf == 1) {
				stack++;
			}
			else if (buf == 0) {
				break;
			}
			//

			/*
			for (int i = 0; i < count; i++) {
				printf(data_a[i]);  //데이터 "\n"을 기준으로 분할, 배열로 구분한다.
				printf("\n");
			}
			*/

			fclose(p_file);
			percent(stack, Lockstack);
			printf("%d", *Lockstack);
			Slep100;
			system("cls");
		}
	}
	system("cls");
	return stack; //시도 횟수 반환
}




const char *table[4] = { "korea_foods_chef.csv","market_foods_chef.csv","china_foods_chef.csv","japan_foods_chef.csv" };
int chef_recom(int mon, int* Lockstack, int stack) {
	if (*Lockstack > 0) { percent(stack, Lockstack); }
	while (1) {
		char* data_all[100] = { NULL };
		int count = 0;
		for (int m = 0; m < 4; m++) {
			FILE* p_file = NULL;
			if (0 == fopen_s(&p_file, table[m], "rt")) {
				int o = 0;

				char line_s[128], str[32], * p_pos;
				const char* title_table[3] = { " %s ", " %s ", " %s \n" };
				const char* data_table[3] = { " %s ", " %s ", " %s \n" };

				char data[1000] = { NULL };
				char* data_a[30] = { NULL };
				int count_s = 0;

				while (NULL != fgets(line_s, 128, p_file)) {
					p_pos = line_s;
					Slep20; 
					if (m == 0) { strcat(data, "[한]"); Slep20; }
					else if (m == 1) { strcat(data, "[편]"); Slep20;}
					else if (m == 2) { strcat(data, "[중]"); Slep20; }
					else if (m == 3) { strcat(data, "[일]"); Slep20; }
					for (int i = 0; *p_pos; i++) {
						p_pos = GetNext(p_pos, ',', str); // 데이터 수집. p_pos 파일의 한 줄, ',' 분리시킬 문자, 분리된 문자열을 저장할 배열
						strcat(data, (data_table[i], str));
						Slep10;
						strcat(data, " ");
					}
					strcat(data, "\n"); //한 줄을 가져온 후 엔터
					printf("Loding~ %d\n", o);
					system("cls");
					o++;
				}

				char* ptr = strtok(data, "\n");
				while (ptr != NULL) {
					data_a[count_s] = ptr;
					ptr = strtok(NULL, "\n");
					count_s++;
				}
				system("cls");

				//
				int i = 0;
				
				while (1)
				{
					data_all[count] = data_a[i];
					//printf(data_all[count]);
					//printf("\n");
					if (data_a[i + 1] == NULL) { count++; break; }
					i++; count++;
					Slep10;
					
				}
				fclose(p_file);
			}
		}
		int d = 0;
		while(data_all[d] != NULL){
			printf(data_all[d]);  //데이터 "\n"을 기준으로 분할, 배열로 구분한다. 
			if(data_all[d] != NULL) { printf("\n"); }
			d++;
		}
		
		system("pause");
//


		int num = NULL;
		char* info[3];
		bool food = 1;
		int loding_stack = 0;

		system("cls");
		system("pause");


		//
		do {
			num = rand_c(count);
			char* pto = strtok(data_all[num], " ");
			Slep100;
			for (int i = 0; i < 3; i++) {
				info[i] = pto;
				pto = strtok(NULL, " ");
				if (loding_stack < 4) { Sleep(300); }
				else { Sleep(600); }
				printf("Almost Done. . .\n");
				system("cls");
				Slep100;
				Slep100;
			}// -------------- 정보 가공 -> 리스트
			int price = atoi(info[1]); //atoi 문자열(정수) -> int형변환
			if (price - mon <= 2000 && price - mon >= -2000) {
				food = 0;
			}
			Slep100;
		} while (food);


		int buf = MenuUI(0, info[0], info[1], info[2]);
		if (buf == 1) {
			stack++;
		}
		else if (buf == 0) {
			break;
		}
		//
		/*
		for (int i = 0; i < count; i++) {
			printf(data_a[i]);  //데이터 "\n"을 기준으로 분할, 배열로 구분한다. 
			printf("\n");
		}
		*/
		percent(stack, Lockstack);
		printf("%d", *Lockstack);
		Slep100;
		system("cls");
	}
	system("cls");
	return stack;
}



