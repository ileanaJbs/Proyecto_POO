/*
Jocelyn Ileana Balderas Sánchez-A01798528
Andrea Doce Murillo-A01799931

Proyecto Final

*/

#include "Video.hpp"

// EJEMPLO

#include <iostream>
#include "video.h"
#include "movie.h"
#include "series.h"
#include "episode.h"
#include <fstream>
#include <vector>

int main()
{

    // Creating different movie objects and adding them to an array

    movie LordOfTheRings(0, "Lord of the Rings", 155, "Adventure", 5);
    movie StarWars(1, "Star Wars", 132, "SciFi", 5);
    movie Inception(2, "Inception", 143, "Action", 4);
    movie Interstellar(3, "Interstellar", 153, "SciFi", 5);
    movie Tenet(4, "Tenet", 135, "Action", 3);

    movie moviearr[5] = {LordOfTheRings, StarWars, Inception, Interstellar, Tenet};

    // Creating different series objects and adding them to an array

    series ObiWan(5, "Obi - Wan Kenobi", 40, "Scifi", 4, 5);
    series Lost(6, "Lost", 50, "Mystery", 4, 121);
    series Naruto(7, "Naruto", 22, "Anime", 4, 720);
    series b99(8, "Brooklyn 99", 25, "Comedy", 4, 153);
    series Mandalorian(9, "The Mandalorian", 40, "SciFi", 5, 17);

    series seriesarr[5] = {ObiWan, Lost, Naruto, b99, Mandalorian};

    // Creating different episode objects for Obi-Wan series and adding them to an array

    episode one(50, "Episode 1", 40, "SciFi", 4, 1, 3);
    episode two(51, "Episode 2", 40, "SciFi", 4, 2, 4);
    episode three(52, "Episode 3", 40, "SciFi", 4, 3, 4);
    episode four(53, "Episode 4", 40, "SciFi", 4, 4, 3);
    episode five(54, "Episode 5", 40, "SciFi", 4, 5, 4);

    episode obiwanarr[5] = {one, two, three, four, five};

    int x;

    // Do while loop, which will serve as the main menu which will repeat after every action until the program is terminated

    do
    {
        std::cout << "----What would you like to do?-----" << std::endl;
        std::cout << "1. See list of movies with their rating" << std::endl;
        std::cout << "2. See list of series with their rating" << std::endl;
        std::cout << "3. See movies rated above 4 stars" << std::endl;
        std::cout << "4. See series rated above 4 stars" << std::endl;
        std::cout << "5. See movies and series of a specific genre" << std::endl;
        std::cout << "6. Rate a movie" << std::endl;
        std::cout << "7. Rate a TV series" << std::endl;
        std::cout << "0. Exit program" << std::endl;
        std::cin >> x;

        if (x == 1)
        {
            for (int i = 0; i <= 4; i++)
            {
                moviearr[i].showrating();
            }
        }
        else if (x == 2)
        {
            for (int i = 0; i <= 4; i++)
            {
                seriesarr[i].showrating();
            }
        }
        else if (x == 3)
        {
            for (int i = 0; i <= 4; i++)
            {
                if (moviearr[i].getRating() >= 4)
                {
                    moviearr[i].showrating();
                }
            }
        }
        else if (x == 4)
        {
            for (int i = 0; i <= 4; i++)
            {
                if (seriesarr[i].getRating() >= 4)
                {
                    seriesarr[i].showrating();
                }
            }
        }
        else if (x == 5)
        {
            int y;
            std::cout << "What genre would you like to see movies and series of?" << std::endl;
            std::cout << "1. Adventure" << std::endl;
            std::cout << "2. SciFi" << std::endl;
            std::cout << "3. Action" << std::endl;
            std::cout << "4. Mystery" << std::endl;
            std::cout << "5. Anime" << std::endl;
            std::cout << "6. Comedy" << std::endl;
            std::cin >> y;

            if (y == 1)
            {
                for (int i = 0; i <= 4; i++)
                {
                    if (moviearr[i].getGenre() == "Adventure")
                    {
                        std::cout << moviearr[i].getName() << std::endl;
                        if (seriesarr[i].getGenre() == "Adventure")
                        {
                            std::cout << seriesarr[i].getName() << std::endl;
                        }
                    }
                    else if (seriesarr[i].getGenre() == "Adventure")
                    {
                        std::cout << seriesarr[i].getName() << std::endl;
                    }
                }
            }
            else if (y == 2)
            {
                for (int i = 0; i <= 4; i++)
                {
                    if (moviearr[i].getGenre() == "SciFi")
                    {
                        std::cout << moviearr[i].getName() << std::endl;
                        if (seriesarr[i].getGenre() == "SciFi")
                        {
                            std::cout << seriesarr[i].getName() << std::endl;
                        }
                    }
                    else if (seriesarr[i].getGenre() == "SciFi")
                    {
                        std::cout << seriesarr[i].getName() << std::endl;
                    }
                }
            }
            else if (y == 3)
            {
                for (int i = 0; i <= 4; i++)
                {
                    if (moviearr[i].getGenre() == "Action")
                    {
                        std::cout << moviearr[i].getName() << std::endl;
                        if (seriesarr[i].getGenre() == "Action")
                        {
                            std::cout << seriesarr[i].getName() << std::endl;
                        }
                    }
                    else if (seriesarr[i].getGenre() == "Action")
                    {
                        std::cout << seriesarr[i].getName() << std::endl;
                    }
                }
            }
            else if (y == 4)
            {
                for (int i = 0; i <= 4; i++)
                {
                    if (moviearr[i].getGenre() == "Mystery")
                    {
                        std::cout << moviearr[i].getName() << std::endl;
                        if (seriesarr[i].getGenre() == "Mystery")
                        {
                            std::cout << seriesarr[i].getName() << std::endl;
                        }
                    }
                    else if (seriesarr[i].getGenre() == "Mystery")
                    {
                        std::cout << seriesarr[i].getName() << std::endl;
                    }
                }
            }
            else if (y == 5)
            {
                for (int i = 0; i <= 4; i++)
                {
                    if (moviearr[i].getGenre() == "Anime")
                    {
                        std::cout << moviearr[i].getName() << std::endl;
                        if (seriesarr[i].getGenre() == "Anime")
                        {
                            std::cout << seriesarr[i].getName() << std::endl;
                        }
                    }
                    else if (seriesarr[i].getGenre() == "Anime")
                    {
                        std::cout << seriesarr[i].getName() << std::endl;
                    }
                }
            }
            else if (y == 6)
            {
                for (int i = 0; i <= 4; i++)
                {
                    if (moviearr[i].getGenre() == "Comedy")
                    {
                        std::cout << moviearr[i].getName() << std::endl;
                        if (seriesarr[i].getGenre() == "Comedy")
                        {
                            std::cout << seriesarr[i].getName() << std::endl;
                        }
                    }
                    else if (seriesarr[i].getGenre() == "Comedy")
                    {
                        std::cout << seriesarr[i].getName() << std::endl;
                    }
                }
            }
        }
        else if (x == 6)
        {
            std::cout << "Type in the ID of the movie you want to rate" << std::endl;
            for (int i = 0; i <= 4; i++)
            {
                std::cout << moviearr[i].getID() << " " << moviearr[i].getName() << std::endl;
            }
            int z, rate;
            std::cin >> z;

            std::cout << "Enter movie rating: ";
            std::cin >> rate;

            moviearr[z].setRating(rate);
        }
        else if (x == 7)
        {
            std::cout << "Type in the ID of the series you want to rate" << std::endl;
            for (int i = 0; i <= 4; i++)
            {
                std::cout << i << " " << seriesarr[i].getName() << std::endl;
            }
            int z, rate;
            std::cin >> z;

            std::cout << "Enter series rating: ";
            std::cin >> rate;

            seriesarr[z].setRating(rate);
        }
    } while (x != 0);
}