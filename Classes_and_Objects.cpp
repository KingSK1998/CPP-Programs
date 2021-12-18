// Introduction to OOPs in C++
// Constructors, Getter and Setters, Destructors

#include <iostream>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;

        // CONSTRUCTORS
        Book(string aTitle, string aAuthor, int aPages){
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }

        // Multiple Constructors
        Book(){
            title = "no title";
            author = "no author";
            pages = 0;
        }

        bool isABook(){
            if(pages > 100)
                return true;
            return false;
        }
};

class RipTire {
    public:
        RipTire(){
            cout << "Fire in the hole!" << endl;
        }

        ~RipTire()
        {
            cout << "Destructor" << endl;
        }
};

// GETTERS AND SETTERS METHODS

class Movie {
    private:
        string rating;
    public:
        string title;
        string director;
        Movie(string aTitle, string aDirector, string aRating){
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }

        void setRating(string aRating){
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR"){
                rating = aRating;
            } else {
                rating = "NR";
            }
        }

        string getRating(){
            return rating;
        }
};

int main()
{
    Book book1("A", "B", 1);
    book1.title = "asfdsg";

    Book book2("ABC", "XYZ", 123);

    Book book3;
    cout << book3.title << endl;

    cout << book1.isABook() << endl;

    // GETTERS AND SETTERS

    Movie avengers("The Avengers", "Joss Whedon", "PC-13");

    avengers.setRating("Dog");

    cout << avengers.getRating() << endl;

    // DESTRUCTOR
    {
        RipTire r;
    }

    return 0;
}