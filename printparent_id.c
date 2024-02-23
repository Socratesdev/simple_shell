#include <stdio.h>
#include <unistd.h>

int main(void)
{
        pid_t parrent_id;

        parrent_id = getppid();
        printf("%u\n", parrent_id);
        return (0);

}
