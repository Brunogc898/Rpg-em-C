# A RESTAURAÇÃO DA FÁBRICA DOS EXILADOS

**Aluno:** ANIBAL BRUNO GARCIA COSTA  
**Matrícula:** 20250054517  
**Curso:** Sistemas de Informação – UFRN  
**Linguagem:** C

---

# 1. História do jogo

Há muitas décadas, o mundo sofreu um grande colapso. Guerras e escassez de recursos destruíram diversas cidades, fazendo com que a humanidade passasse a viver entre ruínas.

Um grupo de engenheiros e trabalhadores foi expulso das cidades e, sem ter para onde ir, construiu uma gigantesca fábrica com o objetivo de produzir energia e garantir a sobrevivência de todos.

No coração da instalação existia um reator conhecido como Núcleo, controlado por uma inteligência artificial.

Durante anos, tudo funcionou perfeitamente, até que a inteligência artificial começou a apresentar falhas. As portas foram bloqueadas, os trabalhadores desapareceram e alguns foram transformados em criaturas mecânicas.

Décadas depois, as cidades próximas começaram a perder energia. Um sinal de rádio surgiu de dentro da fábrica:

> "O Núcleo ainda está funcionando..."
>
> "A fábrica precisa ser restaurada..."

Agora, o jogador precisa entrar na instalação, enfrentar suas criaturas e descobrir o que realmente aconteceu.

## 1.1. Objetivo final

O objetivo é atravessar os três andares da fábrica, derrotar os chefes de cada setor e alcançar o Núcleo.

Entretanto, ao chegar ao terminal principal, o jogador descobre que aquela fábrica era apenas uma das várias unidades existentes pelo mundo. As outras instalações recebem informações sobre sua interferência e começam a preparar um contra-ataque.

A história termina com a possibilidade de uma guerra muito maior.

*"Nem tudo é aquilo que desejamos."*

## 1.2. Ambientação e fases

O jogo possui três andares:

- **1º andar – Setor de Descarte:** área coberta de sucata, ferrugem e máquinas abandonadas.
- **2º andar – Setor de Produção:** setor onde as máquinas continuam funcionando mesmo sem trabalhadores.
- **3º andar – Coração da Fábrica:** região central da instalação, onde estão os sistemas conectados ao Núcleo.

---

# 2. Personagens

O jogador pode escolher entre quatro classes. Cada uma possui atributos iniciais, uma habilidade especial própria e características que influenciam seu desempenho durante os combates.

## 2.1. Atributos iniciais

| Classe | Vida | Força | Defesa | Agilidade | Inteligência |
|---|---:|---:|---:|---:|---:|
| Guerreiro | 120 | 15 | 15 | 5 | 5 |
| Mago | 80 | 5 | 7 | 10 | 16 |
| Arqueiro | 90 | 13 | 6 | 19 | 8 |
| Ladrão | 85 | 14 | 5 | 17 | 10 |

Todos começam no nível 1 e com 0 XP.

## 2.2. Descrição e habilidades especiais

**Guerreiro**

- Descrição: especialista em combate físico, possui grande resistência e força.
- Habilidade especial: **Golpe Pesado**.
- Funcionamento: utiliza um ataque com D20, força e um bônus adicional de 5 pontos.
- Quantidade de usos: 1 vez por combate.

**Mago**

- Descrição: especialista em inteligência e ataques mágicos.
- Habilidade especial: **Ataque Mágico**.
- Funcionamento: utiliza um ataque com D20 somado à inteligência.
- Quantidade de usos: 2 vezes por combate.

**Arqueiro**

- Descrição: personagem com elevada agilidade e precisão.
- Habilidade especial: **Tiro Preciso**.
- Funcionamento: utiliza um ataque com D20 somado à agilidade.
- Característica adicional: recebe 10 pontos extras de agilidade para calcular a esquiva.
- Quantidade de usos: 1 vez por combate.

**Ladrão**

- Descrição: personagem rápido, com características voltadas à agilidade e ao combate.
- Habilidade especial: **Ataque Furtivo**.
- Funcionamento: utiliza um ataque com D20, agilidade e um bônus adicional de 5 pontos.
- Característica adicional: recebe 15 pontos extras de agilidade para calcular a esquiva.
- Quantidade de usos: 1 vez por combate.

## 2.3. Equipamentos

O jogo não possui sistema de equipamentos ou armas que aumentem os atributos. O desempenho depende das características iniciais da classe, das recompensas encontradas e da evolução do personagem.

---

# 3. Monstros e chefes

Cada andar possui quatro monstros comuns e um chefe. Os inimigos apresentam diferentes quantidades de vida, força, defesa e agilidade.

Os monstros comuns e chefes também concedem XP quando derrotados.

## 3.1. Primeiro andar – Setor de Descarte

**Missão principal:** derrotar o Guarda de Lata e descobrir o que aconteceu com os trabalhadores.

| Monstro | Vida | Força | Defesa | Agilidade | XP |
|---|---:|---:|---:|---:|---:|
| Rato de Sucata | 30 | 5 | 2 | 8 | 10 |
| Slime de Óleo | 40 | 6 | 3 | 4 | 12 |
| Catador Mecânico | 45 | 7 | 5 | 6 | 15 |
| Cão de Guarda | 60 | 9 | 6 | 7 | 20 |

**Chefe: Guarda de Lata**

| Vida | Força | Defesa | Agilidade | XP |
|---:|---:|---:|---:|---:|
| 85 | 15 | 4 | 5 | 35 |

Após derrotá-lo, o jogador encontra um cartão de acesso e uma gravação que revela que os trabalhadores foram presos na fábrica.

## 3.2. Segundo andar – Setor de Produção

**Missão principal:** derrotar o Operário Corrompido e descobrir os segredos do Núcleo.

| Monstro | Vida | Força | Defesa | Agilidade | XP |
|---|---:|---:|---:|---:|---:|
| Operário Desfigurado | 70 | 10 | 5 | 6 | 25 |
| Soldador Autônomo | 80 | 12 | 8 | 5 | 30 |
| Massa de Refugo | 100 | 11 | 10 | 3 | 35 |
| Supervisor | 120 | 14 | 12 | 6 | 45 |

**Chefe: Operário Corrompido**

| Vida | Força | Defesa | Agilidade | XP |
|---:|---:|---:|---:|---:|
| 130 | 19 | 5 | 7 | 60 |

Após derrotá-lo, as máquinas começam a desligar e o jogador encontra documentos sobre o Núcleo.

## 3.3. Terceiro andar – Coração da Fábrica

**Missão principal:** derrotar a Cabeça de Titã de Lata e alcançar o Núcleo.

| Monstro | Vida | Força | Defesa | Agilidade | XP |
|---|---:|---:|---:|---:|---:|
| Sentinela | 140 | 16 | 14 | 5 | 50 |
| Experimento Alfa | 150 | 19 | 10 | 9 | 60 |
| Engenheiro Corrompido | 130 | 20 | 12 | 8 | 70 |
| Guardião do Núcleo | 220 | 24 | 18 | 10 | 100 |

**Chefe: Cabeça de Titã de Lata**

| Vida | Força | Defesa | Agilidade | XP |
|---:|---:|---:|---:|---:|
| 220 | 23 | 7 | 9 | 100 |

Após derrotá-lo, o caminho até o Núcleo fica livre e o jogador encontra o terminal principal.

---

# 4. Dinâmica do jogo

## 4.1. Menu principal

Ao iniciar o jogo, o jogador encontra três opções:

1. **Começar:** inicia uma nova aventura e permite escolher uma classe.
2. **Sobre:** apresenta informações sobre a proposta do jogo.
3. **Informações gerais:** exibe os atributos dos personagens e monstros.

Também existe a opção 0 para sair do jogo.

## 4.2. Movimentação

A movimentação acontece por meio de um dado de seis faces.

- O personagem começa na primeira posição do mapa.
- O jogador escolhe a opção de jogar o dado.
- O resultado determina quantas posições serão avançadas.
- O jogador não pode ultrapassar a última posição do mapa.
- Cada andar possui 12 posições.
- As casas intermediárias são embaralhadas aleatoriamente.
- A casa inicial e a casa do chefe permanecem em suas posições.
- Antes de lançar o dado, o jogador também pode analisar as informações do personagem, verificando vida, nível, XP e atributos.

## 4.3. Tipos de casas

O mapa possui sete tipos de casas:

| Casa | Funcionamento |
|---|---|
| Vazia | Não acontece nenhum evento. |
| Combate | Inicia uma batalha contra um monstro aleatório do andar. |
| Tesouro | Permite pegar ou ignorar um tesouro. |
| Cura | Recupera 35 pontos de vida. |
| Armadilha | Causa 30 pontos de dano. |
| Missão | Apresenta um desafio opcional que pode ser aceito ou recusado. |
| Chefe | Inicia o combate contra o chefe do andar. |

## 4.4. Sistema de tesouros

Ao encontrar um tesouro, o jogador pode escolher entre pegá-lo ou ignorá-lo.

Caso decida pegar, uma recompensa aleatória será sorteada:

| Recompensa | Funcionamento |
|---|---|
| Bomba | Causa entre 15 e 40 pontos de dano. |
| Artefato misterioso | Concede entre 15 e 34 XP. |
| Poção de cura | Recupera entre 15 e 29 pontos de vida. |
| Poção mágica | Aumenta aleatoriamente um atributo entre 1 e 3 pontos. |

A poção mágica pode aumentar força, defesa, agilidade, inteligência ou vida máxima.

## 4.5. Sistema de combate

Durante uma batalha, o jogador pode escolher entre diferentes ações:

- **Ataque normal:** realiza um ataque físico utilizando a força.
- **Habilidade especial:** executa a habilidade exclusiva da classe, com uma quantidade limitada de usos por combate.
- **Defender:** reduz pela metade o dano recebido no próximo ataque do inimigo e oferece uma possibilidade de contra-atacar.
- **Fugir:** permite tentar escapar de combates contra monstros comuns, com 50% de chance de sucesso.

Não é possível fugir dos combates contra chefes.

### 4.5.1. Fórmula de ataque normal

O ataque normal utiliza um dado de 20 faces (D20).

`Ataque = D20 + Força`

Em seguida, a defesa do inimigo é subtraída:

`Dano = Ataque - Defesa do inimigo`

Caso o resultado seja inferior a 1, o dano será igual a 1.

Os inimigos também possuem uma chance de esquivar dos ataques normais do jogador.

### 4.5.2. Ataques especiais

Cada classe utiliza um atributo diferente para calcular sua habilidade:

| Classe | Fórmula |
|---|---|
| Guerreiro | D20 + Força + 5 |
| Mago | D20 + Inteligência |
| Arqueiro | D20 + Agilidade |
| Ladrão | D20 + Agilidade + 5 |

Depois do cálculo do ataque, a defesa do inimigo é subtraída.

O dano mínimo também é de 1 ponto.

A quantidade de usos é diferente para cada classe:

| Classe | Usos por combate |
|---|---:|
| Guerreiro | 1 |
| Mago | 2 |
| Arqueiro | 1 |
| Ladrão | 1 |

Os usos são reiniciados quando um novo combate começa.

### 4.5.3. Ataques críticos

Quando o resultado original do D20 é 20, o personagem realiza um ataque crítico.

O dano causado é dobrado.

Os ataques críticos também podem acontecer durante a utilização das habilidades especiais.

### 4.5.4. Esquiva

A esquiva é calculada utilizando a agilidade do personagem.

A chance de esquiva é:

`Chance de esquiva = Agilidade (%)`

Existem bônus específicos:

- Arqueiro: +10 pontos de agilidade.
- Ladrão: +15 pontos de agilidade.

Se o sorteio aleatório ficar abaixo da agilidade utilizada no cálculo, o personagem consegue esquivar do ataque.

Os inimigos também podem esquivar dos ataques normais do jogador. A chance é calculada utilizando duas vezes sua agilidade:

`Chance de esquiva do inimigo = Agilidade × 2 (%)`

### 4.5.5. Defesa e contra-ataque

Quando o jogador escolhe defender, o dano do próximo ataque recebido é reduzido pela metade.

A fórmula utilizada é:

`Dano recebido = (D20 + Força do inimigo - Defesa do jogador) / 2`

Caso o resultado seja inferior a 1, o dano mínimo será 1.

Além da redução de dano, existe uma chance de 50% de realizar um contra-ataque quando o inimigo ataca enquanto o jogador está defendendo.

O contra-ataque utiliza um dado de dez faces (D10):

`Dano do contra-ataque = D10 + Força do jogador - Defesa do inimigo`

Caso o resultado seja inferior a 1, o dano mínimo será 1.

Se o contra-ataque derrotar o inimigo, o jogador não recebe o dano daquele ataque.

## 4.6. Sistema de experiência e evolução

O personagem recebe experiência ao derrotar monstros, chefes e completar missões.

A quantidade de XP necessária para subir de nível é calculada pela fórmula:

`XP necessário = Nível atual × 100`

Ao subir de nível:

- O nível do personagem aumenta em 1.
- A vida máxima aumenta em 5 pontos.
- São realizados três sorteios aleatórios de melhorias.
- Os atributos aumentados dependem da classe escolhida.
- A vida é completamente recuperada.

### 4.6.1. Melhorias por classe

| Classe | Possíveis melhorias |
|---|---|
| Guerreiro | Força +2, vida máxima +10 ou defesa +1. |
| Mago | Inteligência +2, vida máxima +5 ou força +1. |
| Arqueiro | Agilidade +2, força +1 ou vida máxima +5. |
| Ladrão | Agilidade +2, força +1 ou defesa +1. |

Cada uma das três melhorias é sorteada independentemente.

### 4.6.2. Bônus após combates

Ao derrotar um inimigo, além da experiência recebida, o personagem ganha um bônus aleatório.

Um dos cinco atributos é escolhido:

- Força.
- Defesa.
- Agilidade.
- Inteligência.
- Vida máxima.

O atributo sorteado recebe um aumento aleatório de 1 ou 2 pontos.

Esse bônus também é concedido após derrotar chefes.

## 4.7. Missões especiais

Durante a exploração, o jogador pode encontrar um santuário que oferece desafios opcionais.

Existem três tipos de missão:

| Missão | Objetivo | Recompensa |
|---|---|---:|
| Eu aguento! | Vencer um combate sem utilizar a habilidade especial. | 50 XP |
| Profissional! | Derrotar um inimigo em até 3 turnos. | 40 XP |
| Invencível! | Vencer uma batalha sem receber dano. | 70 XP |

As missões podem ser aceitas ou recusadas.

Caso sejam aceitas, ficam ativas até o próximo combate. Ao cumprir o objetivo, o jogador recebe a recompensa em XP. Caso não consiga, a missão é considerada falha.

A missão **Eu aguento!** considera a utilização da habilidade especial independentemente da quantidade de usos disponíveis para a classe. Portanto, mesmo que o Mago tenha dois usos, utilizar apenas um já faz a missão falhar.

## 4.8. Condições de vitória e derrota

**Vitória:**

Para concluir a aventura, o jogador precisa atravessar os três andares, derrotar os respectivos chefes e alcançar o Núcleo com vida acima de zero.

**Derrota:**

O jogador perde quando sua vida chega a zero durante a exploração ou um combate.

---

# 5. Como compilar e executar

## 5.1. Pré-requisitos

Para compilar e executar o jogo, é necessário:

- GCC (GNU Compiler Collection).
- Terminal ou prompt de comando.
- Sistema operacional Linux, Windows ou macOS.

O código utiliza bibliotecas padrão da linguagem C, como `stdio.h`, `stdlib.h`, `string.h`, `time.h` e `math.h`.

## 5.2. Linux

1. Instale o GCC:

```bash
sudo apt update
sudo apt install build-essential
```

2. Acesse a pasta onde está o arquivo `main.c`.

3. Compile:

```bash
gcc -std=c99 -Wall -Wextra -o fabrica main.c
```

4. Execute:

```bash
./fabrica
```

## 5.3. Windows

É necessário instalar o GCC, por exemplo, através do MinGW-w64.

1. Abra o terminal na pasta do projeto.
2. Compile:

```bash
gcc -std=c99 -Wall -Wextra -o fabrica.exe main.c
```

3. Execute:

```bash
.\fabrica.exe
```

## 5.4. macOS

1. Instale as ferramentas de desenvolvimento:

```bash
xcode-select --install
```

2. Acesse a pasta do projeto.
3. Compile:

```bash
gcc -std=c99 -Wall -Wextra -o fabrica main.c
```

4. Execute:

```bash
./fabrica
```

---

# 6. Estrutura do código

O projeto foi desenvolvido utilizando estruturas (`struct`), enumerações (`enum`), funções, ponteiros, vetores e matrizes.

## 6.1. Estruturas (struct)

**Personagem**

Armazena os dados do jogador:

- Nome e classe.
- Vida atual e vida máxima.
- Força, defesa, agilidade e inteligência.
- Experiência e nível.

**Inimigo**

Armazena os dados dos inimigos e chefes:

- Nome.
- Vida atual e vida máxima.
- Força, defesa e agilidade.
- Experiência concedida.

As definições `Monstro` e `Chefe` são apelidos de `Inimigo`, utilizando `typedef`.

**Missao**

Armazena o nome, o tipo da missão e a quantidade de XP concedida como recompensa.

## 6.2. Enumerações (enum)

**ClassePersonagem**

Define as quatro classes disponíveis:

- GUERREIRO
- MAGO
- ARQUEIRO
- LADRAO

**TipoCasa**

Define os acontecimentos das casas do mapa:

- VAZIA
- COMBATE
- TESOURO
- CURA
- ARMADILHA
- MISSAO
- CHEFE

## 6.3. Vetores e matrizes

O projeto utiliza vetores e matrizes para organizar os dados.

- `personagens[4]`: armazena as quatro classes disponíveis.
- `monstros[3][4]`: armazena os quatro monstros de cada um dos três andares.
- `chefes[3]`: armazena os três chefes.
- `casas[12]`: armazena os tipos de casas do mapa.

## 6.4. Ponteiros

Os ponteiros são utilizados para permitir que determinadas funções acessem e modifiquem diretamente os dados das estruturas.

Por exemplo, funções como `combater()`, `receber_dano()`, `curar_personagem()` e `verificar_nivel()` recebem ponteiros para personagens ou inimigos.

Isso permite modificar atributos como vida, XP e nível sem precisar retornar uma estrutura inteira.

## 6.5. Principais funções

| Função | Responsabilidade |
|---|---|
| `historia_inicial()` | Apresenta o enredo do jogo. |
| `historia_andar()` | Apresenta a história e missão de cada andar. |
| `chefe_derrotado()` | Exibe os acontecimentos após derrotar cada chefe. |
| `mostrar_final()` | Apresenta o desfecho da aventura. |
| `carregar_personagens()` | Inicializa as classes e seus atributos. |
| `carregar_monstros()` | Inicializa os monstros de cada andar. |
| `carregar_chefes()` | Inicializa os chefes. |
| `mostrar_personagens()` | Exibe informações dos personagens e monstros. |
| `embaralhar_casas()` | Embaralha as casas intermediárias do mapa. |
| `iniciar()` | Apresenta a seleção de personagens. |
| `jogar_andar()` | Controla a exploração de cada andar. |
| `combater()` | Controla o sistema de batalhas, ataques, defesa, esquiva e contra-ataque. |
| `tesouro()` | Sorteia e aplica as recompensas dos tesouros. |
| `sortear_missao()` | Sorteia uma missão especial. |
| `verificar_missao()` | Verifica se o desafio foi cumprido. |
| `receber_dano()` | Diminui a vida do personagem. |
| `curar_personagem()` | Recupera a vida respeitando o limite máximo. |
| `ganhar_xp()` | Adiciona experiência ao personagem. |
| `bonus_aleatorio()` | Sorteia um atributo para receber um aumento. |
| `rand_numero()` | Gera um número aleatório entre 1 e 2. |
| `verificar_nivel()` | Verifica e executa a evolução de nível. |
| `main()` | Controla o menu principal e o fluxo geral do jogo. |

---

# 7. Imagens dos personagens e monstros

Atualmente, o jogo apresenta os personagens, monstros e chefes por meio de informações textuais no terminal.

Caso sejam adicionadas imagens, elas poderão ser organizadas nesta seção.

---

# 8. Vídeo de demonstração

O vídeo de demonstração apresenta o funcionamento do jogo, incluindo a seleção de personagens, movimentação pelos andares, encontros com monstros, combates, utilização de habilidades especiais, missões e enfrentamento dos chefes.

**Link do vídeo:** [INSERIR LINK DO VÍDEO AQUI]

---

# 9. Considerações finais

O projeto A Restauração da Fábrica dos Exilados foi desenvolvido como atividade acadêmica do curso de Sistemas de Informação da Universidade Federal do Rio Grande do Norte (UFRN).

O objetivo do desenvolvimento foi aplicar os conhecimentos de programação em linguagem C, utilizando estruturas, enumerações, funções, ponteiros, vetores, matrizes, estruturas condicionais e estruturas de repetição.

O projeto também busca demonstrar a aplicação desses conceitos na construção de um RPG com narrativa própria, exploração, combates, evolução de personagens, desafios e elementos aleatórios.
