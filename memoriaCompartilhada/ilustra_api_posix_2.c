#include <stdio.h>
#include <sys/shm.h>
#include <sys/stat.h>

int main(){
  /* o identificador do segmento de memória compartilhada */
  int segment_id;
  /* um ponteiro para o segmento de memória compartilhada */
  char *shared_memory;

  /* o tamanho (em bytes) do segmento de memória compartilhada */
  const int size = 4096;
  /* aloca um segmento de memória compartilhada */
  segment_id = shmget(IPC_PRIVATE, size, S_IRUSR | S_IWUSR);

  /* por cmd, redirecione por pipe esse id pro processo desejado */
  printf("%i", segment_id);

  /* anexa o segmento de memória compartilhada */
  shared_memory = (char *) shmat(segment_id, NULL, 0);
  /* grava uma mensagem no segmento de memória compartilhada */
  sprintf(shared_memory, "Oi, pessoal!");

  /* desanexa o segmento de memória compartilhada */
  shmdt(shared_memory);

  return 0;
}
