# Sistema de Reservas de Hotéis em C

Este projeto é um sistema simples de reservas de hotéis implementado em C. O sistema permite que os usuários cadastrem hotéis, listem hotéis disponíveis e realizem reservas de quartos.

## Funcionalidades

- **Adicionar Hotel**: Permite que o usuário adicione um novo hotel, especificando o nome e a quantidade de quartos disponíveis.
- **Listar Hotéis**: Exibe uma lista de todos os hotéis cadastrados, mostrando seus IDs, nomes e quantidades de quartos disponíveis.
- **Reservar Quarto**: Função em desenvolvimento que permitirá aos usuários reservar quartos em hotéis disponíveis.
- **Cancelar Reserva**: Função em desenvolvimento que permitirá aos usuários cancelar reservas existentes.

## Estrutura do Código

- **Estruturas (`structs`)**:
  - `Hotel`: Representa um hotel, contendo informações como nome, ID e número de quartos disponíveis.
  - `Reserva`: Representa uma reserva, contendo informações como ID, ID do hotel reservado e nome do cliente.

- **Arrays**:
  - `Hotel hoteis[MAX_HOTEIS];`: Armazena os hotéis cadastrados (até 10).
  - `Reserva reservas[MAX_RESERVAS];`: Armazena as reservas realizadas (até 20).

- **Variáveis de Controle**:
  - `int numHoteis;`: Armazena o número atual de hotéis cadastrados.
  - `int numReservas;`: Armazena o número atual de reservas realizadas.

## Funções Implementadas

### `adicionarHotel()`

Esta função permite que o usuário adicione um novo hotel ao sistema. O usuário é solicitado a inserir o nome do hotel e a quantidade de quartos disponíveis. Um ID único é atribuído ao hotel `(ainda não está funcionando pois todos os IDs são 0)`, que corresponde à sua posição no array de hotéis.

### `listarHoteis()`

Esta função exibe uma lista de todos os hotéis cadastrados. Se não houver hotéis cadastrados, uma mensagem é exibida informando que nenhum hotel está disponível. Caso contrário, os detalhes dos hotéis, incluindo ID, nome e quantidade de quartos disponíveis, são apresentados.

## Menu do Sistema

Ao executar o programa, o usuário verá um menu como o seguinte:
      
**Sistema de Reservas**   
- 1 - Adicionar Hotel   
- 2 - Listar Hotéis    
- 3 - Reservar Quarto   
- 4 - Cancelar Reserva    
- 0 - Sair    
- Escolha uma opção:    
