
//sta�a PI
#define PI 3.1415926535897932	

int i, j; //zmienne pomocnicze

float ry; // obr�t kamery do oko�a 
float ry2; // obr�t koparki do oko�a 
float transx,transy; //pozycja na mapie X i Z
float transx2,transy2; //pozycja na mapie X i Z
float Ygrek; // wysoko�� npm :)
float wart,kat; // k�t obrotu kamery
float wart2,kat2; // k�t obrotu koparki
float tmpx, tmpy; // zmienne pomocnicze do obliczania wektora przesuni�cia
float tmpx2, tmpy2; // zmienne pomocnicze do obliczania wektora przesuni�cia
float szybkosc_chodu; // szybko�� poruszania si�
float szybkosc_chodu2;
float xxx;

bool fog;

float rr,tt,ff,dd;

TextureImage textureT;

GLuint textures[14]; // tekstury
