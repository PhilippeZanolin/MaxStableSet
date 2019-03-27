#pragma once

#include <iostream>
#include <vector>

using namespace std;

class Graph
{
private:
	vector<Vertex> _vertexs;
public:
	Graph();
	~Graph();

	void Lol()
	{
	}
};




struct Vertex
{
	int id;
	vector<Vertex> neighbours;
};