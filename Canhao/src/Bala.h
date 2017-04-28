#pragma once

#include "ofMain.h"
#include <vector>

class Bala {
private:
	ofVec2f pos;
	

public:
	Bala(ofVec2f posInicial);
	void setup(int x, int y);
	void update(ofVec2f vaiPara);
	void draw();

};
