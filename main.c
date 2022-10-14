#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(void) {
	FILE* fp = fopen("result.txt", "w");
	if (fp == NULL) {
		fprintf(stderr, "Failed to open/create result.txt: %d\n", errno);
		return EXIT_FAILURE;
	}
#ifdef UNICODE
	fprintf(fp, "UNICODE defined\n");
#endif
#ifdef _UNICODE
	fprintf(fp, "_UNICODE defined\n");
#endif
	fprintf(fp, "hoge\n");
	fclose(fp);
	return EXIT_SUCCESS;
}

int wmain(void) {
	return main();
}
