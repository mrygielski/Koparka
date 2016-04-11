
void Poly(float x1, float y1, float z1, float x2, float y2, float z2,
              float x3, float y3, float z3, float x4, float y4, float z4, int texture, float przes)
//funkcja rysuje prostok¹t (poly) xyz wype³niony tekstur¹
{
    glBindTexture(GL_TEXTURE_2D, texture);
    glBegin(GL_TRIANGLE_STRIP);
	    glTexCoord2f(1,przes+0);glVertex3f(x1,y1,z1);
	    glTexCoord2f(1,przes+1);glVertex3f(x2,y2,z2);
	    glTexCoord2f(0,przes+0);glVertex3f(x3,y3,z3);
	    glTexCoord2f(0,przes+1);glVertex3f(x4,y4,z4);
    glEnd();
}

void Drzewko(float X, float Z)
{
	Poly(X,14,3+Z,X,-3,3+Z,
	 X,10,-3+Z, X,-3,-3+Z,   textureT.texID,0);
	Poly(3+X,14,Z,3+X,-3,Z,
	 -3+X,10,Z, -3+X,-3,Z,   textureT.texID,0);
}

void TRAWA(float x, float y, float z, int typ)
{
    Poly(x+3,y,z, x+3,y,z+3, x,y,z, x,y,z+3, textures[typ], 0);
}