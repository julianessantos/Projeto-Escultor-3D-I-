#include <iostream>
#include"sculptor.hpp"

using namespace std;


  int main() {
    // Dimensões do escultor
  int nx = 50;
  int ny = 55;
  int nz = 50;

  // Criação de um objeto Sculptor
  Sculptor sculptor(nx, ny, nz);

  // Definição de algumas propriedades dos voxels
  float alpha = 1.0; // Opacidade

    //ilha
    //mar:
    sculptor.setColor(0.2, 0.6, 1, alpha);
    sculptor.putBox(0, 49, 0, 1, 0, 49);
    //terra:
    sculptor.setColor(0.13, 0.6, 0.13, alpha);
    sculptor.putEllipsoid(25, 2, 25, 20,15,20);

    //psyduck
    //buchinho:
    sculptor.setColor(1, 0.8, 0, alpha);
    sculptor.putEllipsoid(25, 22, 25, 15,11,13);
    //cabeça:
    sculptor.putSphere(25,36,25,10);
    //cabelo:
    sculptor.setColor(0,0,0,alpha);
    //fio central
    sculptor.putBox(25, 25, 46, 50, 25, 25);
    //fio da esquerda:
    sculptor.putBox(26, 26, 46, 46, 25, 25);
    sculptor.putBox(27, 27, 47, 48, 25, 25); 
    sculptor.putBox(28, 28, 49, 49, 25, 25);
    //fio da direita:
    sculptor.putBox(24, 24, 46, 46, 25, 25);
    sculptor.putBox(23, 23, 47, 48, 25, 25);
    sculptor.putBox(22, 22, 49, 49, 25, 25);
    //bico:
    sculptor.setColor(0.9, 0.9, 0.5, alpha);
    sculptor.putEllipsoid(25,36,32,8,2,12);
    //pontos do bico:
    sculptor.setColor(0, 0, 0, alpha);
    sculptor.putVoxel(22, 37, 38);
    sculptor.putVoxel(28, 37, 38);
    //olho:
    sculptor.setColor(0.9, 0.9, 0.9, alpha);
    sculptor.putSphere(28, 41, 32, 3);//direito
    sculptor.putSphere(22, 41, 32, 3);//esquerdo
    //biloca do olho:
    sculptor.setColor(0, 0, 0, alpha);
    sculptor.putVoxel(28, 41, 35);//direito
    sculptor.putVoxel(22, 41, 35);//esquerdo
    //pezinho:
    sculptor.setColor(1, 0.8, 0, alpha);
    sculptor.putBox(19, 23, 15, 18, 32, 38);
    sculptor.putBox(27, 31, 15, 18, 32, 38);
    sculptor.setColor(0.9, 0.9, 0.5, alpha);
    sculptor.putEllipsoid(21, 20, 38, 3, 5, 2);//esquerdo
    sculptor.putEllipsoid(29, 20, 38, 3, 5, 2);//direito
    
    
    sculptor.writeOFF("POKEMONTESTE.off");
    cout<<"Desenho em 3D concluido!";
    return 0;
}        
