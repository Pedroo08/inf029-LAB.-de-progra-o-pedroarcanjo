#include <stdio.h>
#include <stdlib.h>

#include "EstruturaVetores.h"

int menu();

//void dobrar(int *x);

int menu()
{
    int op;
    printf("\nDigite as opção desejada\n");
    printf("0 - Sair\n");
    printf("1 - Criar estrutura\n");
    printf("2 - Inserir\n");
    printf("3 - Excluir\n");
    printf("4 - Listar uma estrutura\n");
    printf("5 - Listar todas as estruturas\n");
    printf("6 - Listar estrura ordenada\n");
    printf("7 - Listar todos os números ordenados\n");
    printf("8 - Modificar tamanho da estrutura\n");
    scanf("%d", &op);
    return op;
}

int main()
{
    inicializar();
    int op;
    int sair = 0;
    int ret;
    while (!sair)
    {
        op = menu();
        switch (op)
        {
        case 0:
        {
            sair = 1;
            finalizar();
            break;
        }
        case 1:
        { //criar Estrutura Auxiliar
            //TODO

            int p,t;
            printf("Digite a posição da estrutura (1 a 10): ");
            scanf("%d",&p);

            printf("Digite o tamanho da estrutura: ");
            scanf("%d",&t);

            ret = criarEstruturaAuxiliar(p,t);
            if (ret == SUCESSO)
                printf("\n**criado com sucesso\n");

            else if (ret == POSICAO_INVALIDA)
                printf("\n**Posição inválida\n");

            else if (ret == TAMANHO_INVALIDO)
                printf("\n**Tamanho inválido\n");
            
            break;
        }
        case 2:
        { //inserir
            //TODO
            int p,v;
            printf("Digite a posição a posição da estrutura (1 a 10): ");
            scanf("%d",&p);

            printf("Digite a posição o valor: ");
            scanf("%d",&v);

            ret = inserirNumeroEmEstrutura(p, v);
            if (ret == SUCESSO)
                printf("**Inserido com sucesso\n");

            else if (ret == SEM_ESPACO)
                printf("**Sem Espaço\n");
            
            else if (ret == SEM_ESTRUTURA_AUXILIAR)
                printf("**Sem estrutura Auxiliar\n");

            else if (ret == POSICAO_INVALIDA)
                  printf("Posição inválida\n");
            
            break;
        }

        case 3:
        { //excluir
            //TODO
            int p,v;

            printf("Digite a posição da estrutura (1..10)?");
            scanf("%d", &p);

            printf("Digite o valor a ser excluido:");
            scanf("%d", &v);

            ret = excluirNumeroEspecificoDeEstrutura(p, v);

            if(ret == SEM_ESTRUTURA_AUXILIAR)
              printf("\n**Sem estrutura auxilia\n");
            
            else if (ret == ESTRUTURA_AUXILIAR_VAZIA)
              printf("\n**Estrutura auxiliar vazia\n");
            
            else if (ret == NUMERO_INEXISTENTE)
              printf("\n**Número inexistente");
            
            else if (ret == SUCESSO)
                printf("\n**Excluido com sucesso");
            break;
        }

        case 4:
        { //recuperar dados estrutura auxiliar
            int posicao, retorno;
            printf("Qual a estrutura a ser listada (1..10)?");
            scanf("%d", &posicao);

            int qtd = getQuantidadeElementosEstruturaAuxiliar(posicao);

            if (qtd == POSICAO_INVALIDA)
            {
                printf("\n**Posição inválida\n");
            }else if(qtd ==SEM_ESTRUTURA_AUXILIAR ){
                  printf("\n**Sem estrutura auxiliar\n");
            }
            else
            { // existe elemento
                int vetorAux[qtd];

                retorno = getDadosEstruturaAuxiliar(posicao, vetorAux);

                if (retorno == SUCESSO)
                {
                    //imprimir para os dados para o usuário
                    int i = 0;
                    for (; i < qtd; i++)
                    {
                        printf("%d ", vetorAux[i]);
                    }
                    printf("\n");
                }
            }
            break;
        }
        case 5:{
          int i;
          int qtd=0;

          for(i=1;i<10;i++){
             ret= getQuantidadeElementosEstruturaAuxiliar(i);
            if(ret !=SEM_ESTRUTURA_AUXILIAR){
                  qtd += ret;}
          }
          
           if(qtd ==0)
            printf("\n**Todas as estruturas vazia\n");

           else if(qtd !=0){
              int vetorAux[qtd];
              ret =  getDadosDeTodasEstruturasAuxiliares(vetorAux);
              for(i=0;i<qtd;i++)  
                  printf("%d ",vetorAux[i]);
              printf("\n");
    
          }
        break;    
       }

       case 6:
        { //recuperar dados estrutura auxiliar ordenadamente
            int posicao, retorno;
            printf("Qual a estrutura a ser listada (1..10)?");
            scanf("%d", &posicao);

            int qtd = getQuantidadeElementosEstruturaAuxiliar(posicao);

            if (qtd == POSICAO_INVALIDA)
                printf("Posição inválida");

            else if(qtd ==SEM_ESTRUTURA_AUXILIAR )
                  printf("**Sem estrutura auxiliar\n");
            
            else
            { // existe elemento
                int vetorAux[qtd];

                retorno = getDadosOrdenadosEstruturaAuxiliar(posicao, vetorAux);

                if (retorno == SUCESSO)
                {
                    //imprimir para os dados para o usuário
                    int i = 0;
                    for (; i < qtd; i++)
                    {
                        printf("%d ", vetorAux[i]);
                    }
                    printf("\n");
                }
            }
            break;
        }

        case 7:{
          int i;
          int qtd=0;

          for(i=1;i<10;i++){
             ret= getQuantidadeElementosEstruturaAuxiliar(i);
            if(ret !=SEM_ESTRUTURA_AUXILIAR  && ret != SEM_ESTRUTURA_AUXILIAR){
                  qtd += ret;}
          }
          
           if(qtd ==0)
            printf("\n**Todas as estruturas vazia\n");

           else if(qtd !=0){
              int vetorAux[qtd];
              ret = getDadosOrdenadosDeTodasEstruturasAuxiliares(vetorAux);
              for(i=0;i<qtd;i++)  
                  printf("%d ",vetorAux[i]);
              printf("\n");
    
          }
        break;    
       }


        case 8:{
        int p,t;

        printf("Digite a posição da estrutura (1..10)?");
            scanf("%d", &p);

            printf("Digite o novo tamanho da estutrura ");
            scanf("%d", &t);

            ret = modificarTamanhoEstruturaAuxiliar( p,t);

            if (ret == POSICAO_INVALIDA)
                printf("\n**Posição inválida\n");

            else if(ret == NOVO_TAMANHO_INVALIDO)
                printf("Tamanho\n");
            
            else if (ret == SEM_ESTRUTURA_AUXILIAR)
                printf("\n**Sem estrutura auxiliar");
            else if (ret == SUCESSO)
                  printf("\n** Sucesso\n");
            break;
        }   



        
        /*case 10:
        { //dobrar
            //ler um numero
            int valor;
            scanf("%i", &valor);

            dobrar(&valor);

            //passar para um funcao (void dobrar(...)) que recebe o numero e dobra (EstruturaVetores.c)

            printf("%i", valor);

            break;
        }*/

        default:
        {
            printf("opcao inválida\n");
        }
        }
    }

    return 0;
}