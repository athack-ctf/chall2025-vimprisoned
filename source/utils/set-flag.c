#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Generate a random filename in /tmp
    srand(time(NULL));
    char filename[256];
    snprintf(filename, sizeof(filename), "/tmp/set-flag-%d.sh", rand());

    FILE *file = fopen(filename, "w");
    if (file) {
        fprintf(file, "#!/bin/bash\n");

        // Flag
        fprintf(file, "export YOU_HAVE_BEEN_LOOKING_FOR='ATHACKCTF{y0u_h4v3_35c4p3d_th3_vim_prison_0xdeadbeef}'\n");
        fprintf(file, "/usr/bin/rm %s\n", filename);
        fclose(file);

        // Print the absolute filename
        printf("%s\n", filename);
    } else {
        perror("Failed to open file");
    }
    return 0;
}
