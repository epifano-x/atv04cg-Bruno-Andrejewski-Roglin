#include <Math.h>                   //conjunto de funções para operações matemáticas
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
// variaveis para a transformçao e uso com keyborads
static float tamanho = 1; // tamanho defenido incialemnte para multiplicar 2x
static float rotacao = 0; // defenmido inicialmente 35 graus
static float moverx = -3; //posiçao inicial x
static float movery = -3; //posiçao inicial y
//Função que adiciona linhas para montar um plano cartesiano

void fundo(){
    glColor3f(0,0.8,0);
    glBegin(GL_QUADS);            //lBegin e glEnd delimitam os vértices que definem uma primitiva ou um grupo de primitivas semelhantes (definida como parâmetro).
        glVertex2f(-40, 40);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(-40, -40);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(40, -40);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(40, 40);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
    glEnd();
}

void rua(){
    glColor3f(0.0, 0.0, 0.0);  //adiciona cor ao nosso quadrado
    glBegin(GL_QUADS);            //lBegin e glEnd delimitam os vértices que definem uma primitiva ou um grupo de primitivas semelhantes (definida como parâmetro).
        glVertex2f(-40, 25);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(-40, 5);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(30, 5);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(30, 25);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
    glEnd();
    glBegin(GL_QUADS);            //lBegin e glEnd delimitam os vértices que definem uma primitiva ou um grupo de primitivas semelhantes (definida como parâmetro).
        glVertex2f(10, -40);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(10, 25);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(30, 25);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(30, -40);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
    glEnd();
}


void faixas(){
    glColor3f(1.0, 1.0, 0.0);  //adiciona cor ao nosso quadrado
    glBegin(GL_QUADS);            //lBegin e glEnd delimitam os vértices que definem uma primitiva ou um grupo de primitivas semelhantes (definida como parâmetro).
        glVertex2f(-40, 15.5);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(-40, 14.5);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(-35, 14.5);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(-35, 15.5);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
    glEnd();
    glBegin(GL_QUADS);            //lBegin e glEnd delimitam os vértices que definem uma primitiva ou um grupo de primitivas semelhantes (definida como parâmetro).
        glVertex2f(-33, 15.5);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(-33, 14.5);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(-28, 14.5);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(-28, 15.5);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
    glEnd();
    glBegin(GL_QUADS);            //lBegin e glEnd delimitam os vértices que definem uma primitiva ou um grupo de primitivas semelhantes (definida como parâmetro).
        glVertex2f(-26, 15.5);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(-26, 14.5);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(-21, 14.5);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(-21, 15.5);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
    glEnd();
    glBegin(GL_QUADS);            //lBegin e glEnd delimitam os vértices que definem uma primitiva ou um grupo de primitivas semelhantes (definida como parâmetro).
        glVertex2f(-19, 15.5);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(-19, 14.5);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(-14, 14.5);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(-14, 15.5);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
    glEnd();
    glBegin(GL_QUADS);            //lBegin e glEnd delimitam os vértices que definem uma primitiva ou um grupo de primitivas semelhantes (definida como parâmetro).
        glVertex2f(-12, 15.5);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(-12, 14.5);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(-7, 14.5);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(-7, 15.5);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
    glEnd();
    glBegin(GL_QUADS);            //lBegin e glEnd delimitam os vértices que definem uma primitiva ou um grupo de primitivas semelhantes (definida como parâmetro).
        glVertex2f(-5, 15.5);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(-5, 14.5);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(0, 14.5);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(0, 15.5);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
    glEnd();
    glBegin(GL_QUADS);            //lBegin e glEnd delimitam os vértices que definem uma primitiva ou um grupo de primitivas semelhantes (definida como parâmetro).
        glVertex2f(2, 15.5);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(2, 14.5);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(7, 14.5);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(7, 15.5);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
    glEnd();
    glBegin(GL_QUADS);            //lBegin e glEnd delimitam os vértices que definem uma primitiva ou um grupo de primitivas semelhantes (definida como parâmetro).
        glVertex2f(9, 15.5);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(9, 14.5);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(14, 14.5);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(14, 15.5);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
    glEnd();
    glBegin(GL_QUADS);            //lBegin e glEnd delimitam os vértices que definem uma primitiva ou um grupo de primitivas semelhantes (definida como parâmetro).
        glVertex2f(16, 15.5);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(16, 14.5);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(20.5, 14.5);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(20.5, 15.5);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
    glEnd();
    glBegin(GL_QUADS);            //lBegin e glEnd delimitam os vértices que definem uma primitiva ou um grupo de primitivas semelhantes (definida como parâmetro).
        glVertex2f(20.5, 15);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(20.5, 10);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(19.5, 10);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(19.5, 15);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
    glEnd();
    glBegin(GL_QUADS);            //lBegin e glEnd delimitam os vértices que definem uma primitiva ou um grupo de primitivas semelhantes (definida como parâmetro).
        glVertex2f(20.5, 8);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(20.5, 3);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(19.5, 3);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(19.5, 8);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
    glEnd();
    glBegin(GL_QUADS);            //lBegin e glEnd delimitam os vértices que definem uma primitiva ou um grupo de primitivas semelhantes (definida como parâmetro).
        glVertex2f(20.5, 1);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(20.5, -4);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(19.5, -4);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(19.5, 1);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
    glEnd();
    glBegin(GL_QUADS);            //lBegin e glEnd delimitam os vértices que definem uma primitiva ou um grupo de primitivas semelhantes (definida como parâmetro).
        glVertex2f(20.5, -6);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(20.5, -11);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(19.5, -11);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(19.5, -6);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
    glEnd();
    glBegin(GL_QUADS);            //lBegin e glEnd delimitam os vértices que definem uma primitiva ou um grupo de primitivas semelhantes (definida como parâmetro).
        glVertex2f(20.5, -13);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(20.5, -18);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(19.5, -18);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(19.5, -13);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
    glEnd();
    glBegin(GL_QUADS);            //lBegin e glEnd delimitam os vértices que definem uma primitiva ou um grupo de primitivas semelhantes (definida como parâmetro).
        glVertex2f(20.5, -20);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(20.5, -25);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(19.5, -25);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(19.5, -20);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
    glEnd();
    glBegin(GL_QUADS);            //lBegin e glEnd delimitam os vértices que definem uma primitiva ou um grupo de primitivas semelhantes (definida como parâmetro).
        glVertex2f(20.5, -27);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(20.5, -32);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(19.5, -32);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(19.5, -27);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
    glEnd();
    glBegin(GL_QUADS);            //lBegin e glEnd delimitam os vértices que definem uma primitiva ou um grupo de primitivas semelhantes (definida como parâmetro).
        glVertex2f(20.5, -34);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(20.5, -39);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(19.5, -39);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(19.5, -34);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
    glEnd();
}


void carro(){
    glColor3f(1.0, 1.0, 1.0);  //adiciona cor ao nosso quadrado
    glBegin(GL_QUADS);            //lBegin e glEnd delimitam os vértices que definem uma primitiva ou um grupo de primitivas semelhantes (definida como parâmetro).
        glVertex2f(-35, 10);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(-35, 15);      //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(-30, 15);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
        glVertex2f(-30, 10);       //adiciona um ponto na coordenada x, y que será usado para fazer nosso quadrado
    glEnd();
}
void DesenhaTexto(void *font, char *string)
{
	// Exibe caractere a caractere
	while(*string)
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15,*string++);
}
void DesenhaTexto2(void *font, char *string)
{
	// Exibe caractere a caractere
	while(*string)
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15,*string++);
}


void transformacao(){
    glColor3f(1, 0.84, 0);   //adiciona cor
    glRotatef(rotacao,0,0,1);     // Gira o objeto 35 graus ao redor do eixo z
    glScalef(tamanho, tamanho, tamanho);      // aumenta a escala em 2x
    glTranslatef(moverx, movery, 0); //move o objeto -5 no x e -1 no y

    glColor3f(0.0, 0.81, 0.0);

    carro();

}



//Função de desenho
void desenhaObjetos(void){
    glClear(GL_COLOR_BUFFER_BIT);  //buffer padrão (limpa a tela toda vez que a função é chamada)
	glMatrixMode(GL_PROJECTION);   //projeção dos pontos definidos no plano cartesiano
    glLoadIdentity();              //carrega a projeção
    gluOrtho2D(-40,40,-40,40);     // define o tamanho do plano cartesiano
	glMatrixMode(GL_MODELVIEW);    // projeção do tipo modelo
    glLoadIdentity();              // carrega a identidade de projeção de modelo



    fundo();
    glPushMatrix();      //insere a matriz de transformação corrente na pilha
        rua();      //chama a função que desenha o quadrado da casa
    glPopMatrix();       //retira a matriz do topo da pilha e torna esta última a matriz de transformação corrente

    glPushMatrix();      //insere a matriz de transformação corrente na pilha
        faixas();      //chama a função que desenha o quadrado da casa
    glPopMatrix();       //retira a matriz do topo da pilha e torna esta última a matriz de transformação corrente


    glPushMatrix();
    transformacao();
    glPopMatrix();


	glPopMatrix();

	glColor3f(1,1,1);
    glRasterPos2f(-30,-23);
	DesenhaTexto(GLUT_BITMAP_9_BY_15,"Use teclas 'w s a d' para mover ");
	glRasterPos2f(-35,-26);
	DesenhaTexto2(GLUT_BITMAP_9_BY_15,"e '1 2' para aumentar e diminuir tamanho");
	glRasterPos2f(-35,-29);
	DesenhaTexto(GLUT_BITMAP_9_BY_15,"Segure o shift ou use letras maiusculas para ir mais rapido ");

	glFlush();

}
static void key(unsigned char key, int x, int y)
{
    switch (key)
    {
        case 27 :
        case 'q':
            exit(0);
            break;

        case '1':
            tamanho=tamanho+0.1;
            break;
        case '2':
            tamanho=tamanho-0.1;
            break;
        case 'a':
            moverx=moverx-0.3;
            break;
        case 'd':
            moverx=moverx+0.3;
            break;
        case 'w':
            movery=movery+0.3;
            break;
        case 's':
            movery=movery-0.3;
            break;
        case 'A':
            moverx=moverx-0.9;
            break;
        case 'D':
            moverx=moverx+0.9;
            break;
        case 'W':
            movery=movery+0.9;
            break;
        case 'S':
            movery=movery-0.9;
            break;

    }

    glutPostRedisplay();
}

int main(void){

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);                                                      //somente um buffer | sistema de cores RGB
    glutInitWindowSize(650,650);                                                                      //define o tamanho da janela
    glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-650)/2,(glutGet(GLUT_SCREEN_HEIGHT)-650)/2);   //medidas usadas para posicionar a janela no meio da tela - isso depende da resolução do monitor
    glutCreateWindow("Interação com Teclado");                                                         //permite a criação de uma janela
    glutDisplayFunc(desenhaObjetos);                                                                  //função de callback - chama a função desenhaObjetos
    glClearColor(1,1,1,0);
    glutKeyboardFunc(key);                                                                          //informa a cor de fundo da tela (branco)
    glutMainLoop();
                                                                                 //loop infinito - escuta as informações do sistema até encerrar a aplicação
    return 0;                                                                                         //retorna zero
}
