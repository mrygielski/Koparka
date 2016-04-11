void KOPARKA()
{
	glTranslatef(transy2,0,transx2);

	glPushMatrix();	


	
		glPushMatrix();	 

		//rysowanie mapy

			
	if (xxx>1.0f)										
	{
		xxx-=1.0f;										
	}

	glRotatef(ry2,0,1,0);
	glPushMatrix();
	glTranslatef(-2.9f,-2,-3.25f);	
	glPushMatrix();


		Poly(0,1,0+0.5f, 6,1,0+0.5f, 0,1,1+0.5f, 6,1,1+0.5f, textures[1],xxx); //gorna tasma

		Poly(6,0,0+0.5f, 0,0,0+0.5f, 6,0,1+0.5f, 0,0,1+0.5f, textures[1],xxx); //dolna tasma


		// BOKI
		Poly(-0.2f,0.5f,1+0.5f, 0,1,1+0.5f, 
			 -0.2f,0.5f,0+0.5f, 0,1,0+0.5f, textures[0],xxx*3);
		
		Poly(0,0,1+0.5f, -0.2f,0.5f,1+0.5f, 
			 0,0,0+0.5f, -0.2f,0.5f,0+0.5f, textures[0],xxx*3);


		Poly(6,1,0+0.5f, 6.2f,0.5f,0+0.5f, 
			 6,1,1+0.5f, 6.2f,0.5f,1+0.5f, textures[0],xxx*3); 
		
		Poly(6.2f,0.5f,0+0.5f, 6,0,0+0.5f, 
			 6.2f,0.5f,1+0.5f, 6,0,1+0.5f, textures[0],xxx*3); 
		///


		
		Poly(0,1,0+5, 6,1,0+5, 0,1,1+5, 6,1,1+5, textures[1],xxx); //gorna tasma

		Poly(6,0,0+5, 0,0,0+5, 6,0,1+5, 0,0,1+5, textures[1],xxx); //dolna tasma/

		// BOKI
		Poly(-0.2f,0.5f,1+5, 0,1,1+5, 
			 -0.2f,0.5f,5, 0,1,5, textures[0],xxx*3);
		
		Poly(0,0,1+5, -0.2f,0.5f,1+5, 
			 0,0,5, -0.2f,0.5f,5, textures[0],xxx*3);


		Poly(6,1,5, 6.2f,0.5f,5, 
			 6,1,1+5, 6.2f,0.5f,1+5, textures[0],xxx*3); 
		
		Poly(6.2f,0.5f,5, 6,0,5, 
			 6.2f,0.5f,1+5, 6,0,1+5, textures[0],xxx*3); 

    	///
		
		Poly(6,1,1.5f, 0,1,1.5f, 
			 6,1,5, 0,1,5, textures[5],0); //dol dwa

		Poly(6,1,5, 6,0.2f,5, 
			 0,1,5, 0,0.2f,5, textures[5],0); //bok

		Poly(6,1,1.5, 6,0.2f,1.5, 
			 0,1,1.5, 0,0.2f,1.5, textures[5],0); //bok


		Poly(0,1,5, 0,0.2f,5, 
			 0,1,1.5f, 0,0.2f,1.5f, textures[5],0); //przod

		Poly(6,1,5, 6,0.2f,5, 
			 6,1,1.5f, 6,0.2f,1.5, textures[5],0); //tyl



	
	
	glPopMatrix();	
	glPopMatrix();	

	

	glPushMatrix();               
	glRotatef(rr,0,1,0);

	glPushMatrix();
		glRotatef(tt,0,0,1);

	glTranslatef(-2.9f,-2.5f,-3.25f);	
		glPushMatrix();




		Poly(2.5f,7,1.5f+0.45f, 3.1f,2,1.5f+0.25f, 
			 2.5f,7,1.5f+0.95f, 3.1f,2,1.5f+1.15f, textures[5],0); //bok

		Poly(2,7,1.5f+0.45f, 2,2,1.5f+0.25f, 
			 2,7,1.5f+0.95f, 2,2,1.5f+1.15f, textures[5],0); //bok

		Poly(2,7,1.5f+0.45f, 2,2,1.5f+0.25f, 
			 2.5f,7,1.5f+0.45f, 3.1f,2,1.5f+0.25f, textures[5],0); //bok
		
		Poly(2,7,1.5f+0.95f, 2,2,1.5f+1.15f, 
			 2.5f,7,1.5f+0.95f, 3.1f,2,1.5f+1.15f, textures[7],0); //bok

		

		
		glPopMatrix();









	glPopMatrix();	
	glPopMatrix();	





	


	
	glPushMatrix(); ///////////drugie ramie
	glRotatef(rr,0,1,0);
	glRotatef(tt,0,0,1);

	glTranslatef(-0.4f,4.5f,0);


	glPushMatrix();
		glRotatef(ff,0,0,1);

	glTranslatef(-2.5f,-2,-3.25f);	
		glPushMatrix();




		Poly(2.5f,6,1.5f+0.45f, 2.5f,2,1.5f+0.45f, 
			 2.5f,6,1.5f+0.95f, 2.5f,2,1.5f+0.95f, textures[5],0); //bok

		Poly(2.4f,6,1.5f+0.45f, 2,2,1.5f+0.45f, 
			 2.4f,6,1.5f+0.95f, 2,2,1.5f+0.95f, textures[5],0); //bok

		Poly(2.4f,6,1.5f+0.45f, 2,2,1.5f+0.45f, 
			 2.5f,6,1.5f+0.45f, 2.5f,2,1.5f+0.45f, textures[5],0); //bok
		
		Poly(2.4f,6,1.5f+0.95f, 2,2,1.5f+0.95f, 
			 2.5f,6,1.5f+0.95f, 2.5f,2,1.5f+0.95f, textures[5],0); //bok





		
		glTranslatef(2.45f,6.05f,0);
		glPushMatrix();

		glRotatef(dd,0,0,1);		
		glTranslatef(-2.5f,-6.05f,0);
		
		Poly(1.4f,7.4f,1.5f+1.25f, 2,6,1.5f+1.25f, 
			 2.7f,7.1f,1.5f+1.25f, 2.55f,6,1.5f+1.25f, textures[6],0); //bok

		Poly(1.4f,7.4f,1.5f+0.15f, 2,6,1.5f+0.15f, 
			 2.7f,7.1f,1.5f+0.15f, 2.55f,6,1.5f+0.15f, textures[6],0); //bok

		Poly(1.4f,7.4f,1.5f+0.15f, 2.7f,7.1f,1.5f+0.15f,
			 1.4f,7.4f,1.5f+1.25f, 2.7f,7.1f,1.5f+1.25f,  textures[6],0); //bok

		
		Poly(2.55f,6,1.5f+0.15f, 2.7f,7.1f,1.5f+0.15f,
			 2.55f,6,1.5f+1.25f, 2.7f,7.1f,1.5f+1.25f,  textures[6],0); //bok



		Poly(2,6,1.5f+1.25f, 2,6,1.5f+0.15f,
			 2.55f,6,1.5f+1.25f, 2.55f,6,1.5f+0.15f,  textures[6],0); //bok
		
		glPopMatrix();
		






	glPopMatrix();	
	glPopMatrix();	
	

	glPopMatrix();
	
	




	
	
	glRotatef(rr,0,1,0);


	glTranslatef(-2.9f,-2,-3.25f);	
	


//////////////////////////////

		Poly(5.5f,4.5f,1.5f+1.5f, 5.5f,2.6f,1.5+1.5f, 
			 1.7f,4.5f,1.5f+1.5f, 1,2.6f,1.5f+1.5f, textures[8],0); //bok
		
		Poly(5.5f,4.5f,5, 5.5f,2.6f,5, 
			 1.7f,4.5f,5, 1,2.6f,5, textures[8],0); //bok
		
		Poly(5.5f,4.5f,1.5f+1.5f, 5.5f,1.1f,1.5+1.5f, 
			 5.5f,4.5f,5, 5.5f,1.1f,5, textures[12],0); //tyl

		Poly(5.5f,2.6f,1.5f+1.5f, 5.5f,1.1f,1.5f+1.5f, 
			 1,2.6f,1.5f+1.5f, 1,1.1f,1.5f+1.5f, textures[9],0); //bok
		
		Poly(5.5f,2.6f,5, 5.5f,1.1f,5, 
			 1,2.6f,5, 1,1.1f,5, textures[9],0); //bok


		Poly(4,2,1.5f+1.2f, 4,1.1f,1.5+1.2f, 
			 1.5f,2,1.5f+1.2f, 1.5f,1.1f,1.5f+1.2f, textures[5],0); //bok

		Poly(4,2,1.5f+0.2f, 4,1.1f,1.5f+0.2f, 
			 1.5f,2,1.5f+0.2f, 1.5f,1.1f,1.5f+0.2f, textures[5],0); //bok

		Poly(4,2,1.5f+0.2f, 4,1.1f,1.5f+0.2f, 
			 4,2,1.5f+1.2f, 4,1.1f,1.5f+1.2f, textures[5],0); //bok

		
		Poly(4,2,1.5f+0.2f, 3.6f,2,1.5f+0.2f, 
			 4,2,1.5f+1.2f, 3.6f,2,1.5f+1.2f, textures[5],0); //bok
		
		
		
		
		


		
		/////ramie


		Poly(1.7f,4.5f,1.5f+1.5f, 1,2.6f,1.5f+1.5f, 
			 1.7f,4.5f,5, 1,2.6f,5, textures[11],0); //przod
		
		Poly(1,2.6f,1.5f+1.5f, 1,1.1f,1.5f+1.5f, 
			 1,2.6f,5, 1,1.1f,5, textures[10],0); //przod


		Poly(5.5f,4.5f,1.5f+1.5f, 1.7f,4.5f,1.5f+1.5f, 
			 5.5f,4.5f,5, 1.7f,4.5f,5, textures[12],0); //gora

		Poly(5.5f,1.1f,1.5f, 0.5f,1.1f,1.5f, 
			 5.5f,1.1f,5, 0.5,1.1f,5, textures[13],0); //dol

		/////

	glPopMatrix();	

	glPopMatrix();


		glPopMatrix();

	
	glPopMatrix();
}