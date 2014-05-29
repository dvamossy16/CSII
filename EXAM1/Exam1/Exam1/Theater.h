#ifndef THEATER_H_INCLUDED_
#define THEATER_H_INCLUDED_

#include <string>
#include "Movie.h"
using namespace std;


class Theater {
	private:
		const static int NMAXMOVIES = 16;
		Movie Movies[NMAXMOVIES];
		int StoredMovies;
		string Name, Phone;
		int PopcornPrice, CokePrice;
	public:
		Theater(string Name, string Phone);
		void AddMovie(Movie& Movie);
		string GetMovieForHour(int hour);
		int GetShowTimeForGenre(string Genre);
		int GetPopcornPrice();
		int GetCokePrice();
};

#endif
