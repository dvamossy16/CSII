#include "Theater.h"

Theater::Theater(string Name, string Phone) {
	this->Name = Name;
	this->Phone = Phone;
	this->StoredMovies = 0;
}

void Theater::AddMovie(Movie& Movie) {
	if (StoredMovies == Theater::NMAXMOVIES)
		return;
	Movies[StoredMovies++] = Movie;
}

string Theater::GetMovieForHour(int hour) {
	if (hour < 0 || hour > 24)
		return "";
	for (int i = 0; i < StoredMovies; i++) {
		if (Movies[i].GetShowTime() >= hour)
			return Movies[i].GetTitle();
	}
	return "";
}

int Theater::GetShowTimeForGenre(string Genre) {
	for (int i = 0; i < StoredMovies; i++) {
			if (Movies[i].GetGenre() == Genre)
				return Movies[i].GetShowTime();
		}
		return -1;
}

int Theater::GetPopcornPrice() {
	return 5;
}

int Theater::GetCokePrice() {
	return 10;
}


