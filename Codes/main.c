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
        }
    }while (opcao != 7);
         
}