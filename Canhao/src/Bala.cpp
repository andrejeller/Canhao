#include "Bala.h"

Bala::Bala(ofVec2f posInicial) {
	pos.set(posInicial);
}

void Bala::setup(int x, int y) {
	pos.set(x, y);
}

void Bala::update(ofVec2f vaiPara) {

	pos.set(pos + vaiPara * 1);
}

void Bala::draw() {
	ofSetColor(0, 0, 0);
	ofDrawCircle(pos, 3);
}
