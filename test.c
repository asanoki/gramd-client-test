/*
 * test.cpp
 *
 *  Created on: Mar 19, 2012
 *      Author: asanoki
 */

#include <gramdclient.h>
#include <stdio.h>
#include <errno.h>

int main(int argc, char **argv) {
	gramd_connection * handle;
	gramdDebugMode(0);

	if (!(handle = gramdOpen("127.0.0.1", 45000)))
		return 0;

	char output[1024];
	int i, j;
	for (i = 0; i < 100; i++) {
		gramdAddSection(handle);
		gramdAddCandidate(handle, "お", 0.5);
		gramdAddCandidate(handle, "あ", 0.4);
		gramdAddCandidate(handle, "め", 0.1);

		gramdAddSection(handle);
		gramdAddCandidate(handle, "り", 0.6);
		gramdAddCandidate(handle, "リ", 0.3);
		gramdAddCandidate(handle, "い", 0.1);

		gramdAddSection(handle);
		gramdAddCandidate(handle, "方", 0.4);
		gramdAddCandidate(handle, "が", 0.3);
		gramdAddCandidate(handle, "か", 0.2);
		gramdAddCandidate(handle, "カ", 0.1);

		gramdAddSection(handle);
		gramdAddCandidate(handle, "と", 0.5);
		gramdAddCandidate(handle, "ヒ", 0.3);
		gramdAddCandidate(handle, "ビ", 0.1);
		gramdAddCandidate(handle, "ど", 0.1);

		gramdAddSection(handle);
		gramdAddCandidate(handle, "う", 0.6);
		gramdAddCandidate(handle, "つ", 0.2);
		gramdAddCandidate(handle, "っ", 0.2);

		gramdQuery(handle, output, 1024, 3000);
		printf("%s\n", output);
	}

	gramdClose(handle);
	return 0;
}
