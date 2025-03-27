#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main(){
    Lista *lista = malloc(sizeof(Lista));
    int opcao;
    
    do{
        opcao = menu();

        if(opcao == 1){
            Tarefa *nova = cria_tarefa();
            inserir_tarefa(lista, nova);
        } else if(opcao == 2){
            remover_tarefa(lista);
        }else if(opcao == 3){
            consultar_tarefa(lista);
        } else if(opcao == 4){
            mostra_tarefas(lista);
        }else if(opcao == 5){
            gravar_arquivo(lista);
        }else if(opcao == 6){
            ler_arquivo(lista);
        }
    }while (opcao != 7);
    return 0;
}