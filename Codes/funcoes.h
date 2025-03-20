typedef struct 
{
    char nome[20];
    int prioridade;
    int duracao;
} Tarefa;

typedef struct 
{
    Tarefa *vetor[100];
    int qtde;
} Lista;

int inserir_tarefa(Lista *, Tarefa *);

Tarefa *cria_tarefa();

void mostra_tarefas(Lista *);

int menu();

void remover_tarefa(Lista *);

void consultar_tarefa(Lista *);