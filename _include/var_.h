
//sta³a PI
#define PI 3.1415926535897932	

int i, j; //zmienne pomocnicze

float ry; // obrót kamery do oko³a 
float ry2; // obrót koparki do oko³a 
float transx,transy; //pozycja na mapie X i Z
float transx2,transy2; //pozycja na mapie X i Z
float Ygrek; // wysokoœæ npm :)
float wart,kat; // k¹t obrotu kamery
float wart2,kat2; // k¹t obrotu koparki
float tmpx, tmpy; // zmienne pomocnicze do obliczania wektora przesuniêcia
float tmpx2, tmpy2; // zmienne pomocnicze do obliczania wektora przesuniêcia
float szybkosc_chodu; // szybkoœæ poruszania siê
float szybkosc_chodu2;
float xxx;

bool fog;

float rr,tt,ff,dd;

TextureImage textureT;

GLuint textures[14]; // tekstury
