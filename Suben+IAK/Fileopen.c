#include<stdio.h>
int main(){
FILE *fp;
	char filename[] = "my_file.txt";

	fp = freopen(filename,"W");

	fprintf(fp, "This is a file created by my program!");
	fprintf(fp, "I am so happy");

	fclose(fp);
	return 0;

	}
