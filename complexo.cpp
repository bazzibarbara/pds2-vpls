#include <iostream>
#include <cmath>
#include <utility>

using namespace std;

// Tipo abastrato de dados que representa uma número complexo. 
class Complexo {
  // Atributos.
  private:
    double real;
    double imag;  

  // Métodos.
  public:
    Complexo (double _real, double _imag) {
      real = _real;
      imag = _imag;
    }
    double modulo() {
      return(sqrt(pow(real, 2) + pow(imag, 2)));
    }
    Complexo conjugado() {
      Complexo c = Complexo(real, (- imag));
      return c;
    }
    Complexo inverso() {
      double inv1 = 0;
      double inv2 = 0;
      inv1 = (real)/(pow(real, 2));
      inv2 = (imag)/(pow(imag, 2));
      Complexo c = Complexo((inv1), (inv2));
      return(c);
    }
    Complexo soma(Complexo y) {
      double soma1 = 0;
      double soma2 = 0;
      soma1 = (real + y.real);
      soma2 = (imag + y.imag);
      Complexo c = Complexo(soma1, soma2);
      return(c);
    }
    Complexo subtrair(Complexo y) {
      double sub1 = 0;
      double sub2 = 0;      
      sub1 = real - y.real;
      sub2 = imag - y.imag;
      Complexo c = Complexo(sub1, sub2);
      return (c);
    }
    Complexo multiplicar(Complexo y) {
      double mult1 = 0;
      double mult2 = 0;     
      double mult3 = 0; 
      double mult4 = 0;
      double soma1 = 0;
      double soma2 = 0;
      mult1 = real * y.real;
      mult2 = (-1) * (imag * y.imag);
      mult3 = (imag *  y.real);
      mult4 = (real * y.imag);
      soma1 = (mult1 + mult2);
      soma2= mult4 + mult3; 
      Complexo c = Complexo(soma1, soma2);
      return(c);
      }
    Complexo dividir(Complexo y) {
      double div1 = 0;
      double div2 = 0;
      div1 = (real*y.real + imag*y.imag)/ (pow(y.imag, 2) + pow(y.real, 2)); 
      div2 = (y.real*imag - real*y.imag)/ (pow(y.imag, 2) + pow(y.real, 2));
      Complexo c = Complexo(div1, div2);
      return(c);     
    }

    double get_real() {
      return real;
    }

    double get_imag() {
      return imag;
    }

    void set_real(double x) {
      real = x;
    }

    void set_imag(double y) {
      imag = y;
    }

    void imprimir() {
      cout << real;
      if(imag > 0) {
        cout << " + " << imag << "i" << endl;
        return;
      }
      else {
        cout << imag << "i" << endl;
      }
    }
};

pair<Complexo, Complexo> raizes(double a, double b, double c) {
  Complexo z(0, 0);
  Complexo w(0, 0);
  double delta = (pow(b, 2) - (4*a*c));
  if(delta >= 0) {
    z.set_real((-b + sqrt(delta)) / 2*a);
    w.set_real((-b - sqrt(delta)) / 2*a);
  }
  if(delta < 0) {
    z.set_real(-b /2*a);
    w.set_real(-b / 2*a);
    z.set_imag(sqrt(-delta) / 2*a);
    w.set_imag(-(sqrt(-delta)) / 2*a);
  }
  return(make_pair(z, w));
}

int main () {
  cout << "Digite os coeficientes da equação f(x) = ax^2 + bx + c:" << endl;
  double a, b, c;
  cin >> a >> b >> c;
  auto r = raizes(a, b, c);
  Complexo z(a, b);
  Complexo w(a, c);
  cout << "(" << r.first.get_real() << ", " << r.first.get_imag() << ") "
       << "(" << r.second.get_real() << ", " << r.second.get_imag() << ")" << endl;
  return 0;
}