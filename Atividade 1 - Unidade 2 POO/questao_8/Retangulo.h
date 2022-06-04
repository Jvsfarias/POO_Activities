//impede que múltiplas inclusões ocorram
#ifndef RETANGULO_H
#define RETANGULO_H

class Retangulo 
{
public:
  Retangulo( float = 1.0, float = 1.0); 

  void setAltura(int ht);
  void setLargura(int la);
  inline float getAltura(){return altura;}
  inline float getLargura(){return largura;}

  float perimetro();
  float area();


private:
  float altura;  
  float largura;
};

#endif