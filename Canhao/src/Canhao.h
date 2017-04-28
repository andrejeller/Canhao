#pragma once

#include "ofMain.h"

class Canhao {
public:	
	ofImage img;

	ofVec2f m_posicao, m_Ancora;
	float m_angulo, m_tamanho;
	
	Canhao(float x, float y, float r);
	
	void SetImage(string nome);
	void Update(ofVec2f pivo);
	void Draw();
};
