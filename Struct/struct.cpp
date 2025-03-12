#include <iostream>
#include <vector>

using namespace std;

// Struct --> custom data type (abstraction)

// Nesting structure
struct Date {
  short year = 2017;
  short month = 1;
  short day = 1;
};

struct Movie {
  string title;
  Date releaseDate;
  bool isPopular;

  // funcion --> method(part of an object)
};

bool operator==(const Movie& first ,const Movie& second) {
  return (
          first.title == second.title &&
          first.releaseDate.year == second.releaseDate.year &&
          first.releaseDate.month == second.releaseDate.month &&
          first.releaseDate.day == second.releaseDate.day
  );
}

ostream& operator<<(ostream& stream, const Movie& movie) {
  // This operator takes a movie ,writes it to stream and then returns the stream
  stream << movie.title;
  return stream;
}

Movie getMovie() {
  return { "John", 2019};
}
// void showMovie (Movie& movie) {
//   cout << movie.title;
// }
void showMovie (Movie* movie) {
  cout << movie->title;
}


int main() {

  auto movie = getMovie();
  showMovie(&movie);

  // Date date { 2019, 6, 4};

  // Movie movie1 { 
  //   "John Wick", 
  // { 2019, 6, 4} 
  // };

  // Movie movie2 { 
  //   "John Wick", 
  //   { 2019, 6, 4} 
  // };

  // if (movie1 == movie2) {
  //   cout << "Equal";
  // }

  // cout << movie1;
}

   
  // Unpacking
  // auo [title, releaseYea] { second };
  // cout << "Title: " << title << endl
  //      << "Release Year: " << releaseYear;


// Nesting structure
// struct Date {
//   short year = 2017;
//   short month = 1;
//   short ay = 1;
// };

// stuct second {
//   string title;
//   Date releaseDate;
//   bool isPopular;
// };

// Dae date{ 2019, 6, 4};// seond second { 
//   "John Wick", 
//   { 2019 6, 4} 
// };
// cou << second.releaseDate.month;  

