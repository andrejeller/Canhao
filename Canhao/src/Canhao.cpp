#include "Canhao.h"

Canhao::Canhao(float x, float y, float r) {
	
	m_posicao.set(x, y);
	m_Ancora.set(x, y);
	m_tamanho = r;
}

void Canhao::SetImage(string nome)
{
	img.load(nome);
}

void Canhao::Update(ofVec2f pivo) {	
	//m_Ancora.rotate(m_angulo);
	//m_posicao = m_Ancora;
	//m_posicao += pivo;
}

void Canhao::Draw() {
	ofSetColor(255, 255, 255);
	ofDrawCircle(m_posicao, 10);
	//img.draw(m_posicao.x - m_tamanho / 2, m_posicao.y - m_tamanho / 2, 0, m_tamanho, m_tamanho);
}
