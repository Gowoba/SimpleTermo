#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

  char Palavras[200][6] = {
        "arroz", "meias", "teais", "camin", "tigre", 
        "piano", "flore", "carro", "nuvem", "cesta",
        "festa", "futro", "pasta", "tampa", "gelar", 
        "salvo", "corpo", "escar", "plano", "ruaia",
        "ninho", "fruta", "sabor", "vento", "pouco", 
        "limpo", "carne", "teima", "azula", "pluma",
        "plato", "certo", "moeda", "corda", "morte", 
        "brisa", "ficha", "corte", "senta", "pinto",
        "ferro", "sauna", "torre", "guapo", "bicho", 
        "letra", "somar", "casco", "vigor", "pobre",
        "certa", "ouvir", "prato", "jeito", "camao", 
        "flama", "quase", "fossa", "lindo", "peito",
        "carta", "cobro", "dolar", "plano", "swing", 
        "quero", "beijo", "janta", "campo", "jogar",
        "dente", "estou", "censo", "grato", "sorte", 
        "tacho", "vasta", "lunar", "carro", "lanca",
        "penta", "pinta", "novas", "manga", "salta", 
        "globo", "horas", "relva", "rapaz", "telha",
        "morae", "tocar", "divas", "gente", "calor", 
        "rubro", "tinta", "elevo", "muito", "abrir",
        "criar", "pecas", "braco", "morte", "fuso", 
        "saira", "relva", "cheio", "todos", "pregar",
        "peloa", "banco", "garra", "motar", "troco", 
        "reina", "termo", "tinta", "frito", "legal",
        "carro", "melao", "tango", "pinca", "pegar", 
        "craca", "limao", "trino", "coisa", "notar",
        "ficha", "risco", "crase", "simao", "telao", 
        "cegado", "torna", "ficha", "fruta", "picar",
        "brabo", "bande", "folha", "quero", "carta", 
        "samba", "valor", "forca", "perna", "penta",
        "volta", "sorna", "bicho", "magia", "canto", 
        "torna", "ronda", "penta", "pinta", "coral",
        "banco", "camin", "sorte", "touro", "delas", 
        "feira", "luzia", "valor", "penta", "festa",
        "criar", "sorte", "conta", "tempo", "salto", 
        "plant", "certo", "ferro", "breve", "fazer",
        "santo", "carta", "pegar", "bande", "funda", 
        "quente", "carta", "rinho", "manto", "trino",
        "quase", "gerar", "estar", "maior", "mundo", 
        "racer", "saber", "gordo", "divas", "flore",
        "viver", "pedra", "salar", "vento", "reuni", 
        "tarde", "trava", "vazio", "escar", "criar",
        "naura", "tinta", "torta", "ponto", "penta", 
        "falar", "golpe", "guapo", "trova", "feira",
        "unido", "mover", "plano", "censo", "troco", 
        "talco", "fossa", "folga", "ducha", "fraco",
        "aviao", "sanda", "torna", "saiua", "muda", 
        "brisa", "censo", "beira", "pacto", "risco",
        "trama", "peito", "quero", "penca", "pinta", 
        "nossa", "carne", "torna", "salto", "carta"
    };

int SorteiaPalavra();

int main(){

    char Secreta[6];
    char Chute[6];
    int count = 0;

    strcpy(Secreta, Palavras[SorteiaPalavra()]);
    
    printf("Acerte a palavra de 5 letras!\n");
    printf("! = Letra certa na posicao certa.\n");
    printf("? = Letra certa na posicao errada.\n");
    printf("x = Nao ha esta letra na palavra.\n");
    printf("\n");
    
    while(count < 6){

        fgets(Chute, sizeof(Chute), stdin);
        fflush(stdin);
    
        for(int i = 0; i<5; i++){
            if(Chute[i] == Secreta[i]){
                printf("!");
            }
            else if(Chute[i] == Secreta[0] || Chute[i] == Secreta[1] || Chute[i] == Secreta[2] || Chute[i] == Secreta[3] || Chute[i] == Secreta[4] ){
                printf("?");
            }
            else
                printf("x");
        }

        printf("\n"); 
        if(strcmp(Chute, Secreta) == 0){
            printf("Voce ganhou!");
            return 0;
        } 
        count++;
    }

    printf("Você perdeu.");
    printf("\n");
    return 0;
}

int SorteiaPalavra(){
    srand(time(NULL));
    int palavraAleatoria = rand() % 2;
    return palavraAleatoria;
}