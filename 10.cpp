#include<sys/types.h>
#include<stdio.h>

int main(int argc, char * argv[]) {

	int pid1, pid2, pid3, pid4, pid5, estado;
	int h1_finalizado = 0, h2_finalizado = 0;

	pid1=fork();


	pid2=fork();
		pid3=fork();

	/* Este es el hijo #3 */
	if (pid3== 0) {
	
 	pid4=fork();
 		pid5=fork();
		exit (0);
	}
	


}
