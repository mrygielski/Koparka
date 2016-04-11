

//Micha³ 'REGi' Rygielski
//http://regi.gamedev.pl
//mrygielski@o2.pl

//biblioteki systemowe
#include <windows.h>
#include <math.h>	
#include <gl\gl.h>	


//biblioteki programu
#include "_include\tga.h"

#include "_include\api_.h"	
#include "_include\var_.h"	
#include "_include\bmp_.h"
#include "_include\init_.h"
#include "_include\procedure_.h"
#include "_include\koparka_.h"


void DrawGLScene(GLvoid)
//procedura rysuj¹ca scene
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	if (fog) glEnable(GL_FOG); 
	
	glLoadIdentity();


	glRotatef(-ry,0,1,0);
	glTranslatef(transy,Ygrek,transx);


	for (i=0; i<20; i++)
	for (j=0; j<20; j++) TRAWA(((float)j*3)-16,-2.1f,((float)i*3)-16,2); // pod³oga

	Drzewko(20,-12);
	Drzewko(30,-10);
	Drzewko(18,24);
	Drzewko(-10,12);
	Drzewko(-15,27);

		
	KOPARKA();

	if (fog) glDisable(GL_FOG); 
}


int WINAPI WinMain(	HINSTANCE	hInstance,
					HINSTANCE	hPrevInstance,
					LPSTR		lpCmdLine,
					int			nCmdShow)
{
	MSG		msg;
	BOOL	done=FALSE;
	
	//ustawianie okna
	if (CreateGLWindow("KOPARKA 3D",640,480,16,fullscreen)==FALSE) return 0;


	//inicjowanie tekstur i mg³y
	INIT();

	//zerowanie zmiennych
	INITvariables();

	while(!done)
	{if (PeekMessage(&msg,NULL,0,0,PM_REMOVE)){if (msg.message==WM_QUIT){done=TRUE;}else{TranslateMessage(&msg);DispatchMessage(&msg);}}else
	
	{
		DrawGLScene(); //rysowanie sceny
		SwapBuffers(hDC);
		
		ENGINE(); //obs³uga klawiszy i kolizji

		if (keys[VK_ESCAPE])
		{
			done=TRUE;
		}

		if (keys[VK_F1]) rr+=0.5;
		if (keys[VK_F2]) rr-=0.5;
		if (keys[VK_F3]) if (tt<65) tt+=0.5;
		if (keys[VK_F4]) if (tt>0) tt-=0.5;
		if (keys[VK_F5]) if (ff<90) ff+=0.5;
		if (keys[VK_F6]) if (ff>0) ff-=0.5;
		if (keys[VK_F7]) if (dd<70) dd+=0.5;
		if (keys[VK_F8]) if (dd>-10) dd-=0.5;

		if (keys['1']) fog=false;
		if (keys['2']) fog=true;
	
	}}
	

	KillGLWindow();
	return (msg.wParam);
}