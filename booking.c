#include <stdio.h>  
#include <string.h> 

#define MAX_HOTEIS 10  
#define MAX_RESERVAS 20  

typedef struct {
    char nome[50];
    int hotelId;
    int quartosDisponiveis;
} Hotel;

typedef struct {
    int id;
    int hotelId;
    char nomeCliente[50];  
} Reserva;

Hotel hoteis[MAX_HOTEIS];  //ARRAY
Reserva reservas[MAX_RESERVAS];  
int numHoteis = 0; //define basicamente o lugar no array
int numReservas = 0;  

void adicionarHotel(){
    if (numHoteis < MAX_HOTEIS) {  
        printf("Escreva o nome do hotel: ");  
        getchar();
        fgets(hoteis[numHoteis].nome, sizeof(hoteis[numHoteis].nome), stdin);  
        printf("Escreva o número de quartos disponíveis: ");  
        scanf("%d", &hoteis[numHoteis].quartosDisponiveis);
        hoteis[numHoteis].hotelId = numHoteis;  
        numHoteis++;  
        printf("Hotel adicionado com sucesso!\n");
    } else {  
        printf("Limite de hotéis foi atingido.\n");  
    }  
}


void listarHoteis() {
    if (numHoteis == 0) {
        printf("Nenhum hotel cadastrado.\n");
        return;
    }
    printf("\nLista de Hotéis:\n");
    for (int i = 0; i < numHoteis; i++) {
        printf("ID: %d | Nome: %s | Quartos disponíveis: %d\n", hoteis[i].hotelId, hoteis[i].nome, hoteis[i].quartosDisponiveis);
    }
}

void reservarQuarto() {
    listarHoteis();

    if (numHoteis == 0) return;

    int hotelId;
    printf("Escolha o hotel desejado pelo ID: ");
    scanf("%d", &hotelId);

    if (hotelId >= numHoteis || hotelId < 0) {
        printf("Esse hotel não existe ou não está cadastrado");
    } else if (hoteis[hotelId].quartosDisponiveis <= 0) {
        printf("Esse hotel está cheio!");
    } else {
        printf("Deseja usar qual nome na reserva ? ");
        scanf("%s", reservas[numReservas].nomeCliente);
        reservas[numReservas].hotelId = hotelId;
        reservas[numReservas].id = numReservas;
        hoteis[hotelId].quartosDisponiveis--;
        numReservas++; 
        printf("Reserva feita com sucesso!\n\n");
        printf("Nome da reserva: %s\n", reservas[numReservas - 1].nomeCliente);
        printf("ID da reserva: %d\n", reservas[numReservas - 1].id);

    }

}

int main() {
    int opcao;  
    do {  
        printf("\nSistema de Reservas\n");  
        printf("1 - Adicionar Hotel\n");  
        printf("2 - Listar Hotéis\n");  
        printf("3 - Reservar Quarto\n");  
        printf("4 - Cancelar Reserva\n");  
        printf("0 - Sair\n");  
        printf("Escolha uma opção: ");  
        scanf("%d", &opcao);  

        switch (opcao) {  
            case 1: adicionarHotel(); break;  
            case 2: listarHoteis(); break;  
            case 3: reservarQuarto(); break;  
            case 4: printf("Função em desenvolvimento...\n"); break;  
            case 0: printf("Saindo...\n"); break;  
            default: printf("Opção inválida!\n"); break;  
        }  
    } while (opcao != 0);  

    return 0;  
}
