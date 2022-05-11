#include "main_header.h"

void gotoxy_s(int x, int y) {
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

//UI Start x 1, y 2 
int MainUI() {

	printf("|======================================================|\n");
	printf("|		┌─────────────────────┐                |\n");
	printf("|		│ 메뉴 추천 하찮이.ver│                |\n");
	printf("|		└─────────────────────┘                |\n");
	printf("|                             ,-~:~,                   |\n");
	printf("|                        .~!$$=*!!!=$=-                |\n");
	printf("|                    ,=#;.            ~$               |\n");
	printf("|                   !$~                !!              |\n");
	printf("|                 .=*.                 ,@.             |\n");
	printf("|                .*!                    #,             |\n");
	printf("|                **               ,-    *~             |\n");
	printf("|               :=       :;     .=#$:   !:             |\n");
	printf("|             .@.     !*   :*. ;.  ,$   !:             |\n");
	printf("|             :*      $.            .   *~             |\n");
	printf("|             *-      .                 $-             |\n"); //y 14
	printf("|             $.             ,;!~       @.             |\n");
	printf("|             $            .*#!:#~     .@.             |\n");
	printf("|             !:           $- .!*     .$. ..           |\n");
	printf("|             -$           ~$*==      ~#=$$$$-         |\n");
	printf("|              #:           .-,       ,;,.  ,#,        |\n");
	printf("|              .=.                           *:        |\n");
	printf("|          ...                               ;;        |\n");
	printf("|      =$$$$$=                               =~        |\n");
	printf("|      ==.                                  .#.        |\n");
	printf("|		       ┌━━━━━━━━━━━━┐		       |\n");
	printf("|		       │ 1.셰프 추천│		       |\n");      //y 25
	printf("|		       └━━━━━━━━━━━━┘		       |\n");
	printf("|		       ┌━━━━━━━━━━━┐		       |\n");
	printf("|		       │ 2.   한식 │		       |\n");      //y 28
	printf("|		       └━━━━━━━━━━━┘		       |\n");
	printf("|		       ┌━━━━━━━━━━━┐		       |\n");//y30
	printf("|		       │ 3.  편의점│		       |\n");
	printf("|		       └━━━━━━━━━━━┘		       |\n");
	printf("|		       ┌━━━━━━━━━━━┐                   |\n");
	printf("|		       │ 4.   중식 │		       |\n");
	printf("|		       └━━━━━━━━━━━┘		       |\n");
	printf("|		       ┌━━━━━━━━━━━┐                   |\n");
	printf("|		       │ 5.   일식 │		       |\n");
	printf("|		       └━━━━━━━━━━━┘		       |\n");
	printf("|			                               |\n");
	printf("|======================================================|\n");


	int x = 21;
	int y = 25;
	gotoxy_s(x, y);
	printf(">");

	while (1) {
		int n = keyControl();
		switch (n) {
			case UP: {
				if (y > 25) {
					gotoxy_s(x, y);
					printf(" ");
					gotoxy_s(x, y -= 3);
					printf(">");
				}
				break;
			}
			case DOWN: {
				if (y < 37) {
					gotoxy_s(x, y);
					printf(" ");
					gotoxy_s(x, y += 3);
					printf(">");
				}
				break;
			}
			case PICK: {
				int th = y - 25;  //0 3 6 9 12
				if (th == 12) { return 5; }
				else if (th == 9) { return 4; }
				else if (th == 6) { return 3; }
				else if (th == 3) { return 2; }
				else if (th == 0) { return 1; }
			}
		}
	}
}

int priceUI(int select) {
	int mon;
	do {
		system("cls");
		printf("|=====================================================|\n");
		printf("|                             ,-~:~,                  |\n");
		printf("|                       .~!$$=*!!!=$=-                |\n");
		printf("|                    ,=#;.            ~$              |\n");
		printf("|                   !$~                !!             |\n");
		printf("|                 .=*.                 ,@.            |\n");
		printf("|                .*!                    #,            |\n");
		printf("|                **               ,-    *~            |\n");
		printf("|               :=       :;     .=#$:   !:            |\n");
		printf("|             .@.     !*   :*. ;.  ,$   !:            |\n");
		printf("|             :*      $. @        @ .   *~            |\n");
		printf("|             *-      .                 $-            |\n");
		printf("|             $.             ,;!~       @.            |\n");
		printf("|             $            .*#!:#~     .@.            |\n");
		printf("|             =.          .#.   #,     !:             |\n");//y 14
		printf("|             !:           $- .!*     .$. ..          |\n");
		printf("|              #:           .-,       ,;,.  ,#,       |\n");
		printf("|              .=.                           *:       |\n");
		printf("|          ...                               ;;       |\n");
		printf("|      =$$$$$=                               =~       |\n");
		printf("|      ==.                                  .#.       |\n");
		printf("|                                                     |\n");
		printf("|                                                     |\n");//y27
		printf("|		       ┌━━━━━━━━━━━━┐		      |\n");
		printf("|		       │            │		      |\n");    //y 29
		printf("|		       └━━━━━━━━━━━━┘		      |\n");
		printf("|                                                     |\n");//y 31
		printf("|                                                     |\n");
		printf("|                                                     |\n");
		printf("|                                                     |\n");
		printf("|                                                     |\n");
		printf("|                                                     |\n");
		printf("|                                                     |\n");
		printf("|                                                     |\n");
		printf("|                                                     |\n");
		printf("|                                                     |\n");
		printf("|=====================================================|\n");

		gotoxy_s(14, 22); printf("원하시는 가격대를 입력해주세요\n");

		if (select == 1) {
			gotoxy_s(11, 27); printf("쉐프 추천의 경우 1000~30000원까지 . . .\n");
			gotoxy_s(28, 24); scanf_s("%d", &mon);
			if (mon < 1000 || mon > 30000) {
				gotoxy_s(16, 31); printf("경고★가격 범위를 지켜주세요!!\n");
				system("pause");
				continue;
			}
			else { break; }
		}
		else if (select == 2) {
			gotoxy_s(11, 27); printf("한식의 경우 2000~15000원까지 . . .\n");
			gotoxy_s(28, 24); scanf_s("%d", &mon);
			if (mon < 2000 || mon > 15000) {
				gotoxy_s(16, 31); printf("경고★가격 범위를 지켜주세요!!\n");
				system("pause");
				continue;
			}
			else { break; }
		}
		else if (select == 3) {
			gotoxy_s(11, 27); printf("편의점의 경우 2000~10000원까지 . . .\n");
			gotoxy_s(28, 24); scanf_s("%d", &mon);
			if (mon < 2000 || mon > 10000) {
				gotoxy_s(16, 31); printf("경고★가격 범위를 지켜주세요!!\n");
				system("pause");
				continue;
			}
			else { break; }
		}
		else if (select == 4) {
			gotoxy_s(11, 27); printf("중식의 경우 6000~25000원까지 . . .\n");
			gotoxy_s(28, 24); scanf_s("%d", &mon);
			if (mon < 6000 || mon > 25000) {
				gotoxy_s(16, 31); printf("경고★가격 범위를 지켜주세요!!\n");
				system("pause");
				continue;
			}
			else { break; }
		}
		else if (select == 5) {
			gotoxy_s(11, 27); printf("일식의 경우 5000~15000원까지 . . .\n");
			gotoxy_s(28, 24); scanf_s("%d", &mon);
			if (mon < 5000 || mon > 15000) {
				gotoxy_s(16, 31); printf("경고★가격 범위를 지켜주세요!!\n");
				system("pause");
				continue;
			}
			else { break; }
		}
		system("cls");
	} while (1);
	return mon;
}

int MenuUI(int select, const char* food, const char* price, const char* kcal ) {
	const char* menu[5] = { "셰프 추천", "한 식", "편의점", "중 식", "일 식" };

	printf("|=====================================================|\n");
	printf("|		┌─────────────────────┐               |\n");
	printf("|		│     %8s         |              |\n", menu[select]);
	printf("|		└─────────────────────┘               |\n");
	printf("|                                         ,*-,.       |\n");
	printf("|                                         *=*=$$=     |\n");
	printf("|                    ,~;*=;              ,$.~, .=-    |\n");
	printf("|                .-*##=!~-#-             !! $-  =-    |\n");
	printf("|              ~=#=:-.    $-            .$,;!;,.$.    |\n");
	printf("|            ~===!  -     #-            ;!.#~$.,$     |\n");
	printf("|           ,@: !: .#,   .#,           .#-,@~$ ~=     |\n");
	printf("|          ;!  ,#. :!    *~            ;$=~.   $.     |\n");
	printf("|          :!  .$: ~$.   $,             *$$#=!;=      |\n");
	printf("|          ~*   ::  .    ;.            .#-!!-;*-      |\n");
	printf("|          .$~    .-;!*==*$*,          ~$,$.          |\n");
	printf("|           ,,.-!=$=!;::~--;$,         *:;*           |\n");
	printf("|            !$$*-.         ;*        .$.$-           |\n");
	printf("|        !!            -.    ;*       =:$~            |\n");
	printf("|       !=.     -.    !#!    .$.     .$~#.            |\n");
	printf("|     .$      =~     ~        ~$    .;$@~             |\n");
	printf("|     ,$      :.              -#. .!#*-=-             |\n");
	printf("|     .$          -*=;        ,#,;$!- .$              |\n");
	printf("|      =-        .$:~$.       ~@#=,   ~=              |\n");
	printf("|      ~#.       :*  $.       :$-     *;              |\n");
	printf("|                 .~,                *;               |\n");
	printf("|.!***!;                            .#,               |\n");
	printf("|~#:::;!.                           ~$                |\n");//y 27
	printf("|-#                                 !:                |\n");
	printf("|  ~$~                                                |\n");
	printf("|                   ┌━━━━━━━━━━━━━━━━┐		      |\n");
	printf("|                   │   오늘의 음식  │		      |\n");
	printf("|                   │   %8s    │	          |\n", food);
	printf("|                   │   %5s  가격  │		      |\n", price);
	printf("|                   │   %5s  칼로리│		      |\n", kcal);
	printf("|                   └━━━━━━━━━━━━━━━━┘		      |\n");
	printf("|                                                     |\n");
	printf("|               ┌━━━━━━━━━━━━━━━━━━━━━┐               |\n");
	printf("|               │ 다른 메뉴 추천받기  │	              |\n"); //y 38
	printf("|               └━━━━━━━━━━━━━━━━━━━━━┘               |\n");
	printf("|               ┌━━━━━━━━━━━━━━━━━━━━━┐               |\n");
	printf("|               │ 메인 메뉴 돌아가기  │	              |\n"); //y 41
	printf("|               └━━━━━━━━━━━━━━━━━━━━━┘               |\n");
	printf("|=====================================================|\n");


	int x = 15;
	int y = 38;
	gotoxy_s(x, y);
	printf(">");

	while (1) {
		int n = keyControl();
		switch (n) {
		case UP: {
			if (y > 38) {
				gotoxy_s(x, y);
				printf(" ");
				gotoxy_s(x, y -= 3);
				printf(">");
			}
			break;
		}
		case DOWN: {
			if (y < 41) {
				gotoxy_s(x, y);
				printf(" ");
				gotoxy_s(x, y += 3);
				printf(">");
			}
			break;
		}
			case PICK: {
				int th = y - 28;  //10
				if (th == 10) { return 1; }
				if (th == 13) { return 0; }
			}
		}
	}
}

int LockUI(int min, int sec) {
	const char* proverb[100] =
	{ "먹는 음식이 곧 자신이다. (루드비히 포이에르바하)", "잘못된 음식이란 것은 없다. (션 스튜어트)",
		"좋은 음식은 좋은 대화로 끝이 난다. (조프리 네이어)", "건강식품이 나를 아프게 한다. (캘빈 트릴린)",
		"음식은 가장 원시적인 형태의 위안거리다. (쉴라 그레이엄)", "음식은 우리의 공통점이요, 보편적 경험이다. (제임스 비어드)",
		"누군가에게는 음식인 것이 다른 이에게는 쓴 독이다. (루크레티우스)", "음식에 대한 사랑보다 더 진실된 사랑은 없다. (조지 버나드 쇼)",
		"들어 옮길 수 있는 양보다 많이 먹지 말라. (미스 피기)" }; //9개

	int num = rand_c(8);
	int i, j;
	for (i = min; i >= 0; i--) {
		for (j = sec; j >= 0; j--)
		{

			printf("|=====================================================|\n");
			printf("|                                                     |\n");
			printf("|              -!$@@@@@@@@@@@@@@@@$!-                 |\n");
			printf("|             *@@@@@@@@@@@@@@@@@@@@@@=                |\n");
			printf("|            !#@@@                @@@@*               |\n");
			printf("|           !#@@@                  @@@@*              |\n");
			printf("|           ;@@@@                  @@@@!              |\n");
			printf("|         .;#@@@@@@@@@@@@@@@@@@@@@@@@@@#!.            |\n");
			printf("|        ~#@@#;.                    .:#@@#~           |\n");
			printf("|        ;@@@*,                      .*@@@!           |\n");
			printf("|        *@@@:         -;**;-         ~@@@=           |\n");
			printf("|        *@@@:        -=@@@@=-        ~@@@=           |\n");
			printf("|        *@@@:       .*@@@@@@*.       ~@@@=           |\n");
			printf("|        *@@@:         -=@@$-         ~@@@=           |\n");
			printf("|        *@@@:         -=@@$-         ~@@@=           |\n");
			printf("|        *@@@:          -!!-          ~@@@=           |\n");
			printf("|        *@@@;                        :@@@*           |\n");
			printf("|        ~#@@@;.                    .:#@@#~           |\n");
			printf("|        .=@@@#!~-,,,,,,,,,,,,,,,,-~!#@@@=,           |\n");
			printf("|         ~$@@@@#$$$$$$$$$$$$$$$$$$#@@@@$~            |\n");
			printf("|          .:$@@@@@@@@@@@@@@@@@@@@@@@@$:.             |\n");
			printf("|                                                     |\n");
			printf("|		   ┌━━━━━━━━━━━━┐                     |\n");
			printf("|		   │            │	              |\n");//y 23
			printf("|		   └━━━━━━━━━━━━┘	              |\n");
			printf("|                                                     |\n");
			printf("|                                                     |\n");
			printf("|                                                     |\n");
			printf("|   %25s   \n", proverb[num]);
			printf("|                                                     |\n");
			printf("|                                                     |\n");
			printf("|                                                     |\n");
			printf("|                                                     |\n");
			printf("|                                                     |\n");
			printf("|                                                     |\n");
			printf("|=====================================================|\n");



			if (i < 10)
			{
				gotoxy_s(23, 23);
				printf("0%d : ", i);
			}
			else
			{
				gotoxy_s(23, 23);
				printf("%2d : ", i);
			}
			if (j < 10)
			{
				gotoxy_s(28, 23);
				printf("0%d", j);
			}
			else
			{
				gotoxy_s(28, 23);
				printf("%2d", j);
			}

			Sleep(1000);
			system("cls");
		}
		sec = 59;
	}
	return 1;
}
