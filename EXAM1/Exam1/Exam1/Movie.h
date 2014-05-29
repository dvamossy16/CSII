#ifndef MOVIE_H_INCLUDED_
#define MOVIE_H_INCLUDED_

#include <string>
using namespace std;

class Movie {
	private:
		string Title, Genre;
		int ShowTime;
	public:
		Movie();
		Movie(string Title, string Genre, int ShowTime);
		string GetTitle();
		string GetGenre();
		int GetShowTime();
};

#endif
