#include <stdio.h>
#include "Pokemon.h"

int main() {

	Pokemon* pokemon1 = new Pokemon("ピカチュウ");

	printf("1体目 : %s\n", pokemon1->GetName());

	Pokemon* pokemon2 = new Pokemon("ゲンガー");

	printf("2体目 : %s\n", pokemon2->GetName());

	printf("1体目のポケモンを2体目のオーバーライドします…\n");
	pokemon2 = pokemon1;
	printf("2体目 : %s\n", pokemon2->GetName());

	return 0;

}