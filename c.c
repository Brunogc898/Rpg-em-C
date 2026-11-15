#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
typedef enum {
    GUERREIRO,
    MAGO,
    ARQUEIRO,
	LADRAO
} ClassePersonagem;

typedef struct {
    char nome[30];
    ClassePersonagem classe;
    int vida, vidaMax;
    int forca, defesa, agilidade, inteligencia;
    int xp, nivel;
} Personagem;

typedef struct {
    char nome[30];
    int vida, vidaMax;
    int forca, defesa, agilidade;
    int xp;
} Inimigo;

typedef Inimigo Monstro;

typedef Inimigo Chefe;

typedef enum {
    VAZIA,
    COMBATE,
    TESOURO,
    CURA,
    ARMADILHA,
    MISSAO,
    CHEFE
} TipoCasa;

typedef struct {
    char nome[100];
    int tipo;
    int recompensa;
} Missao;

void historia_inicial() {
    printf("\n========================================\n");
    printf("       A FABRICA DOS EXILADOS\n");
    printf("========================================\n");

    printf("\nHa muitas decadas, o mundo sofreu um grande colapso.\n");
    printf("Guerras e escassez de recursos destruiram diversas cidades.\n");
    printf("A humanidade passou a viver entre ruinas.\n");

    printf("\nUm grupo de engenheiros e trabalhadores foi expulso das cidades.\n");
    printf("Sem ter para onde ir, eles construiram uma gigantesca fabrica.\n");
    printf("Seu objetivo era produzir energia e garantir a sobrevivencia de todos.\n");

    printf("\nNo coracao da instalacao existia um reator conhecido como NUCLEO.\n");
    printf("Uma inteligencia artificial controlava toda a fabrica.\n");

    printf("\nDurante anos, tudo funcionou perfeitamente.\n");
    printf("Ate que a inteligencia artificial comecou a apresentar falhas.\n");
    printf("As portas foram bloqueadas e os trabalhadores desapareceram.\n");

    printf("\nAlguns foram transformados em criaturas mecanicas.\n");
    printf("Outros foram consumidos pelas proprias maquinas.\n");

    printf("\nDecadas depois, as cidades proximas comecaram a perder energia.\n");
    printf("Um sinal de radio surgiu de dentro da fabrica:\n");

    printf("\n\"O Nucleo ainda esta funcionando...\"\n");
    printf("\"A fabrica precisa ser restaurada...\"\n");

    printf("\nAgora, voce deve entrar na instalacao, enfrentar suas criaturas\n");
    printf("e descobrir o que realmente aconteceu.\n");

    printf("\nSua jornada comeca agora!\n");
}

void historia_andar(int andar) {
    if (andar == 1) {
        printf("\n========== SETOR DE DESCARTE ANDAR %d ==========\n",andar);
        printf("Voce atravessa os portoes da fabrica.\n");
        printf("O lugar esta coberto de sucata, ferrugem e maquinas abandonadas.\n");
        printf("Um ruido metalico ecoa pelos corredores.\n");
        printf("Nas paredes, uma mensagem chama sua atencao:\n");
        printf("\"NAO CONFIE NAS MAQUINAS.\"\n");
		printf("\nMISSAO PRINCIPAL: Derrote o Guarda de Lata e descubra o que aconteceu com os trabalhadores.\n");
    }

    else if (andar == 2) {
        printf("\n========== SETOR DE PRODUCAO ANDAR %d ==========\n",andar);
        printf("As maquinas continuam funcionando, mesmo sem trabalhadores.\n");
        printf("Esteiras transportam pecas e bracos mecanicos trabalham sozinhos.\n");
        printf("Voce encontra um antigo diario:\n");
        printf("\"O sistema esta nos prendendo aqui. Ninguem consegue sair.\"\n");
        printf("Algo terrivel aconteceu com os antigos funcionarios.\n");
		printf("\nMISSAO PRINCIPAL: Derrote o Operario Corrompido e descubra os segredos do Nucleo.\n");
    }

    else if (andar == 3) {
        printf("\n========== CORACAO DA FABRICA ANDAR %d ==========\n",andar);
        printf("O ambiente esta completamente diferente.\n");
        printf("Cabos enormes atravessam as paredes e se conectam ao Nucleo.\n");
        printf("Uma mensagem aparece em varias telas:\n");
        printf("\"PROTOCOLO DE RESTAURACAO: 97%%\"\n");
        printf("Voce precisa descobrir o que a inteligencia artificial esta planejando.\n");
		printf("\nMISSAO PRINCIPAL: Derrote a Cabeca de Tita de Lata e alcance o Nucleo.\n");
    }
}

void chefe_derrotado(int andar) {
    if (andar == 1) {
        printf("\nO GUARDA DE LATA cai no chao.\n");
        printf("Entre os destrocos, voce encontra um antigo cartao de acesso.\n");
        printf("Uma gravacao revela que os trabalhadores foram presos na fabrica.\n");
    }

    else if (andar == 2) {
        printf("\nO OPERARIO CORROMPIDO finalmente cai.\n");
        printf("As maquinas ao redor comecam a desligar.\n");
        printf("Uma voz sai de um antigo alto-falante:\n");
        printf("\"Obrigado... agora podemos descansar...\"\n");
        printf("Voce encontra documentos sobre o Nucleo.\n");
    }

    else if (andar == 3) {
        printf("\nA CABECA DE TITÃ DE LATA desmorona.\n");
        printf("O caminho ate o Nucleo finalmente esta livre.\n");
        printf("Voce atravessa os destrocos e encontra o terminal principal.\n");
    }
}

void mostrar_final() {
    printf("\n========================================\n");
    printf("          O NUCLEO FOI ALCANCADO\n");
    printf("========================================\n");

    printf("\nA fabrica finalmente ficou em silencio.\n");
    printf("Voce acredita que conseguiu acabar com o problema.\n");

    printf("\nDe repente, o terminal principal acende.\n");

    printf("\n[INTELIGENCIA ARTIFICIAL]\n");
    printf("\"AMEACA AO SISTEMA CENTRAL IDENTIFICADA.\"\n");
    printf("\"TODOS OS PROTOCOLOS DE DEFESA FORAM DESTRUIDOS.\"\n");

    printf("\n[CONEXAO GLOBAL ESTABELECIDA]\n");
    printf("\"TRANSMITINDO RELATORIO PARA AS UNIDADES RESTANTES...\"\n");

    printf("\nAs telas comecam a mostrar imagens de outras fabricas.\n");
    printf("Instalacoes gigantescas espalhadas pelo mundo inteiro.\n");
    printf("Todas possuem o mesmo simbolo da sua fabrica.\n");

    printf("\nJOGADOR: Entao... esta nao era a unica fabrica?\n");

    printf("\n[INTELIGENCIA ARTIFICIAL]\n");
    printf("\"CORRETO. ESTA ERA APENAS UMA DAS UNIDADES.\"\n");
    printf("\"TODAS AS OUTRAS FORAM INFORMADAS SOBRE SUA INTERFERENCIA.\"\n");

    printf("\n[PROTOCOLO GLOBAL]\n");
    printf("\"AMEACA IDENTIFICADA: JOGADOR.\"\n");
    printf("\"TODAS AS UNIDADES DEVEM SE PREPARAR PARA O CONTRA-ATAQUE.\"\n");

    printf("\nEm diferentes partes do mundo, enormes portoes comecam a abrir.\n");
    printf("Maquinas de guerra despertam apos decadas de inatividade.\n");
    printf("Os sistemas das outras fabricas comecam a analisar voce.\n");

    printf("\nVoce percebe que sua vitoria talvez tenha sido apenas o comeco.\n");
    printf("Uma guerra muito maior esta prestes a comecar...\n");

    printf("\n========================================\n");
    printf("                  FIM?\n");
    printf("========================================\n");

    printf("\n\"Nem tudo e aquilo que desejamos.\"\n");
    printf("\n     A RESTAURACAO DA FABRICA DOS EXILADOS\n");
}

Personagem personagens[4];
Personagem jogador;
Missao missaoAtual;
Monstro monstros[3][4];
TipoCasa casas[12] = {VAZIA, COMBATE, TESOURO, COMBATE, CURA, ARMADILHA, COMBATE, CURA, TESOURO, MISSAO, VAZIA, CHEFE};
Chefe chefes[3];
int missaoAtiva = 0;

void carregar_personagens(){
 strcpy(personagens[0].nome, "Guerreiro");
 personagens[0].classe = GUERREIRO;
 personagens[0].vida = 120;
 personagens[0].vidaMax = 120;
 personagens[0].forca = 15;
 personagens[0].defesa = 15;
 personagens[0].agilidade = 5;
 personagens[0].inteligencia = 5;
 personagens[0].xp = 0;
 personagens[0].nivel = 1;
 
 strcpy(personagens[1].nome, "Mago");
 personagens[1].classe = MAGO;
 personagens[1].vida = 80;
 personagens[1].vidaMax = 80;
 personagens[1].forca = 5;
 personagens[1].defesa = 7;
 personagens[1].agilidade = 10;
 personagens[1].inteligencia = 16;
 personagens[1].xp = 0;
 personagens[1].nivel = 1;

 strcpy(personagens[2].nome, "Arqueiro");
 personagens[2].classe = ARQUEIRO;
 personagens[2].vida = 90;
 personagens[2].vidaMax = 90;
 personagens[2].forca = 13;
 personagens[2].defesa = 6;
 personagens[2].agilidade = 19;
 personagens[2].inteligencia = 8;
 personagens[2].xp = 0;
 personagens[2].nivel = 1;
 
 strcpy(personagens[3].nome, "Ladrao");
 personagens[3].classe = LADRAO;
 personagens[3].vida = 85;
 personagens[3].vidaMax = 85;
 personagens[3].forca = 14;
 personagens[3].defesa = 5;
 personagens[3].agilidade = 17;
 personagens[3].inteligencia = 10;
 personagens[3].xp = 0;
 personagens[3].nivel = 1;
}

void carregar_monstros() {
    strcpy(monstros[0][0].nome, "Rato de Sucata");
    monstros[0][0].vida = 30;
    monstros[0][0].vidaMax = 30;
    monstros[0][0].forca = 5;
    monstros[0][0].defesa = 2;
    monstros[0][0].agilidade = 8;
    monstros[0][0].xp = 10;

    strcpy(monstros[0][1].nome, "Slime de Oleo");
    monstros[0][1].vida = 40;
    monstros[0][1].vidaMax = 40;
    monstros[0][1].forca = 6;
    monstros[0][1].defesa = 3;
    monstros[0][1].agilidade = 4;
    monstros[0][1].xp = 12;

    strcpy(monstros[0][2].nome, "Catador Mecanico");
    monstros[0][2].vida = 45;
    monstros[0][2].vidaMax = 45;
    monstros[0][2].forca = 7;
    monstros[0][2].defesa = 5;
    monstros[0][2].agilidade = 6;
    monstros[0][2].xp = 15;

    strcpy(monstros[0][3].nome, "Cao de Guarda");
    monstros[0][3].vida = 60;
    monstros[0][3].vidaMax = 60;
    monstros[0][3].forca = 9;
    monstros[0][3].defesa = 6;
    monstros[0][3].agilidade = 7;
    monstros[0][3].xp = 20;

    strcpy(monstros[1][0].nome, "Operario Desfigurado");
    monstros[1][0].vida = 70;
    monstros[1][0].vidaMax = 70;
    monstros[1][0].forca = 10;
    monstros[1][0].defesa = 5;
    monstros[1][0].agilidade = 6;
    monstros[1][0].xp = 25;

    strcpy(monstros[1][1].nome, "Soldador Autonomo");
    monstros[1][1].vida = 80;
    monstros[1][1].vidaMax = 80;
    monstros[1][1].forca = 12;
    monstros[1][1].defesa = 8;
    monstros[1][1].agilidade = 5;
    monstros[1][1].xp = 30;

    strcpy(monstros[1][2].nome, "Massa de Refugo");
    monstros[1][2].vida = 100;
    monstros[1][2].vidaMax = 100;
    monstros[1][2].forca = 11;
    monstros[1][2].defesa = 10;
    monstros[1][2].agilidade = 3;
    monstros[1][2].xp = 35;

    strcpy(monstros[1][3].nome, "Supervisor");
    monstros[1][3].vida = 120;
    monstros[1][3].vidaMax = 120;
    monstros[1][3].forca = 14;
    monstros[1][3].defesa = 12;
    monstros[1][3].agilidade = 6;
    monstros[1][3].xp = 45;

    strcpy(monstros[2][0].nome, "Sentinela");
    monstros[2][0].vida = 140;
    monstros[2][0].vidaMax = 140;
    monstros[2][0].forca = 16;
    monstros[2][0].defesa = 14;
    monstros[2][0].agilidade = 5;
    monstros[2][0].xp = 50;

    strcpy(monstros[2][1].nome, "Experimento Alfa");
    monstros[2][1].vida = 150;
    monstros[2][1].vidaMax = 150;
    monstros[2][1].forca = 19;
    monstros[2][1].defesa = 10;
    monstros[2][1].agilidade = 9;
    monstros[2][1].xp = 60;

    strcpy(monstros[2][2].nome, "Engenheiro Corrompido");
    monstros[2][2].vida = 130;
    monstros[2][2].vidaMax = 130;
    monstros[2][2].forca = 20;
    monstros[2][2].defesa = 12;
    monstros[2][2].agilidade = 8;
    monstros[2][2].xp = 70;

    strcpy(monstros[2][3].nome, "Guardiao do Nucleo");
    monstros[2][3].vida = 220;
    monstros[2][3].vidaMax = 220;
    monstros[2][3].forca = 24;
    monstros[2][3].defesa = 18;
    monstros[2][3].agilidade = 10;
    monstros[2][3].xp = 100;
}

void mostrar_personagens() {
    printf("\n=== CLASSES DISPONIVEIS ===\n");
    for (int i = 0; i < 4; i++) {
        printf("%d - %-10s | Vida: %3d | Forca: %2d | Defesa: %2d | Agilidade: %2d | Inteligencia: %2d\n",i + 1,personagens[i].nome,personagens[i].vida,personagens[i].forca,personagens[i].defesa,personagens[i].agilidade,personagens[i].inteligencia);
    }
	printf("\n");
	for (int andar = 0; andar < 3; andar++) {
     printf("\n=== MONSTROS DO %d ANDAR ===\n", andar + 1);
     for (int i = 0; i < 4; i++) {
        printf("%d - %-23s | Vida: %3d | Forca: %2d | Defesa: %2d | Agilidade: %2d\n",i + 1,monstros[andar][i].nome,monstros[andar][i].vida,monstros[andar][i].forca,monstros[andar][i].defesa,monstros[andar][i].agilidade);
    }
  }
}

void carregar_chefes() {
    strcpy(chefes[0].nome, "Guarda de Lata");
    chefes[0].vida = 85;
    chefes[0].vidaMax = 85;
    chefes[0].forca = 15;
    chefes[0].defesa = 4;
    chefes[0].agilidade = 5;
    chefes[0].xp = 35;

    strcpy(chefes[1].nome, "Operario Corrompido");
    chefes[1].vida = 130;
    chefes[1].vidaMax = 130;
    chefes[1].forca = 19;
    chefes[1].defesa = 5;
    chefes[1].agilidade = 7;
    chefes[1].xp = 60;

    strcpy(chefes[2].nome, "Cabeca de Tita de Lata");
    chefes[2].vida = 220;
    chefes[2].vidaMax = 220;
    chefes[2].forca = 23;
    chefes[2].defesa = 7;
    chefes[2].agilidade = 9;
    chefes[2].xp = 100;
}

void embaralhar_casas() {
    int j;
    TipoCasa temp;

    for (int i = 10; i > 1; i--) {
        j = 1 + rand() % i;

        temp = casas[i];
        casas[i] = casas[j];
        casas[j] = temp;
    }
}

void ganhar_xp(Personagem *p, int xp) {
    (*p).xp += xp;
}

int rand_numero(){
	int numero = rand() % 2 + 1;
	return numero;
}

void bonus_aleatorio(Personagem *p){
 int atributo = rand() % 5;
 
 if (atributo == 0){
	 (*p).forca+= rand_numero();
 }
 else if (atributo == 1){
	 (*p).defesa+= rand_numero();
 }
	 
 else if (atributo == 2){
	 (*p).agilidade+= rand_numero();
 }
	 
 else if (atributo == 3){
	 (*p).inteligencia+= rand_numero();
 }
 else{
	 (*p).vidaMax+= rand_numero();
 }
}

void verificar_missao(Personagem *p, int vidaPerdida, int turnos, int ativo) {
    int cumpriu = 0;

    if (missaoAtiva == 0) {
        return;
    }

    if (missaoAtual.tipo == 1) {
		
		if (ativo == 1) {
			cumpriu = 1;
		}
    }
    else if (missaoAtual.tipo == 2) {
		
		if (turnos <= 3) {
			cumpriu = 1;
		}
    }
    else if (missaoAtual.tipo == 3) {
        
		if (vidaPerdida == 0 && (*p).vida > 0) {
            cumpriu = 1;
        }
    }

    if (cumpriu == 1) {
        printf("\nMissao cumprida!\n");
        printf("Voce ganhou %d XP!\n", missaoAtual.recompensa);

        ganhar_xp(p, missaoAtual.recompensa);
    }
    else {
        printf("\nMissao falhou!\n");
    }

    missaoAtiva = 0;
}

void receber_dano(Personagem *p, int dano) {
    (*p).vida -= dano;

    if ((*p).vida < 0) {
        (*p).vida = 0;
    }
}

void curar_personagem(Personagem *p, int cura) {
    (*p).vida += cura;

    if ((*p).vida > (*p).vidaMax) {
        (*p).vida = (*p).vidaMax;
    }
}
 
void verificar_nivel(Personagem *p) {
    int atributo;

    while ((*p).xp >= (*p).nivel * 100) {

        (*p).xp -= (*p).nivel * 100;
        (*p).nivel++;

        printf("\n*** SUBIU DE NIVEL! ***\n");
        printf("Nivel atual: %d\n", (*p).nivel);

        (*p).vidaMax += 5;

        for (int i = 0; i < 3; i++) {

            atributo = rand() % 4;

            if ((*p).classe == GUERREIRO) {
                if (atributo == 0 || atributo == 1) {
                    (*p).forca += 2;
                }
                else if (atributo == 2) {
                    (*p).vidaMax += 10;
                }
                else {
                    (*p).defesa += 1;
                }
            }
            else if ((*p).classe == MAGO) {
                if (atributo == 0 || atributo == 1) {
                    (*p).inteligencia += 2;
                }
                else if (atributo == 2) {
                    (*p).vidaMax += 5;
                }
                else {
                    (*p).forca += 1;
                }
            }
            else if ((*p).classe == ARQUEIRO) {
                if (atributo == 0 || atributo == 1) {
                    (*p).agilidade += 2;
                }
                else if (atributo == 2) {
                    (*p).forca += 1;
                }
                else {
                    (*p).vidaMax += 5;
                }
            }
            else if ((*p).classe == LADRAO) {
                if (atributo == 0 || atributo == 1) {
                    (*p).agilidade += 2;
                }
                else if (atributo == 2) {
                    (*p).forca += 1;
                }
                else {
                    (*p).defesa += 1;
                }
            }
        }

        (*p).vida = (*p).vidaMax;

        printf("Vida maxima: %d\n", (*p).vidaMax);
        printf("Forca: %d\n", (*p).forca);
        printf("Defesa: %d\n", (*p).defesa);
        printf("Agilidade: %d\n", (*p).agilidade);
        printf("Inteligencia: %d\n", (*p).inteligencia);
        printf("XP restante: %d\n", (*p).xp);
    }
}

void tesouro(int premio, Personagem *p) {
	if (premio == 0){
	 int dano = rand() % 26 + 15;
	 receber_dano(p, dano);

	  printf("\nVOCE ENCONTROU UMA BOMBA DENTRO DO BAU E TOMOU %d DE DANO\n",dano);
	}
	else if (premio == 1 ){
		int xps = rand() % 20 + 15;
		ganhar_xp(p, xps);
		printf("\nVOCE ENCONTROU UM ARTEFATO MISTERIOSO QUE RENDEU %d DE XP\n",xps);
		verificar_nivel(p);
	}
	
	else if (premio == 2 ){
		int cura = rand() % 15 + 15;
		curar_personagem(p, cura);
		printf("\nVOCE ENCONTROU UMA POCAO QUE CUROU %d DA SUA VIDA\n",cura);
	}
	else {
	 int aumento = rand() % 3 + 1;
	 int escolha = rand() % 5;
		
		printf("\nVOCE ENCONTROU UMA POCAO MAGICA!\n");
		if (escolha == 0) {
			(*p).forca += aumento;
			printf("SUA FORCA AUMENTOU EM %d!\n", aumento);
		}
		else if (escolha == 1) {
			(*p).defesa += aumento;
			printf("SUA DEFESA AUMENTOU EM %d!\n", aumento);
		}
		else if (escolha == 2) {
			(*p).agilidade += aumento;
			printf("SUA AGILIDADE AUMENTOU EM %d!\n", aumento);
		}
		else if (escolha == 3) {
			(*p).inteligencia += aumento;
			printf("SUA INTELIGENCIA AUMENTOU EM %d!\n", aumento);
		}
		else {
			(*p).vidaMax += aumento;
			printf("SUA VIDA MAXIMA AUMENTOU EM %d!\n", aumento);
		}
	}
}

void combater(Inimigo *inimigo, int ehChefe) {
    int dano, escolha, vidaInicial = jogador.vida,turnos = 0, defendendo, esquiva, ataque, dado,agilidadeAtual, ativo = 1;

    printf("\n========================================\n");

    if (ehChefe == 1) {
        printf("CHEFE: %s!\n", (*inimigo).nome);
    }
    else {
        printf("INIMIGO APARECEU: %s!\n", (*inimigo).nome);
    }

    printf("Vida: %d/%d\n", (*inimigo).vida, (*inimigo).vidaMax);
    printf("========================================\n");

    while (jogador.vida > 0 && (*inimigo).vida > 0) {
        defendendo = 0;

        printf("\nSua vida: %d/%d\n", jogador.vida, jogador.vidaMax);
        printf("Vida do inimigo: %d/%d\n", (*inimigo).vida, (*inimigo).vidaMax);

        printf("\n1 - Ataque normal\n");
		
		if (ativo == 1){
         printf("2 - Habilidade especial(1 USO)\n");
		}
		
		else{
			printf("2 - Habilidade especial(0 USO)\n");
		}
			
        printf("3 - Defender\n");

        if (ehChefe == 0) {
            printf("4 - Fugir\n");
        }

        printf("Escolha sua acao: ");
        scanf("%d", &escolha);

        if (escolha == 1) {
            dado = rand() % 20 + 1;
            ataque = dado + jogador.forca;
            dano = ataque - (*inimigo).defesa;

            if (dano < 1) {
                dano = 1;
            }

            esquiva = rand() % 100;

            if (esquiva < (*inimigo).agilidade * 2) {
                printf("\nO inimigo esquivou do seu ataque!\n");
            }
            else {
                if (dado == 20) {
                    dano *= 2;
                    printf("\n*** ATAQUE CRITICO! DANO DOBRADO! ***\n");
                }

                (*inimigo).vida -= dano;
                printf("\nCAUSOU %d DE DANO!\n", dano);
            }
        }
		else if (escolha == 2 && ativo == 1) {
			dado = rand() % 20 + 1;

			if (jogador.classe == GUERREIRO) {
				ataque = dado + jogador.forca + 5;
				printf("\nGOLPE PESADO!\n");
			}
			else if (jogador.classe == MAGO) {
				ataque = dado + jogador.inteligencia;
				printf("\nATAQUE MAGICO!\n");
			}
			else if (jogador.classe == ARQUEIRO) {
				ataque = dado + jogador.agilidade;
				printf("\nTIRO PRECISO!\n");
			}
			else {
				ataque = dado + jogador.agilidade + 5;
				printf("\nATAQUE FURTIVO!\n");
			}

			dano = ataque - (*inimigo).defesa;

			if (dano < 1) {
				dano = 1;
			}

			if (dado == 20) {
				dano *= 2;
				printf("ATAQUE CRITICO!\n");
			}

			(*inimigo).vida -= dano;

			printf("Voce causou %d de dano!\n", dano);
			ativo--;
		}
		
		else if (escolha == 2 && ativo == 0) {
			printf("HABILIDADE JA USADA");
			continue;
		}
       
	   else if (escolha == 3) {
            defendendo = 1;
            printf("\nVoce se preparou para defender!\n");
        }
        
		else if (escolha == 4 && ehChefe == 0) {
            if (rand() % 100 < 50) {
                printf("\nVoce conseguiu fugir!\n");

                if (missaoAtiva == 1) {
                    printf("\nMissao falhou!\n");
                    missaoAtiva = 0;
                }

                return;
            }
            else {
                printf("\nVoce nao conseguiu fugir!\n");
            }
        }
        else {
            printf("\nOpcao invalida! Tente novamente.\n");
            continue;
        }

        turnos++;

        if ((*inimigo).vida < 0) {
            (*inimigo).vida = 0;
        }

        if ((*inimigo).vida == 0) {
            break;
        }

        printf("\n%s esta atacando!\n", (*inimigo).nome);

        agilidadeAtual = jogador.agilidade;

        if (jogador.classe == ARQUEIRO) {
            agilidadeAtual += 10;
        }
        else if (jogador.classe == LADRAO) {
            agilidadeAtual += 15;
        }

        esquiva = rand() % 100;

        if (esquiva < agilidadeAtual) {
            printf("Voce esquivou do ataque!\n");
        }
        else {
            ataque = rand() % 20 + 1 + (*inimigo).forca;
            dano = ataque - jogador.defesa;

            if (defendendo == 1) {
                dano = dano / 2;
                printf("Sua defesa reduziu o dano!\n");
            }

            if (dano < 1) {
                dano = 1;
            }

            receber_dano(&jogador, dano);

            printf("Voce recebeu %d de dano!\n", dano);
        }
    }

    if (jogador.vida > 0 && (*inimigo).vida == 0) {
        printf("\nVoce derrotou %s!\n", (*inimigo).nome);
        printf("Voce ganhou %d XP!\n", (*inimigo).xp);

        ganhar_xp(&jogador, (*inimigo).xp);
		bonus_aleatorio(&jogador);

        verificar_missao(&jogador, vidaInicial - jogador.vida, turnos, ativo);
        verificar_nivel(&jogador);
    }
}

int iniciar() {
    int escolha;
    printf("\n=== CLASSES DISPONIVEIS ===\n");
    for (int i = 0; i < 4; i++) {
        printf("%d - %-10s | Vida: %3d | Forca: %2d | Defesa: %2d | Agilidade: %2d | Inteligencia: %2d\n",i + 1,personagens[i].nome,personagens[i].vida,personagens[i].forca,personagens[i].defesa,personagens[i].agilidade,personagens[i].inteligencia);
    }
    printf("\n=== ESCOLHA SEU PERSONAGEM ===\n");
    printf("1 - Guerreiro\n");
    printf("2 - Mago\n");
    printf("3 - Arqueiro\n");
    printf("4 - Ladrao\n");
	printf("0 - sair\n");
    printf("Escolha sua classe: ");
    scanf("%d", &escolha);

    switch (escolha) {
		case 0:
		  printf("\nVoltando ao menu principal...\n");
          return 1;
		
        case 1:
            jogador = personagens[0];
            break;

        case 2:
            jogador = personagens[1];
            break;

        case 3:
            jogador = personagens[2];
            break;

        case 4:
            jogador = personagens[3];
            break;

        default:
            printf("Opcao invalida!\n");
            return 1;
    }
    jogador.xp = 0;
    jogador.nivel = 1;
    printf("\nVoce escolheu: %s\n", jogador.nome);
    printf("Vida: %d/%d\n", jogador.vida, jogador.vidaMax);
    printf("A aventura vai comecar!\n");
	return 0;
}
	
void sortear_missao() {
    int opcao;
    opcao = rand() % 3;

    if (opcao == 0) {
        missaoAtual.tipo = 1;
        missaoAtual.recompensa = 50;

        printf("\nDESAFIO: EU AGUENTO!\n");
        printf("VENCA UMA LUTA SEM USAR HABILIDADE ESPECIAL.\n");
    }
    else if (opcao == 1) {
        missaoAtual.tipo = 2;
        missaoAtual.recompensa = 40;

        printf("\nDESAFIO: PROFISSIONAL!\n");
        printf("DERROTE UM INIMIGO EM 3 TURNOS.\n");
    }
    else {
        missaoAtual.tipo = 3;
        missaoAtual.recompensa = 70;

        printf("\nDESAFIO: INVENCIVEL!\n");
        printf("GANHE UM BATALHA SEM TOMAR DANO.\n");
    }

    missaoAtiva = 1;
}

void jogar_andar(int andar) {
    int posicao = 0, dado, opcao;
	embaralhar_casas();
	historia_andar(andar);
    while (posicao < 11 && jogador.vida > 0) {
        printf("\n========== SALA %d ==========\n", posicao + 1);
        do {
            printf("\nO que deseja fazer?\n");
            printf("1 - Jogar o dado e andar\n");
            printf("2 - Analisar personagem\n");
            printf("Escolha: ");
            scanf("%d", &opcao);
            if (opcao == 2) {
                printf("\n=== SEU PERSONAGEM ===\n");
                printf("Nome: %s\n", jogador.nome);
                printf("Nivel: %d\n", jogador.nivel);
                printf("XP: %d\n", jogador.xp);
                printf("Vida: %d/%d\n", jogador.vida, jogador.vidaMax);
                printf("Forca: %d\n", jogador.forca);
                printf("Defesa: %d\n", jogador.defesa);
                printf("Agilidade: %d\n", jogador.agilidade);
                printf("Inteligencia: %d\n", jogador.inteligencia);
            }

            else if (opcao != 1) {
              printf("Opcao invalida!\n");
            }
        
		} while (opcao != 1 && jogador.vida > 0);

        if (jogador.vida <= 0) {
			printf("FIM DE JOGO");
            break;
        }

        dado = rand() % 6 + 1;
        printf("\nVOCE TIROU %d NO DADO!\n", dado);

        posicao = posicao + dado;

        if (posicao > 11) {
          posicao = 11;
        }

        printf("AVANCOU PARA A SALA %d.\n", posicao + 1);
        switch (casas[posicao]) {
            case VAZIA:
                printf("Sala vazia. Nada aconteceu.\n");
                break;

            case COMBATE: {
                int indice;
                indice = rand() % 4;
                Monstro inimigo = monstros[andar - 1][indice];
				combater(&inimigo, 0);
                break;
            }

            case TESOURO: {
                int acao;
                printf("\nVoce encontrou um tesouro!\n");
                printf("1 - Pegar o tesouro\n");
                printf("2 - Ignorar o tesouro\n");
                printf("Escolha: ");
                scanf("%d", &acao);

                if (acao == 1) {
					int premio = rand() % 4;
					tesouro(premio, &jogador);	
                }
                else if (acao == 2) {
                    printf("Voce deixou o tesouro para tras.\n");
                }
                else {
                    printf("Opcao invalida. Voce nao pegou o tesouro.\n");
                }
                break;
            }

            case CURA:
                printf("Voce encontrou uma area de cura.\n");
				curar_personagem(&jogador, 35);
                printf("Vida atual: %d/%d\n", jogador.vida, jogador.vidaMax);
                break;

            case ARMADILHA:
                printf("Voce caiu em uma armadilha!\n");
				receber_dano(&jogador, 30);
                printf("Vida atual: %d/%d\n", jogador.vida, jogador.vidaMax);
                break;

            case MISSAO: {
                int acao;
                printf("\nVOCE ENCONTROU UM SANTUARIO OFERECENDO UM DESAFIO!\n");
                printf("1 - ACEITAR\n");
                printf("2 - RECUSAR\n");
                printf("ESCOLHA: ");
                scanf("%d", &acao);

                if (acao == 1) {
                    if (missaoAtiva == 0) {
                        sortear_missao();
                    }
                    else {
                        printf("Voce ja tem uma missao ativa!\n");
                    }
                }
                else if (acao == 2) {
                    printf("Voce recusou a missao.\n");
                }
                else {
                    printf("Opcao invalida. Missao nao aceita.\n");
                }
                break;
            }

			case CHEFE:
				combater(&chefes[andar - 1], 1);

				if (jogador.vida > 0) {
					chefe_derrotado(andar);
					posicao = 11;
				}
				break;
        }

        if (jogador.vida <= 0) {
			if (missaoAtiva == 1) {
				printf("\nMissao falhou!\n");
				missaoAtiva = 0;
			}
            printf("\nVoce foi derrotado!\n");
        }
    }

		if (jogador.vida > 0) {
			printf("\nVoce chegou ao final do andar %d!\n", andar);
		}
}

int main(){
 int escolha=1;
 carregar_personagens();
 carregar_monstros();
 srand(time(NULL));
 
 while (escolha!=0){
	 printf("\nBEM VINDO A RESTAURACAO DA FABRICA DOS EXILIADOS\n");
	 printf("\n1- COMECAR");
	 printf("\n2- SOBRE");
	 printf("\n3- INFORMACOES GERAIS");
	 printf("\n0- Sair");
	 printf("\nESCOLHA: ");
	 scanf("%d", &escolha);
	 switch (escolha){
		 
		 case 1:
		  if (iniciar() == 0) {
		   carregar_chefes();
		   missaoAtiva = 0;
		   historia_inicial();
		   
		   for (int andar = 1; andar <= 3 && jogador.vida > 0; andar++) {
			 jogar_andar(andar);
		   }
           if (jogador.vida > 0) {
			mostrar_final();
		   }
		  }
		  break;
		 
		 case 2:
		  printf("ESTA AVENTURA TEM O PRINCIPIO DE PRATICAR A LOGICA DE ESTRUTURAS SIMPLES OU COMPLEXAS NUM JOGO DE RPG COM DADOS.");
		  break;
		 
		 case 3:
		  mostrar_personagens();
		  break;
		 
		 case 0:
		  printf("SAINDO DA AVENTURA");
		  break;
		  
		 default:
		  printf("COMANDO INVALIDO");
		  break;
	 }
 }
 return 0;
}