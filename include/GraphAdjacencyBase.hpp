/*  Author : Indresh Kumar Gupta
    Purpose : Abstract class for implementation of graph using adjacency matrix and adjacency list
    Version : 1.0

*/
#ifndef GRAPH_ADJACENCY_BAG
#define GRAPH_ADJACENCY_BAG 1

#include "seqLinearList.hpp"
#include "list.hpp"

using namespace cs202;
/*
/*
 * A base class which can denote any Graph Adjacency representation.
 * Subclasse by AdjacencyMatrix and AdjacencyList
 * Use this class in your graphs to be able to select any representation as desired by the user.
 */
class GraphAdjacencyBase {
public:
	/* Destructor:
	 * releases all resources acquired by the class
	 */
  virtual ~GraphAdjacencyBase(){}
	/*
	 * Function: edgeExists
	 * Returns true if an edge exists between vertices i and j, false otherwise.
	 */
  virtual bool edgeExists(int i, int j) = 0;
	/*`
	 * Function: vertices
	 * Returns the number of vertices in the adjacency structure.
	 */
  virtual int vertices() = 0;
	/*
	 * Function: edges
	 * Returns the number of edges in the adjacency structure.
	 */
  virtual int edges() = 0;
	/*
	 * Function add:
	 * Adds an edge between vertices i and j
	 */
  virtual void add(int i, int j) = 0;
	/*
	 * Function: remove
	 * Deleted the edge between vertices i and j
	 */
  virtual void remove(int i, int j) = 0;
	/*
	 * Function: degree
	 * Returns the degree of the vertex i
	 */
  virtual int degree(int i) = 0;
  /*
   * Function: getAdjacent
   * Returns array of adjacent nodes of vertex i
   */ 
  virtual LinearList<LinearList<int> > getAdjacent() = 0;
};
#endif /* ifndef GRAPH_ADJACENCY_BAG */