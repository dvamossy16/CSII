#include "Movie.h"

Movie::Movie() {
	Title = "V for Vendetta";
	Genre = "Action";
	ShowTime = 5;
}

Movie::Movie(string Title, string Genre, int ShowTime) {
	this->Title = Title;
	this->ShowTime = ShowTime;
	if (this->Genre != "Action" && this->Genre != "Comedy" && this->Genre != "Horror" && this->Genre != "Documentary") {
		this->Genre = "Comedy";
	} else {
		this->Genre = Genre;
	}
}

string Movie::GetTitle() {
	return Title;
}

string Movie::GetGenre() {
	return Genre;
}

int Movie::GetShowTime() {
	return ShowTime;
}
