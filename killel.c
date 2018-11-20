#include <stdio.h>
#include<stdlib.h>
int main(){
	int killer;
	for (killer = 'A'; killer <= 'D'; killer++){
		if (((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D')) == 3){
			printf("%cÊÇÐ×ÊÖ\n", killer);
			break;
		}
	}
	system("pause");
	return 0;
}
