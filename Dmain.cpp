#include <iostream>
#include <stdlib.h>
#include "DirectedGraph.hpp"

using namespace std;

int options(){

	cout<<"\n[1] Add an edge\n";
	cout<<"[2] Remove an edge\n";
	cout<<"[3] Check an edge\n";
	cout<<"[4] In Degree of a vertex\n";
	cout<<"[5] Out Degree of a vertex\n";
	cout<<"[6] No. of vertices\n";
	cout<<"[7] No. of edges\n";
	cout<<"[8] DFS\n";
	cout<<"[9] BFS\n";
	cout<<"[0] Exit\n";

	int choice;
	cout<<"Enter choice : ";
	cin>>choice;

	return choice;
}

void print(int& i){
	cout<<i<<endl;
}

int main(){

	int nVertices;
	char mode;
	int src, dest;


	cout<<"Enter no. of vertices : ";
	cin>>nVertices;
	
	cout<<"Enter mode of implementation(m: Adjacency matrix | l: Adjacency list) : ";
	cin>>mode;

	DirectedGraph graph(nVertices, mode);

	while(1){
		switch(options()){

			case 1 :	cout<<"Enter source : ";
						cin>>src;
						cout<<"Enter destination : ";
						cin>>dest;

						try{
							graph.add(src, dest);
						}
						catch(const char* err){
							cout<<err<<endl;
						}
						break;

			case 2 :	cout<<"Enter source : ";
						cin>>src;
						cout<<"Enter destination : ";
						cin>>dest;

						try{
							graph.remove(src, dest);
						}
						catch(const char* err){
							cout<<err<<endl;
						}
						break;

			case 3 :	cout<<"Enter source : ";
						cin>>src;
						cout<<"Enter destination : ";
						cin>>dest;

						try{
							if(graph.edgeExists(src, dest))
								cout<<"Edge exists.";
							else
								cout<<"Edge does not exists.";
						}
						catch(const char* err){
							cout<<err<<endl;
						}
						break;

			case 4 :	cout<<"Enter vertex : ";
						cin>>src;

						try{
							cout<<"In Degree["<<src<<"] : "<<graph.indegree(src);
						}
						catch(const char* err){
							cout<<err<<endl;
						}
						break;

			case 5 :	cout<<"Enter vertex : ";
						cin>>src;

						try{
							cout<<"Out Degree["<<src<<"] : "<<graph.outdegree(src);
						}
						catch(const char* err){
							cout<<err<<endl;
						}
						break;

			case 6 :	cout<<graph.vertices();
						break;

			case 7 :	cout<<graph.edges();
						break;

			case 8 :	graph.dfs(print);
						break;

			case 9 :	graph.bfs(print);
						break;

			case 0 :	exit(EXIT_SUCCESS);

			default :	cout<<"Invalid Choice.";

		}
	}

	return 0;
}