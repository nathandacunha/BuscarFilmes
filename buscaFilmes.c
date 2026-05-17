#include <stdio.h>

int main() {
    // declaracao de variaveis
    int opcao, catologo;

    // programa principal

    while(opcao != 0) {
        printf("Bem-vindo(a) ao programa 'Selecionador de filmes/séries para assistir agora'! \n");
        printf("[1] - Prime video \n");
        printf("[2] - Netflix \n");
        printf("[3] - HBO MAX \n");
        printf("[4] - Cartoon Network \n");
        printf("[5] - Disney Plus \n"); 
        printf("[0] - Sair \n");
        printf("Qual fornedor dos filmes você deseja? \n");
        scanf("%d", &opcao);
        
        switch(opcao) {
            case 1:
                printf("Bem vindo(a) ao catálogo da Prime vídeo! \n");
                printf("[1] - Filmes \n");
                printf("[2] - Séries \n");
                printf("[3] - Voltar \n");
                printf("O que você deseja assistir? \n");
                scanf("%d", &catologo);

                switch(catologo) 
                {
                    case 1:
                        printf("--------------- \n");                    
                        printf("Aqui será exibido os filmes da prime video \n");
                        printf("--------------- \n");                        
                        break;
                    case 2:
                        printf("--------------- \n");                    
                        printf("Aqui sera exibido as séries da prime video \n");
                        printf("--------------- \n");                        
                        break;
                    case 3:
                        printf("--------------- \n");
                        break;
                    default:
                        printf("--------------- \n");                    
                        printf("Opção invalida! Tente novamente \n");
                        printf("--------------- \n");
                        break;
                }
            case 2: 
                printf("Bem vindo(a) ao catálogo da Netflix! \n");
                printf("[1] - Filmes \n");
                printf("[2] - Séries \n");
                printf("[3] - Voltar \n");
                printf("O que você deseja assistir? \n");
                scanf("%d", &catologo);
                switch(catologo) 
                {
                    case 1:
                        printf("--------------- \n");                    
                        printf("Aqui será exibido os filmes da netflix!! \n");
                        printf("--------------- \n");                        
                        break;
                    case 2:
                        printf("--------------- \n");                    
                        printf("Aqui sera exibido as séries da netflix \n");
                        printf("--------------- \n");                        
                        break;
                    case 3:
                        printf("--------------- \n");
                        break;
                    default:
                        printf("--------------- \n");                    
                        printf("Opção invalida! Tente novamente \n");
                        printf("--------------- \n");
                        break;
                }
            case 3: 
                printf("Bem vindo(a) ao catálogo da HBO MAX! \n");
                printf("[1] - Filmes \n");
                printf("[2] - Séries \n");
                printf("[3] - Voltar \n");
                printf("O que você deseja assistir? \n");
                scanf("%d", &catologo);
                switch(catologo) 
                {
                    case 1:
                        printf("--------------- \n");                    
                        printf("Aqui será exibido os filmes da HBO MAX!! \n");
                        printf("--------------- \n");                        
                        break;
                    case 2:
                        printf("--------------- \n");                    
                        printf("Aqui sera exibido as séries da HBO MAX \n");
                        printf("--------------- \n");                        
                        break;
                    case 3:
                        printf("--------------- \n");
                        break;
                    default:
                        printf("--------------- \n");                    
                        printf("Opção invalida! Tente novamente \n");
                        printf("--------------- \n");
                        break;
                } 
            case 4:
                printf("Bem vindo(a) ao catálogo da Cartoon Network! \n");
                printf("[1] - Filmes \n");
                printf("[2] - Séries \n");
                printf("[3] - Voltar \n");
                printf("O que você deseja assistir? \n");
                scanf("%d", &catologo);
                switch(catologo) 
                {
                    case 1:
                        printf("--------------- \n");                    
                        printf("Aqui será exibido os filmes da Cartoon Network!! \n");
                        printf("--------------- \n");                        
                        break;
                    case 2:
                        printf("--------------- \n");                    
                        printf("Aqui sera exibido as séries da Cartoon Network \n");
                        printf("--------------- \n");                        
                        break;
                    case 3:
                        printf("--------------- \n");
                        break;
                    default:
                        printf("--------------- \n");                    
                        printf("Opção invalida! Tente novamente \n");
                        printf("--------------- \n");
                        break;
                }
            case 5:
                // é literal control c + control v no código do case 1,2,3... Só mudar o nome da fornecedora
            case 0:
                printf("Programa encerrado! \n");
                break;
            default:
                printf("Erro! Fornedora invalida");
                break;
        }
    }

    return 0;
}
