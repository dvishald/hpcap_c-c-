//structure


#include <stdio.h>
#include <string.h>

struct student {
	int roll;
	char name[10];
	float marks;
	};
	
	int main(){
	struct student s1;
	s1.roll =1;
	strcpy(s1.name, "Teja");
	s1.marks =87.56;
	printf("%d %s %.2f\n", s1.roll,s1.name,s1.marks);
	return 0;
	}
