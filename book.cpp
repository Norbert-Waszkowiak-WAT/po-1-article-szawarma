#ifndef BOOK
#define BOOK
#include <vector>
#include <iostream>
#include "book.cpp"
#include "chapter.cpp"
#include "author.cpp"
using namespace std;

class Book{
    private:
    string title;
    Author author;
    int publicationYear;
    vector<Chapter> chapters;
    public:
    Book() {};
    Book(string bookTitle,Author bookAuthor, int year, vector<Chapter> bookChapters):
    title(bookTitle),author(bookAuthor),publicationYear(year), chapters(bookChapters) {};
    
    void addChapter(Chapter &chapter)
    {
        chapters.push_back(chapter);
    }
    void displayInfo();

    string getTitle(){
        return title;
    }
    Author getAuthor(){
        return author;
    }
    int getPublicationYear(){
        return publicationYear;
    }
    vector<Chapter> getChapters()
    {
        return chapters;
    }
};
#endif