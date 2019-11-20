#pragma once

class Drawable;
#include <vector>
using namespace std;

class Renderer
{
	static Renderer* m_pRenderer;
	int m_windowWidth = 0, m_windowHeight = 0;

	vector <Drawable*> m_objects2D= vector<Drawable*>();

	void set2DMatrix();
public:
	Renderer();
	~Renderer();

	void initialize(int argc, char** argv);
	vector<Drawable> getVector();
	static Renderer* get(); //this method returns the only instance to the renderer. Needs to be called after the constructor
	vector<Drawable*>getObjects(string name);
	void drawScene();
	void addObject(Drawable* pObj);
	void clearAll();
	void reshapeWindow(int x, int y);

	static void __drawScene();
	static void __reshapeWindow(int x, int y);
};

