#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp_in, *fp_out;
    char *input_file = "p.jpg";

    fp_in = fopen(input_file, "rb");
    if(fp_in == NULL){
        perror("File opening failed");
        return EXIT_FAILURE;
    }

    fseek(fp_in, 0, SEEK_END);
    printf("FILE Size : %ld bytes\n",ftell(fp_in));
    printf("File Size (KiloByte): %ld\n",ftell(fp_in)/1024);

    fclose(fp_in);

    return 0;
}
















