#include <stdlib.h>

ESTADO *inicializar_estado() {
    ESTADO* estado = (ESTADO*) malloc( sizeof(ESTADO) );
    int linha,coluna;

    for(linha=0;linha<8;linha++)
        for(coluna=0;coluna<8;coluna++)
            estado->tab[linha][coluna] = VAZIO;

    estado->tab[4][4] = BRANCA;
    
    estado->ultima_jogada.linha = estado->ultima_jogada.coluna = 4;
    estado->num_jogadas = 0;
    estado->jogador_atual = 1;

    return estado;
}


int obter_jogador_atual(ESTADO *estado) {
    return estado->jogador_atual;
}

int obter_numero_de_jogadas(ESTADO *estado) {
    return estado->num_jogadas;
}

CASA obter_estado_casa(ESTADO *e, COORDENADA c) {
    return e->tab[c.linha][c.coluna];
}
