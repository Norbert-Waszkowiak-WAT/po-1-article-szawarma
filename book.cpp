#ifndef BOOK
#define BOOK
#include <string>
#include <iostream>
#include "chapter.cpp"
#include "author.cpp"
#include "article.cpp"
using namespace std;

class Book
{
    private:
        string title;
        Author author;
        int publicationYear;
        vector <Chapter> chapters;

    public:
        Book(): title(""), author(Author()), publicationYear(0), chapters() {};
        
        Book(string bookTitle, Author bookAuthor, int year, vector <Chapter> &bookChapters)
        : title(bookTitle), author(bookAuthor), publicationYear(year), chapters(bookChapters) {};
        
        void addChapter(const Chapter &chapter){
        chapters.push_back(chapter);
        }
        void displayInfo(){
            cout << title << " ";
            cout << author.getName() << " ";
            cout << author.getSurname() << " ";
            cout << publicationYear << " ";
            cout << chapters.size() << endl;
        };
        string getTitle(){
            return title;
        };
        Author getAuthor(){
            return author;
        };
        int getPublicationYear(){
            return publicationYear;
        };
        vector<Chapter> getChapters(){
            return chapters;
        };
};
#endif