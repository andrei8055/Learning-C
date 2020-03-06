#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

/*
Permissions

S_IRWXU 0000700
S_IRUSR 0000400
S_IWUSR 0000200
S_IXUSR 0000100

S_IRWXG 0000070
S_IRGRP 0000040
S_IWGRP 0000020
S_IXGRP 0000010

S_IRWXO 0000007
S_IROTH 0000004
S_IWOTH 0000002
S_IXOTH 0000001

S_ISUID 0004000
S_ISGID 0002000
S_ISVTX 0001000
*/

int main(){
    int write_status_code;
    int filedescriptor;
    char buf[] = "Writing test data to the file.";

    //Open file for read+write, create if not exist with permissions 0700
    filedescriptor = open("test.txt", O_RDWR | O_CREAT, S_IRWXU);

    if(filedescriptor < 0){
        printf("`open()` failed\n");
        return -1;
    }
    else
        printf("`open()` succeed\n");

    //Write to file
    write_status_code = write(filedescriptor, buf, sizeof(buf)/sizeof(char));
    if(write_status_code != sizeof(buf)/sizeof(char)){
        printf("`write()` failed\n");
        return -2;
    }
    else
        printf("%d bytes written to file\n", write_status_code);

    //Close file descriptor
    if(close(filedescriptor) < 0){
        printf("`close()` failed\n");
        return -3;
    }
    else
        printf("`close()` succeed\n");

    return 1;
}
