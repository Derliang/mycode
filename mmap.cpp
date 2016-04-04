//copy arbitrary-sized disk file to stdo  to stdout  by mmap
#include <unistd.h>
#include <syssys/mman.h>
int main(int arg,int *argv[])
{
  int fd;
  struct stat stat;
  char *buf;
  fd=open(argv[1],O_RDONLY,0);
  fstat(fd,&stat);
  buf=mmap(null ,stat.st_size , PROT_READ,MAP_PRIVATE,fd,0);
  wirte(1,buf,stat.st_size);
  exit(0);
}
