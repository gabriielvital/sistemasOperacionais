#include <stdio.h>
#include <sys/shm.h>

int main(){
  /* o identificador do segmento de memória compartilhada */
  int segment_id;
  /* um ponteiro para o segmento de memória compartilhada */
  char *shared_memory;

  scanf("%i", &segment_id);

  /* anexa o segmento de memória compartilhada */
  shared_memory = (char*) shmat(segment_id, NULL, 0);

  /* exibe a cadeia de caracteres a partir da memória compartilhada */
  printf("*%s\n", shared_memory);

  /* desanexa o segmento de memória compartilhada */
  shmdt(shared_memory);
  /* remove o segmento de memória compartilhada */
  shmctl(segment_id, IPC_RMID, NULL);
}