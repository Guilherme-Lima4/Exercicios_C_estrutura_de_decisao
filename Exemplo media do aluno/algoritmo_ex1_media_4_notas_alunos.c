
#include <stdio.h>
int main()
{
    float Nota1, Nota2, Nota3, Nota4, soma_notas, media_notas;
    

    printf("Digite a Primeira Nota do aluno: ");
    scanf("%f", &Nota1);
    
    printf("\nDigite a Segunda Nota do aluno: ");
    scanf("%f", &Nota2);
    
    printf("\nDigite a Terceira Nota do aluno: ");
    scanf("%f", &Nota3);
    
    printf("\nDigite a Quarta Nota do aluno: ");
    scanf("%f", &Nota4);
                
    soma_notas = (Nota1+Nota2+Nota3+Nota4);
    media_notas = (soma_notas)/4;
     
	 if (media_notas >=5) 
	                  
       printf("\nAluno aprovado com Media: %f", media_notas);
     else                        
       printf("\nAluno reprovado com Media: %f", media_notas);
    
	getch();
    return 0;
}
