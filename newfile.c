
#include <stdio.h>
#include <stdlib.h>

int main()
{
	double carteira = 0,precoJogo;
	int escolha;
	char comprar,tipoP;

	// Tela de boas vindas e depósito
	system("cls"); 
	  printf("========================================\n");
    printf("         >>> Bem Vindo a ARCADE STORE <<<           \n");
    printf("========================================\n");
    

    // Instrução em verde suave
    printf("\033[0;32mInsira o valor que deseja depositar:\033[0m\n");
    printf(">> R$ ");
    scanf("%lf", &carteira);


do{
		system("cls");

		// Cabeçalho
		printf("\033[36m------------------------------------------------------------------------------------------------------------------------\033[0m\n");
		printf("\033[1;37m                                       \003Bem-vindo ao catálogo da Arcade Store!\003\033[0m\n");
		printf("\033[36m------------------------------------------------------------------------------------------------------------------------\033[0m\n\n");

		// Carteira
		printf("\033[1;32mSua Carteira: R$ %.2lf\033[0m\n\n", carteira);

		// Catálogo de jogos
		printf("\033[33m1. Nome : \033[0mGod of War Ragnarok\n\033[32m   Preço: R$ 299.90\n\n\033[0m");
		printf("\033[33m2. Nome : \033[0mThe Last of Us Part II\n\033[32m   Preço: R$ 249.90\n\n\033[0m");
		printf("\033[33m3. Nome : \033[0mElden Ring\n\033[32m   Preço: R$ 279.99\n\n\033[0m");
		printf("\033[33m4. Nome : \033[0mRed Dead Redemption 2\n\033[32m   Preço: R$ 199.90\n\n\033[0m");
		printf("\033[33m5. Nome : \033[0mCyberpunk 2077\n\033[32m   Preço: R$ 149.90\n\n\033[0m");
		printf("\033[33m6. Nome : \033[0mHogwarts Legacy\n\033[32m   Preço: R$ 299.90\n\n\033[0m");
		printf("\033[33m7. Nome : \033[0mMinecraft\n\033[32m   Preço: R$ 99.90\n\n\033[0m");
		printf("\033[33m8. Nome : \033[0mFIFA 25\n\033[32m   Preço: R$ 349.90\n\n\033[0m");
		printf("\033[33m9. Nome : \033[0mGTA V\n\033[32m   Preço: R$ 79.90\n\n\033[0m");
		printf("\033[33m10. Nome: \033[0mAssassin's Creed Mirage\n\033[32m    Preço: R$ 229.90\n\n\033[0m");

		printf("\033[35mDigite o número do jogo para mais informações ou 0 para sair: \033[0m");
		scanf("%d", &escolha);

		system("cls");
		
		//info dos jogos 
		switch (escolha)
		{
			case 1:
		printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
    printf("\033[36;1m|                     God of War Ragnarok                    |\033[0m\n");
    printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
    printf("Gênero: Ação, Aventura\n");
    printf("\033[1mDesenvolvedora:\033[0m Santa Monica Studio\n");
    printf("Ano de Lançamento: 2022\n");
    printf("\033[1;31mClassificação Indicativa:\033[0m 18+\n");
    printf("Modo de Jogo: Singleplayer\n");
    printf("Idiomas: PT-BR, EN, ES e mais\n");
    printf("Campanha: \033[1m25 a 40 horas\033[0m\n");
    printf("\033[33mAvaliação: 94/100\033[0m (Metacritic)\n");
    printf("\033[1mDescrição:\033[0m Kratos e Atreus enfrentam deuses nórdicos em meio ao fim do mundo.\n");
    printf("\033[1;32mComprar por R$299.90\033[0m\n");
    printf("\033[1mDigite C para pagar\033[0m\n\n");
    precoJogo = 299.90;
    break;

case 2:
    printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
    printf("\033[36;1m|                   The Last of Us Part II                   |\033[0m\n");
    printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
    printf("Gênero: Ação, Aventura, Sobrevivência\n");
    printf("\033[1mDesenvolvedora:\033[0m Naughty Dog\n");
    printf("Ano de Lançamento: 2020\n");
    printf("\033[1;31mClassificação Indicativa:\033[0m 18+\n");
    printf("Modo de Jogo: Singleplayer\n");
    printf("Idiomas: PT-BR, EN e outros\n");
    printf("Campanha: \033[1m25 a 35 horas\033[0m\n");
    printf("\033[33mAvaliação: 93/100\033[0m (Metacritic)\n");
    printf("\033[1mDescrição:\033[0m Uma história intensa de vingança e sobrevivência em um mundo devastado.\n");
    printf("\033[1;32mComprar por R$249.90\033[0m\n");
    printf("\033[1mDigite C para pagar\033[0m\n\n");
    precoJogo = 249.90;
    break;

case 3:
    printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
    printf("\033[36;1m|                         Elden Ring                         |\033[0m\n");
    printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
    printf("Gênero: Ação, RPG\n");
    printf("\033[1mDesenvolvedora:\033[0m FromSoftware\n");
    printf("Ano de Lançamento: 2022\n");
    printf("\033[1;31mClassificação Indicativa:\033[0m 16+\n");
    printf("Modo de Jogo: Singleplayer, Coop Online\n");
    printf("Idiomas: Legendas PT-BR e outros\n");
    printf("Campanha: \033[1m50 a 100 horas\033[0m\n");
    printf("\033[33mAvaliação: 96/100\033[0m (Metacritic)\n");
    printf("\033[1mDescrição:\033[0m Um mundo de fantasia com liberdade total e desafios brutais.\n");
    printf("\033[1;32mComprar por R$279.90\033[0m\n");
    printf("\033[1mDigite C para pagar\033[0m\n\n");
    precoJogo = 279.90;
    break;

case 4:
    printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
    printf("\033[36;1m|                  Red Dead Redemption 2                     |\033[0m\n");
    printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
    printf("Gênero: Ação, Aventura, Faroeste\n");
    printf("\033[1mDesenvolvedora:\033[0m Rockstar Games\n");
    printf("Ano de Lançamento: 2018\n");
    printf("\033[1;31mClassificação Indicativa:\033[0m 18+\n");
    printf("Modo de Jogo: Singleplayer, Multiplayer Online\n");
    printf("Idiomas: Legendas PT-BR e outros\n");
    printf("Campanha: \033[1m50 a 80 horas\033[0m\n");
    printf("\033[33mAvaliação: 97/100\033[0m (Metacritic)\n");
    printf("\033[1mDescrição:\033[0m A história de um fora-da-lei em um mundo imersivo do Velho Oeste.\n");
    printf("\033[1;32mComprar por R$199.90\033[0m\n");
    printf("\033[1mDigite C para pagar\033[0m\n\n");
    precoJogo = 199.90;
    break;

case 5:
    printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
    printf("\033[36;1m|                       Cyberpunk 2077                       |\033[0m\n");
    printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
    printf("Gênero: Ação, RPG, Futurista\n");
    printf("\033[1mDesenvolvedora:\033[0m CD Projekt Red\n");
    printf("Ano de Lançamento: 2020 (atualizado em 2023)\n");
    printf("\033[1;31mClassificação Indicativa:\033[0m 18+\n");
    printf("Modo de Jogo: Singleplayer\n");
    printf("Idiomas: Áudio/Legenda PT-BR e outros\n");
    printf("Campanha: \033[1m30 a 60 horas\033[0m\n");
    printf("\033[33mAvaliação: 80/100\033[0m (Metacritic)\n");
    printf("\033[1mDescrição:\033[0m Viva como um mercenário cibernético numa cidade futurista.\n");
    printf("\033[1;32mComprar por R$149.90\033[0m\n");
    printf("\033[1mDigite C para pagar\033[0m\n\n");
    precoJogo = 149.90;
    break;

case 6:
    printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
    printf("\033[36;1m|                     Hogwarts Legacy                        |\033[0m\n");
    printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
    printf("Gênero: Aventura, RPG, Magia\n");
    printf("\033[1mDesenvolvedora:\033[0m Portkey Games\n");
    printf("Ano de Lançamento: 2023\n");
    printf("\033[1;31mClassificação Indicativa:\033[0m 12+\n");
    printf("Modo de Jogo: Singleplayer\n");
    printf("Idiomas: Áudio/Legenda PT-BR e outros\n");
    printf("Campanha: \033[1m30 a 50 horas\033[0m\n");
    printf("\033[33mAvaliação: 84/100\033[0m (Metacritic)\n");
    printf("\033[1mDescrição:\033[0m Explore Hogwarts no século XIX como um aluno especial.\n");
    printf("\033[1;32mComprar por R$299.90\033[0m\n");
    printf("\033[1mDigite C para pagar\033[0m\n\n");
    precoJogo = 299.90;
    break;

case 7:
    printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
    printf("\033[36;1m|                          Minecraft                         |\033[0m\n");
    printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
    printf("Gênero: Aventura, Criativo, Sobrevivência\n");
    printf("\033[1mDesenvolvedora:\033[0m Mojang Studios\n");
    printf("Ano de Lançamento: 2011\n");
    printf("\033[1;31mClassificação Indicativa:\033[0m Livre\n");
    printf("Modo de Jogo: Singleplayer, Multiplayer\n");
    printf("Idiomas: PT-BR, EN e outros\n");
    printf("Campanha: \033[1mInfinita (sandbox)\033[0m\n");
    printf("\033[33mAvaliação: 93/100\033[0m (Metacritic)\n");
    printf("\033[1mDescrição:\033[0m Construa, explore e sobreviva com criatividade ilimitada.\n");
    printf("\033[1;32mComprar por R$99.90\033[0m\n");
    printf("\033[1mDigite C para pagar\033[0m\n\n");
    precoJogo = 99.90;
    break;

case 8:
    printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
    printf("\033[36;1m|                          FIFA 25                           |\033[0m\n");
    printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
    printf("Gênero: Esportes, Futebol\n");
    printf("\033[1mDesenvolvedora:\033[0m EA Sports\n");
    printf("Ano de Lançamento: 2024\n");
    printf("\033[1;31mClassificação Indicativa:\033[0m Livre\n");
    printf("Modo de Jogo: Singleplayer, Multiplayer\n");
    printf("Idiomas: Áudio/Legenda PT-BR e outros\n");
    printf("Campanha: \033[1mInfinita (partidas e temporadas)\033[0m\n");
    printf("\033[33mAvaliação: 78/100\033[0m (Metacritic)\n");
    printf("\033[1mDescrição:\033[0m Jogue com realismo total nos modos Ultimate Team e Carreira.\n");
    printf("\033[1;32mComprar por R$349.90\033[0m\n");
    printf("\033[1mDigite C para pagar\033[0m\n\n");
    precoJogo = 349.90;
    break;

case 9:
    printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
    printf("\033[36;1m|                    Grand Theft Auto V                      |\033[0m\n");
    printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
    printf("Gênero: Ação, Aventura, Mundo Aberto\n");
    printf("\033[1mDesenvolvedora:\033[0m Rockstar North\n");
    printf("Ano de Lançamento: 2013\n");
    printf("\033[1;31mClassificação Indicativa:\033[0m 18+\n");
    printf("Modo de Jogo: Singleplayer, Multiplayer\n");
    printf("Idiomas: Legendas PT-BR e outros\n");
    printf("Campanha: \033[1m30 a 40 horas\033[0m\n");
    printf("\033[33mAvaliação: 96/100\033[0m (Metacritic)\n");
    printf("\033[1mDescrição:\033[0m Três criminosos em Los Santos numa trama cheia de ação.\n");
    printf("\033[1;32mComprar por R$79.90\033[0m\n");
    printf("\033[1mDigite C para pagar\033[0m\n\n");
    precoJogo = 79.90;
    break;

case 10:
    printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
    printf("\033[36;1m|                Assassin's Creed Mirage                     |\033[0m\n");
    printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
    printf("Gênero: Ação, Aventura, Stealth\n");
    printf("\033[1mDesenvolvedora:\033[0m Ubisoft\n");
    printf("Ano de Lançamento: 2023\n");
    printf("\033[1;31mClassificação Indicativa:\033[0m 16+\n");
    printf("Modo de Jogo: Singleplayer\n");
    printf("Idiomas: Áudio/Legenda PT-BR e outros\n");
    printf("Campanha: \033[1m20 a 25 horas\033[0m\n");
    printf("\033[33mAvaliação: 81/100\033[0m (Metacritic)\n");
    printf("\033[1mDescrição:\033[0m Uma volta às origens da franquia com furtividade e assassinatos.\n");
    printf("\033[1;32mComprar por R$229.90\033[0m\n");
    printf("\033[1mDigite C para pagar\033[0m\n\n");
    precoJogo = 229.90;
    break;

		case 0:
			printf("\nSaindo da Arcade Store... Obrigado pela visita!\n");
			break;

		default:
			printf("Opção inválida. Tente novamente.\n");
			
			}
			
			//Local de Pagamento
			scanf (" %c", &comprar);
		if (comprar == 'c' || comprar == 'C'){
				system ("cls");
			printf("============================================\n");
printf("        BEM-VINDO AO LOCAL DE PAGAMENTO     \n");
printf("============================================\n\n");

printf("Falta pouco para você adquirir seu NOVO JOGO!\n\n");
printf("Informe o tipo de pagamento desejado:\n\n");
printf("  [A] Carteira Arcade\n");
printf("  [C] Cartão de Crédito\n");
printf("  [D] Cartão de Débito\n");
printf("  [P] Pix\n\n");
printf("Digite a opção correspondente: ");
			       scanf (" %c", &tipoP);
			       if (tipoP == 'A' || tipoP == 'a'){
			      	if (carteira >= precoJogo){
			      	carteira = carteira - precoJogo;
			       		printf ("compra realizada com  sucesso");
		}else {
		printf ("Saldo insuficiente !!!");
		       }	       
			    }   
		}

		if (escolha != 0)
		{
			printf("\nPressione Enter para voltar ao catálogo...");
			getchar();
			getchar();
		}

	} while (escolha != 0);

	return 0;
}
