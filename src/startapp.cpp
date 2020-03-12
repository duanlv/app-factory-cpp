#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdint.h>
#include <ctype.h>
#include "app/IApplication.h"
#include "AppFactory.h"

int main(int argc, char* argv[]) {
    int c;
    char* app_name = NULL;

    while ((c = getopt(argc, argv, "n:")) != -1) {
        switch(c) {
            case 'n':
                app_name = optarg;
                break;
            case '?':
                if (optopt == 'n') {
                    fprintf(stderr, "Option '-%c' requires an argument.\n", optopt);
                }
                else if (isprint(optopt)) {
                    fprintf(stderr, "Unknown option '-%c'.\n", optopt);
                }
                else {
                    fprintf(stderr, "Unknown option character '\\x%x'.\n", optopt);
                }
                return 1;
            default:
                fprintf(stderr, "Invalid arguments.");
                abort();
        }
    }

    factoryApp(app_name);

    return 0;
}
