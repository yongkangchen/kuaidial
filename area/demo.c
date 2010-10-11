/**
 * Name: area_demo
 * Author: linspike
 */

#include <stdio.h>

#include "area.h"

int main(int argc, char* argv[]){

    if(argc == 2){

		char number[255];

		Area *area = Area_load(argv[1], 10 * 1024);
		char *area_str = NULL;

		while(scanf("%s", number)){
			if(*number == 'q')
				break;
			if(area_str = Area_get(area, number, AREA_WITH_NAME | AREA_WITH_TYPE))
				printf("%s\n", area_str);
			else
				printf("Not Found\n");
		}

		Area_unload(area);
	}

	return 0;
}
