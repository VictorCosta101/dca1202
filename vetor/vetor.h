#ifndef VETOR_H
#define VETOR_H

/**
 * @brief A classe Vetor lida com vetores bidimensionais.
 * @details Ela permite realizar operações entre eles.
 */
class Vetor{
  // variaveis e metodos privados
  // interfaces privadas
private:
  float x, y;
  // interfaces publicas
public:
  // construtor default
  //Vetor();

  // construtor com argumentos
  //Vetor(float _x, float _y);

  // construtor com argumentos e valores
  // iniciais

  /**
   * @brief Vetor eh o construtor da classe
   * @param _x valor inicial da variavel x
   * @param _y valor inicial da variavel y
   */
  Vetor(float _x=0, float _y=0);

  // construtor de copia
  Vetor(Vetor &v);

  // destrutor
  ~Vetor();

  void setX(float _x);
  float getX(void);
  void setY(float _y);
  float getY(void);
  float norma();
  float teta();
  void print(void);
  void negativo(void);
  void negativo(int mode);
  Vetor soma(Vetor v);
  Vetor subtracao(Vetor v);
  Vetor multiplicacao(float a);
  // sobrecarga do operador +
  Vetor operator + (Vetor v);
  Vetor operator - (Vetor v);
  Vetor operator * (float a);
  float operator * (Vetor v);

  // operador de incremento PRE-FIXADO
  // primeiro incrementa para depois
  // atribuir
  Vetor operator++();

  // operador de incremento POS-FIXADO
  // guarda o ultimo valor para ser
  // devolvido e soh entao incrementa
  Vetor operator++(int);

  // declarando uma funcao amiga da
  // classe Vetor
  friend Vetor operator*(float a, Vetor v);

//  Vetor3d produtoVetorial(Vetor v);

  /* erro!!! o codigo nao pode ser declarado fora de um
   * método
  for(int i=0; i<3; i++){
    cout << "alo";
  }
  */
}; // <======= ATENCAO AO ";"

Vetor operator*(float a, Vetor v);





#endif // VETOR_H
