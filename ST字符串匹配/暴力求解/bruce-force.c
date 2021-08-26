#include <stdio.h>

// 暴力求解
int bruce_force (const char *pstr, const char *substr) {
	for (int i = 0; pstr[i]; i ++) {
		int flag = 1;
		for (int j = 0; substr[j]; j ++) {
			if (pstr[i+j] == substr[j]) {
				continue;
			}
			flag = 0;
			break;
		}
		if (flag) {
			return 1;
		}
	}
	return 0;
}

int main(int argc, char *argv[]) {
	const char pstr[100] = "cjakjoek";
	const char *substr = "kjo";
	int rst = bruce_force(pstr, substr);
	if (rst) {
		printf("%s has substring is %s", pstr, substr);
	} else {
		printf("%s has not substring is %s", pstr, substr);
	}
}