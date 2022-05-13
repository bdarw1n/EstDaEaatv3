#include <stdio.h>
#include <stdlib.h>

typedef struct aluno{
char nome [81];
char matricula [8];
char turma;
float p1;
float p2;
float p3;


}Aluno;

void  cadastrar (int n, Aluno **aluno, char s);
void imprimir (Aluno **aluno, int n);

int main () {
printf("Digite q quantidades de alunos que a turma poussui: ");

int n;
scanf("%d", &n);
printf("\n\n");
printf("Digite a letra correspondente à turma: ");
fflush(stdin);
char s;
scanf("%c", &s);
printf("\n\n");
Aluno *aluno[n];
cadastrar(n, aluno,s);
imprimir(aluno, n);





return 0;
}

void cadastrar (int n, Aluno **aluno, char s){
int cntg = 1;
for (int i = 0; i < n;i++){
    aluno[i] = NULL;
}
for (int i = 0; i < n;i++){
  aluno[i] = (Aluno*)malloc(sizeof(Aluno));
  aluno[i] -> turma = s;
  printf("Digite os dados do %dº aluno: ", cntg);
  printf("nome: ");
  fflush(stdin);
  scanf("%c", &aluno[i] ->nome);
  printf("\n");
  printf("matricula: ");
  fflush(stdin);
  scanf("%c", &aluno[i] ->matricula);
  printf("\n");
  printf("primeira nota: ");
  fflush(stdin);
  scanf("%f", &aluno[i] ->p1);
  printf("\n");
  printf("segunda nota: ");
  fflush(stdin);
  scanf("%f", &aluno[i] ->p2);
  printf("\n");
  printf("terceira nota: ");
  fflush(stdin);
  scanf("%f", &aluno[i] ->p3);
  printf("\n");
  cntg++;
}

}

void imprimir (Aluno **aluno,int n){
  printf("Sequência de alunos aprovados:\n\n");

  for(int i = 0; i < n; i++){
  float media = (aluno[i] -> p1 + aluno[i]->p2 + aluno[i] -> p3)/3;
     if (media >= 7.00 ){
        printf("nome: %c\nmatrícula: %c\nmédia final: %2.2f\n\n", aluno[i]->nome,
               aluno[i]->matricula, media);
     }
  }

}
