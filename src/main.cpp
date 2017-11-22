/*
 * main.cpp
 *
 *  Created on: Nov 21, 2017
 *      Author: keith
 */
#include <string.h>
#include <cstdio>

int main(){
	int valid = 0;
	
	//note that these 2 variable allocations
	//are located in memory next to each other
	//(use memory view to look at them)
	char password_fromuser[ 8 ];
	char password_CORRECT[ 8 ];
	
	//the password I am looking for
	strcpy( password_CORRECT, "START" ); 
	
	//gets a password from user, expects <=8 chars
	//if I instead enter 17 or 18 1's, I will 
	//enter 8 1's as password_fromuser 
	//and overwrite password_CORRECT with 8 1's
	gets( password_fromuser );

	//look at memory again and see that password_CORRECT is all 1's
	if (strncmp( password_CORRECT, password_fromuser, 8) == 0) {
		//and I'm in!
		valid = 1;
	}
	printf("expected(%s) actual(%s) valid(%d)\n", password_CORRECT, password_fromuser, valid);
	return 0;
}




