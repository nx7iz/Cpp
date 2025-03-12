#include <iostream>
#include <vector>

using namespace std;

struct Movie {
  string title;
  int releaseYear = 0;
  bool isPopular;
};

int main() {
  // Arrays in structures
  vector<Movie> movies;
  Movie movie ;
  movies.push_back({ "John Wick", 2019});
  movies.push_back({ "John Wick 1", 2021});
  // cout << movies[0].title;
  
  for (const auto& movie: movies) 
    cout << movie.title << " - " << movie.releaseYear << endl;
  
}