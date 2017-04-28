#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	canhao->SetImage("canhao.png");
	vento.set(0.1f, 1);
}

//--------------------------------------------------------------
void ofApp::update() {
	for (int i = 0; i < balas.size(); i++)
		balas.at(i).update(vento);
}

//--------------------------------------------------------------
void ofApp::draw() {

	canhao->Draw();

	for (int i = 0; i < balas.size(); i++) {
		balas.at(i).draw();
	}

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
	//Space
	if (key == 32)
		balas.push_back(Bala(canhao->m_posicao));

	if (key == 357)
		vento.set(vento.x, vento.y - 0.2f);
	if (key == 359)
		vento.set(vento.x, vento.y + 0.2f);
	if (key == 356)
		vento.set(vento.x - 0.2f, vento.y);
	if (key == 358)
		vento.set(vento.x + 0.2f, vento.y);
	//std::cout << key;
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
