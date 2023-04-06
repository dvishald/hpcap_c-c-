//structure


#include <stdio.h>
#include <string.h>

union student {
	int roll;
	char name[10];
	float marks;
	};
	
	struct student1 {
	int roll;
	char name[10];
	float marks;
	}s2;
	
	
	int main(){
	union student s1;
	s1.roll =1;
	
	printf("%d roll no ",s1.roll);
	
	strcpy(s1.name, "Teja");
	printf("%s\n Name  ",s1.name);
	s1.marks =87.56;
	printf("%f\n marks ",s1.marks);
	//printf("%d %s %.2f\n", s2.roll,s2.name,s1.marks);
	printf("size of union taken is %ld \n",sizeof(s1));
	printf("size of structer taken is %ld \n",sizeof(s2));
	return 0;
	}
