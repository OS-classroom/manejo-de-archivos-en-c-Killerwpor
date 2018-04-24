#include<sys/types.h>
#include<stdio.h>

int main(int argc, char * argv[]) {

	int pid1, pid2, estado;
	int h1_finalizado = 0, h2_finalizado = 0;

	pid1=fork();

	/* Este es el hijo #1 */
	if (pid1 == 0) {
	
      int c, n,z, fact = 1;	
 

	  for ( z= 1; z <= 10; z++){
	  	
	  
	  for (c = 1; c <= z; c++){
	  	     fact = fact * c;
 
	  }
	   printf("Hijo 1 fact(%d) = %d\n", z, fact);
	  fact = 1;
}
 
  
		
		exit (0);
	}

	pid2=fork();

	/* Este es el hijo #2 */
	if (pid2 == 0) {
	
      int c, n,z, fact = 1;	
 

	  for ( z= 1; z <= 10; z++){
	  	
	  
	  for (c = 1; c <= z; c++){
	  	     fact = fact * c;
 
	  }
	   printf("Hijo 2 fact(%d) = %d\n", z, fact);
	  fact = 1;
}
		
		exit (0);
	}

	if ((pid1 < 0) || (pid2 < 0)) {
		printf("Error\n");
		exit (1);
	}

	if ((pid1 > 0) && (pid2 > 0)) {
		while((!h1_finalizado) || (!h2_finalizado)) {
			int pid;
			
			/* Espero información sobre cualquier hijo*/
			pid = wait(&estado);
			
			/* Me fijo quien terminó y cambio la variable de estado. */
			if (pid == pid1)
				h1_finalizado = 1;
			if (pid == pid2)
				h2_finalizado = 1;
		}
		
	
	}

}
