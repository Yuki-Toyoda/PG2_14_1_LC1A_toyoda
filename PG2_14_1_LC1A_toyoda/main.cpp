#include <stdio.h>
#include "Pokemon.h"

int main() {

	Pokemon* pokemon1 = new Pokemon("�s�J�`���E");

	printf("1�̖� : %s\n", pokemon1->GetName());

	Pokemon* pokemon2 = new Pokemon("�Q���K�[");

	printf("2�̖� : %s\n", pokemon2->GetName());

	printf("1�̖ڂ̃|�P������2�̖ڂ̃I�[�o�[���C�h���܂��c\n");
	pokemon2 = pokemon1;
	printf("2�̖� : %s\n", pokemon2->GetName());

	return 0;

}