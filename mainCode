//메뉴 추천 프로그램
//
#include "main_header.h"

int main() {

	int stack = 0; //반복 횟수
	int Lockstack = 0; //잠금된 횟수
	int* Lock = &Lockstack;
	bool check = 1;
	while (check) {
		int select = NULL;
		int mon = NULL;
		select = MainUI();
		mon = priceUI(select);
		system("cls");

		switch (select)
		{
		case 1:
			stack += global("chef_foods.csv", mon, 0, Lock, stack);
			break;
		case 2:
			stack += global("korea_foods.csv", mon, 1, Lock, stack); 
			break;
		case 3:
			stack += global("market_foods.csv", mon, 2, Lock, stack);
			break;
		case 4:
			stack += global("china_foods.csv", mon, 3, Lock, stack);
			break;
		case 5:
			stack += global("japan_foods.csv", mon, 4, Lock, stack);
			break;
		case 6:
			check = 0;
			break;
		default:
			break;
		}
	}
	return 0;
}
