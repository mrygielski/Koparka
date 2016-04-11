

int INIT()
{
	//wgrywanie tekstur
	textures[0]=LoadTexture("textures/gasienica2.bmp");
	textures[1]=LoadTexture("textures/gasienica.bmp");
	textures[2]=LoadTexture("textures/trawa.bmp");
//	textures[3]=LoadTexture("textures/drzewo.bmp");
//	textures[4]=LoadTexture("textures/drzewo_mask.bmp");

	textures[5]=LoadTexture("textures/_bok.bmp");
	textures[6]=LoadTexture("textures/_metal.bmp");
	textures[7]=LoadTexture("textures/_bok_napis.bmp");
	textures[8]=LoadTexture("textures/_bok_okno.bmp");
	textures[9]=LoadTexture("textures/_bok_okno2.bmp");
	textures[10]=LoadTexture("textures/_bok_przod.bmp");
	textures[11]=LoadTexture("textures/_bok_przod2.bmp");
	textures[12]=LoadTexture("textures/_bok_tyl.bmp");
	textures[13]=LoadTexture("textures/_bok_dol.bmp");

	LoadTGAFile(&textureT,"textures/drzewo.tga",true);


	GLuint fogMode[]= { GL_EXP, GL_EXP2, GL_LINEAR };	
					
	GLfloat fogColor[4]= {0.8f, 0.8f, 0.8f, 0.0f};	

	glFogi(GL_FOG_MODE, 0);		
	glFogfv(GL_FOG_COLOR, fogColor);
	glFogf(GL_FOG_DENSITY, 0.06f);	
	glHint(GL_FOG_HINT, GL_DONT_CARE);
	glFogf(GL_FOG_START, 1.0f);		
	glFogf(GL_FOG_END, 2.0f);
	
	glClearColor( 1.0, 1.0, 1.0, 1.0); //czyszcznie buforu na dany kolor

	return true;
}

int INITvariables()
{
	//kat obrotu kamery
	wart=90;
	kat=90;

	ry=-90;

	transx=1*3; //po³o¿enie X
	transy=14*1; //po³o¿enie Z
	Ygrek=-2.0;  // wysokoœæ


	wart2=90;
	kat2=90;

	
	transx2=0; //po³o¿enie X
	transy2=0; //po³o¿enie Z


	szybkosc_chodu=10;
	szybkosc_chodu2=60;

	tt=50;
	ff=90;
	dd=70;

	fog=false;

	return true;
}

int ENGINE()
{
	//obórt kamery w lewo i prawo
	if (keys[VK_LEFT]) {wart+=1; ry+=1;}
	if (keys[VK_RIGHT]) {wart-=1; ry-=1;}

	if (keys['A']) {wart2+=0.1f; ry2+=0.1f;	xxx+=0.001f;	}
	if (keys['D']) {wart2-=0.1f; ry2-=0.1f;	xxx-=0.001f;	}

	kat=wart*((float)PI/180); // obliczanie obrotu wartosc*RADIAN=kat

	kat2=wart2*((float)PI/180); // obliczanie obrotu wartosc*RADIAN=kat

	if (keys[VK_DOWN])
	{	
		tmpx=cosf(kat)/szybkosc_chodu;
		tmpy=sinf(kat)/szybkosc_chodu;
		transx+=tmpx;
		transy+=tmpy;
	}

	//poszuszanie kopark¹ do przodu wraz z wykrywaniem kolizji wszystkich œcian
	if (keys[VK_UP])

	{	
		tmpx=cosf(kat)/szybkosc_chodu;
		tmpy=sinf(kat)/szybkosc_chodu;
		transx-=tmpx;
		transy-=tmpy;
	}

	if (keys['S'])
	{	
		xxx-=0.001f;										
		tmpx2=cosf(kat2)/szybkosc_chodu2;
		tmpy2=sinf(kat2)/szybkosc_chodu2;
		transx2+=tmpx2;
		transy2+=tmpy2;
	}

	//poszuszanie kopark¹ do przodu wraz z wykrywaniem kolizji wszystkich œcian
	if (keys['W'])

	{	
		xxx+=0.001f;										

		tmpx2=cosf(kat2)/szybkosc_chodu2;
		tmpy2=sinf(kat2)/szybkosc_chodu2;
		transx2-=tmpx2;
		transy2-=tmpy2;
	}

	return true;
}