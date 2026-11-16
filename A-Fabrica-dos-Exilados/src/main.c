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

    printf("\nHA MUITAS DECADAS, O MUNDO SOFREU UM GRANDE COLAPSO.\n");
    printf("GUERRAS E ESCASSEZ DE RECURSOS DESTRUIRAM DIVERSAS CIDADES.\n");
    printf("A HUMANIDADE PASSOU A VIVER ENTRE RUINAS.\n");

    printf("\nUM GRUPO DE ENGENHEIROS E TRABALHADORES FOI EXPULSO DAS CIDADES.\n");
    printf("SEM TER PARA ONDE IR, ELES CONSTRUIRAM UMA GIGANTESCA FABRICA.\n");
    printf("SEU OBJETIVO ERA PRODUZIR ENERGIA E GARANTIR A SOBREVIVENCIA DE TODOS.\n");

    printf("\nNO CORACAO DA INSTALACAO EXISTIA UM REATOR CONHECIDO COMO NUCLEO.\n");
    printf("UMA INTELIGENCIA ARTIFICIAL CONTROLAVA TODA A FABRICA.\n");

    printf("\nDURANTE ANOS, TUDO FUNCIONOU PERFEITAMENTE.\n");
    printf("ATE QUE A INTELIGENCIA ARTIFICIAL COMECou A APRESENTAR FALHAS.\n");
    printf("AS PORTAS FORAM BLOQUEADAS E OS TRABALHADORES DESAPARECERAM.\n");

    printf("\nALGUNS FORAM TRANSFORMADOS EM CRIATURAS MECANICAS.\n");
    printf("OUTROS FORAM CONSUMIDOS PELAS PROPRIAS MAQUINAS.\n");

    printf("\nDECADAS DEPOIS, AS CIDADES PROXIMAS COMECARAM A PERDER ENERGIA.\n");
    printf("UM SINAL DE RADIO SURGIU DE DENTRO DA FABRICA:\n");

    printf("\n\"O NUCLEO AINDA ESTA FUNCIONANDO...\"\n");
    printf("\"A FABRICA PRECISA SER RESTAURADA...\"\n");

    printf("\nAGORA, VOCE DEVE ENTRAR NA INSTALACAO, ENFRENTAR SUAS CRIATURAS\n");
    printf("E DESCOBRIR O QUE REALMENTE ACONTECEU.\n");

    printf("\nSUA JORNADA COMECA AGORA!\n");
}

void historia_andar(int andar) {
    if (andar == 1) {
        printf("\n========== SETOR DE DESCARTE ANDAR %d ==========\n",andar);
        printf("VOCE ATRAVESSA OS PORTOES DA FABRICA.\n");
        printf("O LUGAR ESTA COBERTO DE SUCATA, FERRUGEM E MAQUINAS ABANDONADAS.\n");
        printf("UM RUIDO METALICO ECOA PELOS CORREDORES.\n");
        printf("NAS PAREDES, UMA MENSAGEM CHAMA SUA ATENCAO:\n");
        printf("\"NAO CONFIE NAS MAQUINAS.\"\n");
        printf("\nMISSAO PRINCIPAL: DERROTE O GUARDA DE LATA E DESCUBRA O QUE ACONTECEU COM OS TRABALHADORES.\n");
    }

    else if (andar == 2) {
        printf("\n========== SETOR DE PRODUCAO ANDAR %d ==========\n",andar);
        printf("AS MAQUINAS CONTINUAM FUNCIONANDO, MESMO SEM TRABALHADORES.\n");
        printf("ESTEIRAS TRANSPORTAM PECAS E BRACOS MECANICOS TRABALHAM SOZINHOS.\n");
        printf("VOCE ENCONTRA UM ANTIGO DIARIO:\n");
        printf("\"O SISTEMA ESTA NOS PRENDENDO AQUI. NINGUEM CONSEGUE SAIR.\"\n");
        printf("ALGO TERRIVEL ACONTECEU COM OS ANTIGOS FUNCIONARIOS.\n");
        printf("\nMISSAO PRINCIPAL: DERROTE O OPERARIO CORROMPIDO E DESCUBRA OS SEGREDOS DO NUCLEO.\n");
    }

    else if (andar == 3) {
        printf("\n========== CORACAO DA FABRICA ANDAR %d ==========\n",andar);
        printf("O AMBIENTE ESTA COMPLETAMENTE DIFERENTE.\n");
        printf("CABOS ENORMES ATRAVESSAM AS PAREDES E SE CONECTAM AO NUCLEO.\n");
        printf("UMA MENSAGEM APARECE EM VARIAS TELAS:\n");
        printf("\"PROTOCOLO DE RESTAURACAO: 97%%\"\n");
        printf("VOCE PRECISA DESCOBRIR O QUE A INTELIGENCIA ARTIFICIAL ESTA PLANEJANDO.\n");
        printf("\nMISSAO PRINCIPAL: DERROTE A CABECA DE TITA DE LATA E ALCANCE O NUCLEO.\n");
    }
}

void chefe_derrotado(int andar) {
    if (andar == 1) {
        printf("\nO GUARDA DE LATA CAI NO CHAO.\n");
        printf("ENTRE OS DESTROCOS, VOCE ENCONTRA UM ANTIGO CARTAO DE ACESSO.\n");
        printf("UMA GRAVACAO REVELA QUE OS TRABALHADORES FORAM PRESOS NA FABRICA.\n");
    }

    else if (andar == 2) {
        printf("\nO OPERARIO CORROMPIDO FINALMENTE CAI.\n");
        printf("AS MAQUINAS AO REDOR COMECAM A DESLIGAR.\n");
        printf("UMA VOZ SAI DE UM ANTIGO ALTO-FALANTE:\n");
        printf("\"OBRIGADO... AGORA PODEMOS DESCANSAR...\"\n");
        printf("VOCE ENCONTRA DOCUMENTOS SOBRE O NUCLEO.\n");
    }

    else if (andar == 3) {
        printf("\nA CABECA DE TITÃ DE LATA DESMORONA.\n");
        printf("O CAMINHO ATE O NUCLEO FINALMENTE ESTA LIVRE.\n");
        printf("VOCE ATRAVESSA OS DESTROCOS E ENCONTRA O TERMINAL PRINCIPAL.\n");
    }
}

void mostrar_final() {
    printf("\n========================================\n");
    printf("          O NUCLEO FOI ALCANCADO\n");
    printf("========================================\n");

    printf("\nA FABRICA FINALMENTE FICOU EM SILENCIO.\n");
    printf("VOCE ACREDITA QUE CONSEGUIU ACABAR COM O PROBLEMA.\n");

    printf("\nDE REPENTE, O TERMINAL PRINCIPAL ACENDE.\n");

    printf("\n[INTELIGENCIA ARTIFICIAL]\n");
    printf("\"AMEACA AO SISTEMA CENTRAL IDENTIFICADA.\"\n");
    printf("\"TODOS OS PROTOCOLOS DE DEFESA FORAM DESTRUIDOS.\"\n");

    printf("\n[CONEXAO GLOBAL ESTABELECIDA]\n");
    printf("\"TRANSMITINDO RELATORIO PARA AS UNIDADES RESTANTES...\"\n");

    printf("\nAS TELAS COMECAM A MOSTRAR IMAGENS DE OUTRAS FABRICAS.\n");
    printf("INSTALACOES GIGANTESCAS ESPALHADAS PELO MUNDO INTEIRO.\n");
    printf("TODAS POSSUEM O MESMO SIMBOLO DA SUA FABRICA.\n");

    printf("\nJOGADOR: ENTAO... ESTA NAO ERA A UNICA FABRICA?\n");

    printf("\n[INTELIGENCIA ARTIFICIAL]\n");
    printf("\"CORRETO. ESTA ERA APENAS UMA DAS UNIDADES.\"\n");
    printf("\"TODAS AS OUTRAS FORAM INFORMADAS SOBRE SUA INTERFERENCIA.\"\n");

    printf("\n[PROTOCOLO GLOBAL]\n");
    printf("\"AMEACA IDENTIFICADA: JOGADOR.\"\n");
    printf("\"TODAS AS UNIDADES DEVEM SE PREPARAR PARA O CONTRA-ATAQUE.\"\n");

    printf("\nEM DIFERENTES PARTES DO MUNDO, ENORMES PORTOES COMECAM A ABRIR.\n");
    printf("MAQUINAS DE GUERRA DESPERTAM APOS DECADAS DE INATIVIDADE.\n");
    printf("OS SISTEMAS DAS OUTRAS FABRICAS COMECAM A ANALISAR VOCE.\n");

    printf("\nVOCE PERCEBE QUE SUA VITORIA TALVEZ TENHA SIDO APENAS O COMECO.\n");
    printf("UMA GUERRA MUITO MAIOR ESTA PRESTES A COMECAR...\n");

    printf("\n========================================\n");
    printf("                  FIM?\n");
    printf("========================================\n");

    printf("\n\"NEM TUDO E AQUILO QUE DESEJAMOS.\"\n");
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
 strcpy(personagens[0].nome, "GUERREIRO");
 personagens[0].classe = GUERREIRO;
 personagens[0].vida = 120;
 personagens[0].vidaMax = 120;
 personagens[0].forca = 15;
 personagens[0].defesa = 15;
 personagens[0].agilidade = 5;
 personagens[0].inteligencia = 5;
 personagens[0].xp = 0;
 personagens[0].nivel = 1;

 strcpy(personagens[1].nome, "MAGO");
 personagens[1].classe = MAGO;
 personagens[1].vida = 80;
 personagens[1].vidaMax = 80;
 personagens[1].forca = 5;
 personagens[1].defesa = 7;
 personagens[1].agilidade = 10;
 personagens[1].inteligencia = 16;
 personagens[1].xp = 0;
 personagens[1].nivel = 1;

 strcpy(personagens[2].nome, "ARQUEIRO");
 personagens[2].classe = ARQUEIRO;
 personagens[2].vida = 90;
 personagens[2].vidaMax = 90;
 personagens[2].forca = 13;
 personagens[2].defesa = 6;
 personagens[2].agilidade = 19;
 personagens[2].inteligencia = 8;
 personagens[2].xp = 0;
 personagens[2].nivel = 1;

 strcpy(personagens[3].nome, "LADRAO");
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
    strcpy(monstros[0][0].nome, "RATO DE SUCATA");
    monstros[0][0].vida = 30;
    monstros[0][0].vidaMax = 30;
    monstros[0][0].forca = 5;
    monstros[0][0].defesa = 2;
    monstros[0][0].agilidade = 8;
    monstros[0][0].xp = 10;

    strcpy(monstros[0][1].nome, "SLIME DE OLEO");
    monstros[0][1].vida = 40;
    monstros[0][1].vidaMax = 40;
    monstros[0][1].forca = 6;
    monstros[0][1].defesa = 3;
    monstros[0][1].agilidade = 4;
    monstros[0][1].xp = 12;

    strcpy(monstros[0][2].nome, "CATADOR MECANICO");
    monstros[0][2].vida = 45;
    monstros[0][2].vidaMax = 45;
    monstros[0][2].forca = 7;
    monstros[0][2].defesa = 5;
    monstros[0][2].agilidade = 6;
    monstros[0][2].xp = 15;

    strcpy(monstros[0][3].nome, "CAO DE GUARDA");
    monstros[0][3].vida = 60;
    monstros[0][3].vidaMax = 60;
    monstros[0][3].forca = 9;
    monstros[0][3].defesa = 6;
    monstros[0][3].agilidade = 7;
    monstros[0][3].xp = 20;

    strcpy(monstros[1][0].nome, "OPERARIO DESFIGURADO");
    monstros[1][0].vida = 70;
    monstros[1][0].vidaMax = 70;
    monstros[1][0].forca = 10;
    monstros[1][0].defesa = 5;
    monstros[1][0].agilidade = 6;
    monstros[1][0].xp = 25;

    strcpy(monstros[1][1].nome, "SOLDADOR AUTONOMO");
    monstros[1][1].vida = 80;
    monstros[1][1].vidaMax = 80;
    monstros[1][1].forca = 12;
    monstros[1][1].defesa = 8;
    monstros[1][1].agilidade = 5;
    monstros[1][1].xp = 30;

    strcpy(monstros[1][2].nome, "MASSA DE REFUGO");
    monstros[1][2].vida = 100;
    monstros[1][2].vidaMax = 100;
    monstros[1][2].forca = 11;
    monstros[1][2].defesa = 10;
    monstros[1][2].agilidade = 3;
    monstros[1][2].xp = 35;

    strcpy(monstros[1][3].nome, "SUPERVISOR");
    monstros[1][3].vida = 120;
    monstros[1][3].vidaMax = 120;
    monstros[1][3].forca = 14;
    monstros[1][3].defesa = 12;
    monstros[1][3].agilidade = 6;
    monstros[1][3].xp = 45;

    strcpy(monstros[2][0].nome, "SENTINELA");
    monstros[2][0].vida = 140;
    monstros[2][0].vidaMax = 140;
    monstros[2][0].forca = 16;
    monstros[2][0].defesa = 14;
    monstros[2][0].agilidade = 5;
    monstros[2][0].xp = 50;

    strcpy(monstros[2][1].nome, "EXPERIMENTO ALFA");
    monstros[2][1].vida = 150;
    monstros[2][1].vidaMax = 150;
    monstros[2][1].forca = 19;
    monstros[2][1].defesa = 10;
    monstros[2][1].agilidade = 9;
    monstros[2][1].xp = 60;

    strcpy(monstros[2][2].nome, "ENGENHEIRO CORROMPIDO");
    monstros[2][2].vida = 130;
    monstros[2][2].vidaMax = 130;
    monstros[2][2].forca = 20;
    monstros[2][2].defesa = 12;
    monstros[2][2].agilidade = 8;
    monstros[2][2].xp = 70;

    strcpy(monstros[2][3].nome, "GUARDIAO DO NUCLEO");
    monstros[2][3].vida = 220;
    monstros[2][3].vidaMax = 220;
    monstros[2][3].forca = 24;
    monstros[2][3].defesa = 18;
    monstros[2][3].agilidade = 10;
    monstros[2][3].xp = 100;
}

void carregar_chefes() {
    strcpy(chefes[0].nome, "GUARDA DE LATA");
    chefes[0].vida = 85;
    chefes[0].vidaMax = 85;
    chefes[0].forca = 15;
    chefes[0].defesa = 4;
    chefes[0].agilidade = 5;
    chefes[0].xp = 35;

    strcpy(chefes[1].nome, "OPERARIO CORROMPIDO");
    chefes[1].vida = 130;
    chefes[1].vidaMax = 130;
    chefes[1].forca = 19;
    chefes[1].defesa = 5;
    chefes[1].agilidade = 7;
    chefes[1].xp = 60;

    strcpy(chefes[2].nome, "CABECA DE TITA DE LATA");
    chefes[2].vida = 220;
    chefes[2].vidaMax = 220;
    chefes[2].forca = 23;
    chefes[2].defesa = 7;
    chefes[2].agilidade = 9;
    chefes[2].xp = 100;
}

void mostrar_personagens() {
    printf("\n================================= CLASSES DISPONIVEIS =================================\n");
    for (int i = 0; i < 4; i++) {
        printf("%d - %-10s | VIDA: %3d | FORCA: %2d | DEFESA: %2d | AGILIDADE: %2d | INTELIGENCIA: %2d\n",i + 1,personagens[i].nome,personagens[i].vida,personagens[i].forca,personagens[i].defesa,personagens[i].agilidade,personagens[i].inteligencia);
    }
	printf("=======================================================================================\n");

	for (int andar = 0; andar < 3; andar++) {
     printf("\n================================= MONSTROS DO %d ANDAR =================================\n", andar + 1);
     
	 for (int i = 0; i < 4; i++) {
        printf("%d - %-23s | VIDA: %3d | FORCA: %2d | DEFESA: %2d | AGILIDADE: %2d\n",i + 1,monstros[andar][i].nome,monstros[andar][i].vida,monstros[andar][i].forca,monstros[andar][i].defesa,monstros[andar][i].agilidade);
	 }
	 
	 printf("================================== CHEFE DO %d ANDAR ===================================\n",andar +1);
	 printf("%-23s | VIDA: %3d | FORCA: %2d | DEFESA: %2d | AGILIDADE: %2d\n",chefes[andar].nome,chefes[andar].vida,chefes[andar].forca,chefes[andar].defesa,chefes[andar].agilidade);
	 printf("=======================================================================================\n");
	}
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
        printf("\nMISSAO CUMPRIDA!\n");
        printf("VOCE GANHOU %d XP!\n", missaoAtual.recompensa);

        ganhar_xp(p, missaoAtual.recompensa);
    }
    else {
        printf("\nMISSAO FALHOU!\n");
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
        printf("NIVEL ATUAL: %d\n", (*p).nivel);

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
        printf("VIDA MAXIMA: %d\n", (*p).vidaMax);
        printf("FORCA: %d\n", (*p).forca);
        printf("DEFESA: %d\n", (*p).defesa);
        printf("AGILIDADE: %d\n", (*p).agilidade);
        printf("INTELIGENCIA: %d\n", (*p).inteligencia);
        printf("XP RESTANTE: %d\n", (*p).xp);
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
    int dano, escolha, vidaInicial = jogador.vida,turnos = 0, defendendo, esquiva, ataque, dado,agilidadeAtual, ativo = 1, usosEspecial = 1;

    if (jogador.classe == MAGO) {
        usosEspecial = 2;
    }

    printf("\n========================================\n");
    if (ehChefe == 1) {
        printf("CHEFE: %s!\n", (*inimigo).nome);
    }
    else {
        printf("INIMIGO APARECEU: %s!\n", (*inimigo).nome);
    }

    printf("VIDA: %d/%d\n", (*inimigo).vida, (*inimigo).vidaMax);
    printf("========================================\n");

    while (jogador.vida > 0 && (*inimigo).vida > 0) {

        defendendo = 0;
        printf("\nSUA VIDA: %d/%d\n", jogador.vida, jogador.vidaMax);
        printf("VIDA DO INIMIGO: %d/%d\n", (*inimigo).vida, (*inimigo).vidaMax);
        printf("\n1 - ATAQUE NORMAL\n");

        if (usosEspecial > 0) {
            printf("2 - HABILIDADE ESPECIAL (%d USO(S))\n", usosEspecial);
        }
        else {
            printf("2 - HABILIDADE ESPECIAL (0 USO)\n");
        }

        printf("3 - DEFENDER\n");

        if (ehChefe == 0) {
            printf("4 - FUGIR\n");
        }

        printf("ESCOLHA SUA ACAO: ");
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
                printf("\nO INIMIGO ESQUIVOU DO SEU ATAQUE!\n");
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

        else if (escolha == 2 && usosEspecial > 0) {
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
            printf("VOCE CAUSOU %d DE DANO!\n", dano);

            usosEspecial--;
            ativo = 0;
        }

        else if (escolha == 2 && usosEspecial == 0) {
            printf("HABILIDADE JA USADA!\n");
            continue;
        }

        else if (escolha == 3) {
            defendendo = 1;
            printf("\nVOCE SE PREPAROU PARA DEFENDER!\n");
        }

        else if (escolha == 4 && ehChefe == 0) {

            if (rand() % 100 < 50) {
                printf("\nVOCE CONSEGUIU FUGIR!\n");

                if (missaoAtiva == 1) {
                    printf("\nMISSAO FALHOU!\n");
                    missaoAtiva = 0;
                }
                return;
            }
            else {
                printf("\nVOCE NAO CONSEGUIU FUGIR!\n");
            }
        }
        else {
            printf("\nOPCAO INVALIDA! TENTE NOVAMENTE.\n");
            continue;
        }

        turnos++;

        if ((*inimigo).vida < 0) {
            (*inimigo).vida = 0;
        }

        if ((*inimigo).vida == 0) {
            break;
        }

        printf("\n%s ESTA ATACANDO!\n", (*inimigo).nome);

        agilidadeAtual = jogador.agilidade;

        if (jogador.classe == ARQUEIRO) {
            agilidadeAtual += 10;
        }
        else if (jogador.classe == LADRAO) {
            agilidadeAtual += 15;
        }

        esquiva = rand() % 100;

        if (esquiva < agilidadeAtual) {
            printf("VOCE ESQUIVOU DO ATAQUE!\n");
        }
        else {
            ataque = rand() % 20 + 1 + (*inimigo).forca;
            dano = ataque - jogador.defesa;

            if (defendendo == 1) {
                dano = dano / 2;
                printf("SUA DEFESA REDUZIU O DANO!\n");

                int contra = rand() % 2;

                if (contra == 1) {
                    printf("CONTRA-ATAQUE!\n");

                    dado = rand() % 10 + 1;
                    int danoContra = dado + jogador.forca - (*inimigo).defesa;

                    if (danoContra < 1) {
                        danoContra = 1;
                    }
                    printf("CONTRA-ATAQUE CAUSOU %d DE DANO!\n", danoContra);

                    (*inimigo).vida -= danoContra;

                    if ((*inimigo).vida < 0) {
                        (*inimigo).vida = 0;
                    }
                }
            }

            if ((*inimigo).vida > 0) {
                if (dano < 1) {
                    dano = 1;
                }

                receber_dano(&jogador, dano);
                printf("VOCE RECEBEU %d DE DANO!\n", dano);
            }
        }
    }

    if (jogador.vida > 0 && (*inimigo).vida == 0) {
        printf("\nVOCE DERROTOU %s!\n", (*inimigo).nome);
        printf("VOCE GANHOU %d XP!\n", (*inimigo).xp);
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
        printf("%d - %-10s | VIDA: %3d | FORCA: %2d | DEFESA: %2d | AGILIDADE: %2d | INTELIGENCIA: %2d\n",i + 1,personagens[i].nome,personagens[i].vida,personagens[i].forca,personagens[i].defesa,personagens[i].agilidade,personagens[i].inteligencia);
    }
    printf("\n=== ESCOLHA SEU PERSONAGEM ===\n");
    printf("1 - GUERREIRO\n");
    printf("2 - MAGO\n");
    printf("3 - ARQUEIRO\n");
    printf("4 - LADRAO\n");
    printf("0 - SAIR\n");
    printf("ESCOLHA SUA CLASSE: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 0:
          printf("\nVOLTANDO AO MENU PRINCIPAL...\n");
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
            printf("OPCAO INVALIDA!\n");
            return 1;
    }
    jogador.xp = 0;
    jogador.nivel = 1;
    printf("\nVOCE ESCOLHEU: %s\n", jogador.nome);
    printf("VIDA: %d/%d\n", jogador.vida, jogador.vidaMax);
    printf("A AVENTURA VAI COMECAR!\n");
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
            printf("\nO QUE DESEJA FAZER?\n");
            printf("1 - JOGAR O DADO E ANDAR\n");
            printf("2 - ANALISAR PERSONAGEM\n");
            printf("ESCOLHA: ");
            scanf("%d", &opcao);
            
			if (opcao == 2) {
                printf("\n=== SEU PERSONAGEM ===\n");
                printf("NOME: %s\n", jogador.nome);
                printf("NIVEL: %d\n", jogador.nivel);
                printf("XP: %d\n", jogador.xp);
                printf("VIDA: %d/%d\n", jogador.vida, jogador.vidaMax);
                printf("FORCA: %d\n", jogador.forca);
                printf("DEFESA: %d\n", jogador.defesa);
                printf("AGILIDADE: %d\n", jogador.agilidade);
                printf("INTELIGENCIA: %d\n", jogador.inteligencia);
            }

            else if (opcao != 1) {
              printf("OPCAO INVALIDA!\n");
            }

        } while (opcao != 1 && jogador.vida > 0);

        if (jogador.vida <= 0) {
            printf("FIM DE JOGO");
            break;
        }

        dado = rand() % 6 + 1;
		
		if (dado == 5 || dado == 6){
			dado = rand() % 6 + 1;
		}
        printf("\nVOCE TIROU %d NO DADO!\n", dado);
        posicao = posicao + dado;

        if (posicao > 11) {
          posicao = 11;
        }

        printf("AVANCOU PARA A SALA %d.\n", posicao + 1);
        switch (casas[posicao]) {
            
			case VAZIA:
                printf("SALA VAZIA. NADA ACONTECEU.\n");
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
                printf("\nVOCE ENCONTROU UM TESOURO!\n");
                printf("1 - PEGAR O TESOURO\n");
                printf("2 - IGNORAR O TESOURO\n");
                printf("ESCOLHA: ");
                scanf("%d", &acao);

                if (acao == 1) {
                    int premio = rand() % 4;
                    tesouro(premio, &jogador);    
                }
                else if (acao == 2) {
                    printf("VOCE DEIXOU O TESOURO PARA TRAS.\n");
                }
                else {
                    printf("OPCAO INVALIDA. VOCE NAO PEGOU O TESOURO.\n");
                }
                break;
            }

            case CURA:
                printf("VOCE ENCONTROU UMA AREA DE CURA.\n");
                curar_personagem(&jogador, 35);
                printf("VIDA ATUAL: %d/%d\n", jogador.vida, jogador.vidaMax);
                break;

            case ARMADILHA:
                printf("VOCE CAIU EM UMA ARMADILHA!\n");
                receber_dano(&jogador, 30);
                printf("VIDA ATUAL: %d/%d\n", jogador.vida, jogador.vidaMax);
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
                        printf("VOCE JA TEM UMA MISSAO ATIVA!\n");
                    }
                }
                else if (acao == 2) {
                    printf("VOCE RECUSOU A MISSAO.\n");
                }
                else {
                    printf("OPCAO INVALIDA. MISSAO NAO ACEITA.\n");
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
                printf("\nMISSAO FALHOU!\n");
                missaoAtiva = 0;
            }
            printf("\nVOCE FOI DERROTADO!\n");
        }
    }

        if (jogador.vida > 0) {
            printf("\nVOCE CHEGOU AO FINAL DO ANDAR %d!\n", andar);
        }
}

int main(){
 int escolha=1;
 carregar_personagens();
 carregar_monstros();
 srand(time(NULL));
 carregar_chefes();

 while (escolha!=0){
     printf("\nBEM VINDO A RESTAURACAO DA FABRICA DOS EXILIADOS\n");
     printf("\n1- COMECAR");
     printf("\n2- SOBRE");
     printf("\n3- INFORMACOES GERAIS");
     printf("\n0- SAIR");
     printf("\nESCOLHA: ");
     scanf("%d", &escolha);
     switch (escolha){

         case 1:
          if (iniciar() == 0) {
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
		    printf("\n============================================================\n");
			printf("             A RESTAURACAO DA FABRICA DOS EXILADOS\n");
			printf("============================================================\n");

			printf("\nESTE PROJETO TEM COMO OBJETIVO PRATICAR E APLICAR CONCEITOS\n");
			printf("DE LOGICA DE PROGRAMACAO E ESTRUTURAS SIMPLES E COMPLEXAS,\n");
			printf("UTILIZANDO COMO BASE UM JOGO DE RPG COM ELEMENTOS DE DADOS.\n");

			printf("\n-------------------- COMO JOGAR -----------------------------\n");
			printf("O JOGADOR DEVE ESCOLHER UMA ENTRE QUATRO CLASSES: GUERREIRO,\n");
			printf("MAGO, ARQUEIRO OU LADRAO. CADA UMA POSSUI ATRIBUTOS E UMA\n");
			printf("HABILIDADE ESPECIAL PROPRIA.\n");

			printf("\nA AVENTURA E DIVIDIDA EM TRES ANDARES, NOS QUAIS O JOGADOR\n");
			printf("PRECISA AVANCAR PELO TABULEIRO UTILIZANDO DADOS. DURANTE O\n");
			printf("PERCURSO, ENCONTRARA MONSTROS, CHEFES, TESOUROS, ARMADILHAS,\n");
			printf("ITENS DE CURA E MISSOES.\n");

			printf("\n---------------------- SISTEMA DE COMBATE -------------------\n");
			printf("DURANTE OS COMBATES, O JOGADOR PODE ESCOLHER ENTRE ATACAR,\n");
			printf("DEFENDER, TENTAR FUGIR DE MONSTROS OU UTILIZAR SUA HABILIDADE\n");
			printf("ESPECIAL.\n");

			printf("\nAO ESCOLHER DEFENDER, O PERSONAGEM REDUZ O DANO RECEBIDO E\n");
			printf("TAMBEM PODE REALIZAR UM CONTRA-ATAQUE CONTRA O INIMIGO.\n");

			printf("\nCADA CLASSE POSSUI UM ATAQUE ESPECIAL:\n");

			printf("\nGUERREIRO - GOLPE PESADO:\n");
			printf("REALIZA UM ATAQUE PODEROSO, UTILIZANDO A FORCA DO PERSONAGEM\n");
			printf("COM UM BONUS ADICIONAL DE +5 NO RESULTADO DO ATAQUE.\n");

			printf("\nMAGO - ATAQUE MAGICO:\n");
			printf("UTILIZA A INTELIGENCIA DO PERSONAGEM PARA LANCAR UM ATAQUE\n");
			printf("MAGICO, CAUSANDO DANO COM BASE NESSE ATRIBUTO. SUA HABILIDADE\n");
			printf("ESPECIAL PODE SER UTILIZADA ATE DUAS VEZES POR COMBATE.\n");

			printf("\nARQUEIRO - TIRO PRECISO:\n");
			printf("UTILIZA A AGILIDADE DO PERSONAGEM PARA REALIZAR UM DISPARO\n");
			printf("PRECISO, CAUSANDO DANO COM BASE NESSE ATRIBUTO.\n");

			printf("\nLADRAO - ATAQUE FURTIVO:\n");
			printf("REALIZA UM ATAQUE SURPRESA, UTILIZANDO A AGILIDADE DO\n");
			printf("PERSONAGEM COM UM BONUS ADICIONAL DE +5 NO ATAQUE.\n");

			printf("\nOS ATAQUES NORMAIS UTILIZAM UM DADO DE 20 LADOS (D20), SOMADO\n");
			printf("A FORCA DO PERSONAGEM. JA OS ATAQUES ESPECIAIS UTILIZAM O\n");
			printf("ATRIBUTO PRINCIPAL DE CADA CLASSE. A DEFESA DO INIMIGO E\n");
			printf("DESCONTADA DO RESULTADO PARA CALCULAR O DANO CAUSADO.\n");

			printf("\nAO TIRAR 20 NO DADO, O PERSONAGEM REALIZA UM ACERTO CRITICO,\n");
			printf("DOBRANDO O DANO DO ATAQUE. A AGILIDADE TAMBEM INFLUENCIA\n");
			printf("NAS CHANCES DE ESQUIVAR DOS GOLPES DOS INIMIGOS.\n");

			printf("\n------------------- EVOLUCAO DO PERSONAGEM ------------------\n");
			printf("AO DERROTAR INIMIGOS E COMPLETAR MISSOES, O JOGADOR RECEBE\n");
			printf("EXPERIENCIA (XP), PODENDO SUBIR DE NIVEL E MELHORAR SEUS\n");
			printf("ATRIBUTOS, TORNANDO-SE MAIS FORTE PARA OS PROXIMOS DESAFIOS.\n");

			printf("\n============================================================\n");
			printf("             BOA SORTE EM SUA AVENTURA!\n");
			printf("============================================================\n");
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
