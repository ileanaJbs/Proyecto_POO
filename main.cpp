/*
Jocelyn Ileana Balderas Sánchez-A01798528
Andrea Doce Murillo-A01799931

Proyecto Final

*/

#include "Video.hpp"
#include <iostream>
/*#include <fstream>
#include <sstream>
#include <algorithm>
#include <windows.h>*/
#include "PlataformaStreaming.hpp"


using namespace std;

void iniciar(){
    int op;
    cout << "----- Bienvenido a su Plataforma favorita de Streaming -----" << endl;
    cout << "Por favor elija la opcion deseada: " << endl;
    cout << "1) Mostrar resumen de la lectura de la base de datos "<<endl;
    cout << "2) Mostrar los videos de un género "<<endl;
    cout << "3) Mostrar los videos a partir de un rating "<<endl;
    cout << "4) Mostrar los episodios de una serie con rating "<<endl;
    cout << "5) Mostrar las peliculas a partir de un rating"<<endl;
    cout << "6) Calificar un video"<<endl;
    cout << "7) Salir"<<endl;
    cin >> op;

    if (op == 1)
    {
        try
        {
            PlataformaStreaming::resumen();
            try {
                PlataformaStreaming::ultiMensaje();
            }
            catch(string &mensaje){
                cout<<mensaje<<endl;
            }
        }
        catch(string &mensaje){
            cout<<mensaje<<endl;
            try {
                PlataformaStreaming::ultiMensaje();
            }
            catch(string &mensaje){
                cout<<mensaje<<endl;
            }
        }
    }
    else if(op == 2){
        cout <<"\n- - - - - - - - - - - - - - Mostrar videos por genero - - - - - - - - - - - - - - - - - - \n"<<endl;
        cout<<"Ingresa el género (En ingles y con la primer letra en mayúscula) que quieres desplegar: ";
        string gene;
        cin >> gene;
        try
        {
           PlataformaStreaming::imprimirGenero(gene);
           try {
                PlataformaStreaming::ultiMensaje();
            }
            catch(string &mensaje){
                cout<<mensaje<<endl;
            }
        }
        catch(string &mensaje)
        {
            cout << mensaje << endl;
            try {
                PlataformaStreaming::ultiMensaje();
            }
            catch(string &mensaje){
                cout<<mensaje<<endl;
            }
        }
    }
    else if(op == 3){
        cout <<"\n- - - - - - - - - - - - - - Mostrar videos apartir de una calificacion - - - - - - - - - - - - - - - - - - \n"<<endl;
        cout<<"Ingrese la calificacion(en un rango de 1 a 5): ";
        float cali;
        cin >>cali;
        try{
            PlataformaStreaming::mostrar_apartir_cal(cali);
            try {
                PlataformaStreaming::ultiMensaje();
            }
            catch(string &mensaje){
                cout<<mensaje<<endl;
            }
        }
        catch(string &mensaje){
            cout << mensaje <<endl;
            try {
                PlataformaStreaming::ultiMensaje();
            }
            catch(string &mensaje){
                cout<<mensaje<<endl;
            }
        }
    }
    else if(op == 4){
        cout <<"\n- - - - Mostrar los episodios de una determinada serie con una calificación determinada - - - - \n"<<endl;
        cout<<"Ingrese el nombre de la serie a desplegar: ";
        string nomb;
        cin.ignore();
        getline(cin,nomb);
        cout<<"\nIngrese la calificacion que quiere desplegar(en un rango de 1 a 5): ";
        float cali;
        cin >> cali;
        try{
            PlataformaStreaming::mostrarEpisodios_Serie_Calificacion(nomb, cali);
            try {
                PlataformaStreaming::ultiMensaje();
            }
            catch(string &mensaje){
                cout<<mensaje<<endl;
            }
        }
        catch(string &mensaje){
            cout<<mensaje<<endl;
            try {
                PlataformaStreaming::ultiMensaje();
            }
            catch(string &mensaje){
                cout<<mensaje<<endl;
            }
        }
    }
    else if(op == 5){
        cout <<"\n- - - - Mostrar las peliculas a partir de cierta calificacion - - - - \n"<<endl;        
        cout << "Ingrese la calificacion a desplegar(en un rango de 1 a 5): ";
        float cali;
        cin >> cali;
        try{
            PlataformaStreaming::mostrarPelicula_Calificacion(cali);
            try {
                PlataformaStreaming::ultiMensaje();
            }
            catch(string &mensaje){
                cout<<mensaje<<endl;
            }
        }
        catch(string &mensaje){
            cout<<mensaje<<endl;
            try {
                PlataformaStreaming::ultiMensaje();
            }
            catch(string &mensaje){
                cout<<mensaje<<endl;
            }
        }
    }
    else if(op == 6){
        cout <<"\n- - - - Calificar un video en específico - - - - \n"<<endl;
        cout <<"\nIngresa el nombre del video que quiere calificar: ";
        string nombre;
        cin.ignore();
        getline(cin, nombre);
        float cal;
        cout<<"\nIngresa la calificacion que le quiere asignar (en una escala de 1 a 5): ";   
        cin>>cal;
        cout <<"\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n"<<endl;
        try
        {
            PlataformaStreaming::calificarVideoEsp(nombre, cal);
            try {
                PlataformaStreaming::ultiMensaje();
            }
            catch(string &mensaje){
                cout<<mensaje<<endl;
            }
        }
        catch(string &mensaje)
        {
            cout <<mensaje<<endl;
            try {
                PlataformaStreaming::ultiMensaje();
            }
            catch(string &mensaje){
                cout<<mensaje<<endl;
            }
        }
        
    }
    else if(op == 7){
            cout<<"\nGracias por preferir nuestro servicio de Streaming...";
            cout <<"\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n"<<endl;
    }
    else{
        cout<<"\n- - - - - Error: opcion invalida, voy a terminar el programa. - - - -\n"<<endl;
    }
}

void leerArchivo(){
    ifstream archivo;
    archivo.open("BasePeliculas4.csv");
    string linea;
    getline(archivo, linea);
    string id, nombre, duracion, genero, calificacion, fecha_estreno, nombreEp, idEp, temporada, linea_numEp, comilla_numEp, numEp;
    while(archivo.peek()!=EOF){
        getline(archivo, id, ';');
        getline(archivo, nombre, ';');
        getline(archivo, duracion, ';');
        getline(archivo, genero, ';');
        getline(archivo, calificacion, ';');
        getline(archivo, fecha_estreno, ';');
        getline(archivo, nombreEp, ';');
        getline(archivo, idEp, ';');
        getline(archivo, temporada, ';');
        getline(archivo, linea_numEp, '\n');
        stringstream stream(linea_numEp);
        getline(stream, comilla_numEp, ',');n
        stringstream abc(comilla_numEp);
        getline(abc, numEp, '"');
        int duracion_i = stoi(duracion);
        float calificacion_i = stof(calificacion);

        if (numEp=="" || numEp==" ")
        {
            Pelicula p1(nombre, genero, id, fecha_estreno, duracion_i, calificacion_i);
            Peliculas.push_back(p1);
        }
        else
        {
            int temp_i = stoi(temporada);
            Episodio ep1(nombreEp,idEp, temp_i, nombre, genero, id, fecha_estreno, duracion_i, calificacion_i);
            if (Series.size()>0)
            {
                bool encontrar = false;
                for(int i = 0; i < Series.size();i++){
                    if (Series[i].getNombre() == nombre)
                    {
                        encontrar = true;
                        Series[i].agregarEpisodio(ep1);
                    }
                }
                if (encontrar==false){
                    Serie s1 (nombre, id);
                    s1.agregarEpisodio(ep1);
                    Series.push_back(s1);
                } 
            }
            else
            {
                Serie s1(nombre, id);
                s1.agregarEpisodio(ep1);
                Series.push_back(s1);
            }
        }
    }
    archivo.close();
}

void resumen(){
    int contEp, contTot;
    for (int i = 0; i < Series.size();i++){
        contEp = contEp + Series[i].getEpisodios().size();
    }
    contTot = contEp + Peliculas.size();
    cout << "\n - - - - - - - - - - - - - - -  Resumen  - - - - - - - - - - - - -  \n"<<endl;
    cout << "Se leeyeron "<<contTot<<" videos de los cuales: "<<Peliculas.size()<<" son peliculas y ";
    cout<<contEp<<" son episodios que forman parte de "<<Series.size()<<" series." <<endl;
    cout << "\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n"<<endl;
    cout<<"\n1 - Mostrar las peliculas disponibles.\n"<<endl;
    cout<<"\n2 - Mostrar las series disponibles.\n"<<endl;
    cout<<"\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n"<<endl;
    int opres;
    cout<<"\nIngresa la opcion que quiere desplegar: ";cin>>opres;
    cout<<"\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n"<<endl;
    if (opres != 1 && opres != 2){
        string mensaje ="- - - - Error: opcion no válida - - - -";
        throw(mensaje);
    }
    else{
        if (opres == 1){
            PlataformaStreaming::mostrarPeliculas();
        }
        else if(opres==2){
            PlataformaStreaming::mostrarSeries();
            int opEp;
            cout << "\n1 - Mostrar los episodios de una serie en específico.\n"<<endl;
            cout << "\n2 - Regresar al menu principal \n"<<endl;
            cout<<"\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n"<<endl;
            cout << "Ingresar la opcion deseada: ";
            cin >> opEp;
            cout<<"\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n"<<endl;
            if (opEp != 1 && opEp != 2){
                string mensaje="- - - - Error: opcion no válida - - - -";
                throw(mensaje);
            }
            else if (opEp == 1)
            {
                cout <<"\nIngrese el nombre de la serie: ";
                string nombreSerie;
                cin.ignore();
                getline(cin, nombreSerie);
                cout<<"\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n"<<endl;
                try{
                    PlataformaStreaming::mostrarEpsSerie(nombreSerie);
                    cout<<"\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n"<<endl;
                }
                catch(string &mensaje){
                    cout << mensaje <<endl;
                }
            }
            else if(opEp == 2)
            {
                PlataformaStreaming::iniciar();
            } 
        }
    }
}

void imprimirGenero(string gene)
{
    string genero_alt;
    genero_alt = " "+gene; 
    string generos;
    cout <<"\n- - - - - - - - -  Genero "<<gene<<" - - - - - - - - -  \n"<<endl;
    bool evaluarP = false;
    bool evaluarS = false;
    for (int i = 0; i < Peliculas.size();i++){
        generos = Peliculas[i].getGenero();
        stringstream stream(generos);
        vector<string> lista_generos; 
        string primerGenero;
        while (stream.peek() != EOF){
            getline(stream, primerGenero, ',');
            lista_generos.push_back(primerGenero);
        }
        if (find(lista_generos.begin(), lista_generos.end(), gene) != lista_generos.end()){
            evaluarP = true;
            Peliculas[i].display(i);
        }
        
        else if(find(lista_generos.begin(), lista_generos.end(), genero_alt) != lista_generos.end())
        {
            evaluarP = true;
            Peliculas[i].display(i);
        }
    }
    for (int i = 0; i < Series.size();i++){
        for(int a = 0; a < Series[i].getEpisodios().size();a++){
            generos = Series[i].getEpisodios()[a].getGenero();
            stringstream stream(generos);
            vector<string> lista_generos; 
            string primerGenero;
            while (stream.peek() != EOF){
                getline(stream, primerGenero, ',');
                lista_generos.push_back(primerGenero);
            }
            if (find(lista_generos.begin(), lista_generos.end(), gene) != lista_generos.end()){
                evaluarS = true;
                Series[i].getEpisodios()[a].display(a);
            }
            
            else if(find(lista_generos.begin(), lista_generos.end(), genero_alt) != lista_generos.end())
            {
                evaluarS = true;
                Series[i].getEpisodios()[a].display(a);
            }
        }
    }
    if (evaluarP == false && evaluarS == false){
        string mensaje = "\n- - - - - - Error: Genero no válido- - - - -\n";
        throw(mensaje);
    }
}

void mostrar_rating(double nuevoRating){
    if (cal < 0 || cal > 5){
        string mensajeC = "\n- - - - - - Error: Tu calificacion ingresada no es válida - - - - -\n";
        throw(mensajeC);
    }
    else{
        cout <<"\n- - - - - - - - -  Calificacion mayor o igual "<<cal<<" - - - - - - - - -  \n"<<endl;
        bool evaluarP = false;
        bool evaluarS = false;
        for (int i = 0;i<Peliculas.size();i++){
            if (Peliculas[i] >= cal){
                evaluarP = true;
                Peliculas[i].display(i);
            }
        }
        for (int i = 0;i<Series.size();i++){
            for(int a = 0; a<Series[i].getEpisodios().size();i++){
                if (Series[i].getEpisodios()[a] >= cal){
                    evaluarS = true;
                    Series[i].getEpisodios()[a].display(i);
                }
            }
        }
        if (evaluarP == false && evaluarS == false){
            string mensaje = "\n- - - - - - Error: No se encontraron videos con calificacion mayor o igual a la que ingresaste - - - - -\n";
            throw(mensaje);
        }
    }
}

void mostrarEpisodios_Serie_Calificacion(string nom, double nuevoRating){
    if (cal < 0 || cal > 5){
        string mensaje ="\n- - - - Error: Calificacion no valida - - - - \n";
        throw(mensaje);
    }
    else{
        cout<< "\n - - - Estos son los episodios de la serie "<<nom<<" con calificacion mayor o igual "<<cal<<" - - -\n"<<endl;
        bool siEstaSerie = false;
        bool siEstaEp = false;
        for (int i = 0;i<Series.size();i++){
            if (Series[i].getNombre() == nom){
                siEstaSerie = true;
                for(int a = 0;a<Series[i].getEpisodios().size();a++){
                    if(Series[i].getEpisodios()[a] >= cal){
                        siEstaEp = true;
                        Series[i].getEpisodios()[a].display(a);
                    }
                }
            }
        }    
        if (siEstaSerie == false){
            string mensaje = "\n- - - - Error: No se encuentra la serie que a usted le interesa en nuestra base de datos - - - - \n";
            throw(mensaje);
        }
        else if(siEstaEp == false){
            string mensaje = "\n- - - - Error: No se encuentran episodios que cumplan con la calificacion ingresada - - - - \n";
            throw(mensaje);
        }
    }
}

void mostrarPelicula_Calificacion(double nuevoRating){
    if(cal < 0 || cal > 5){
        string mensaje = "\n- - - - Error: No hay peliculas que cumplan con ese requisito en nuestra base de datos - - - -\n";
        throw(mensaje);
    }
    else{
        cout<< "\n - - - Estos son las peliculas con calificacion mayor o igual a "<<cal<<" - - - \n"<<endl;
        bool siEsta = false;
        for (int i = 0;i<Peliculas.size();i++){
            if (Peliculas[i] >= cal){
                siEsta = true;
                Peliculas[i].display(i);
            }
        }
        if (siEsta == false){
            string mensaje ="\n- - - - Error: No hay peliculas que cumplan con ese requisito en nuestra base de datos - - - -\n";
            throw(mensaje);
        }
    }
}

void mostrarPeliculas()
{
    for(int i=0;i < Peliculas.size();i++)
    {
        Peliculas[i].display(i);
    }
}

void mostrarSeries()
    {
        for(int i=0;i < Series.size();i++)
        {
            Series[i].display(i);
        }
    }

void mostrarEpsSerie(string nombreSerie){
    bool evalua = false;
    for (int i = 0; i < Series.size();i++ ){
        if(Series[i].getNombre()==nombreSerie){
            evalua = true;
            Series[i].displayEpisodios();
        }
    }
    if (evalua == false){
        string mensaje = "\n- - - - - - Error: Serie no válida- - - - -\n";
        throw(mensaje);
    }
}

void calificarVideoEsp(string nom, float cal){
    if (cal < 0  || cal > 5){
        string mensaje = "\n- - - - Error: Calificacion ingresada invalida - - - -\n";
        throw(mensaje);
    }
    else{
        bool estaP = false;
        bool estaS = false;
        for(int a = 0; a < Peliculas.size(); a ++){
            if(Peliculas[a].getNombre()==nom){
                estaP = true;
                Peliculas[a].calificarVideo(cal);
            }
        }
        for(int b = 0; b < Series.size(); b ++){
            vector<Episodio> eps = Series[b].getEpisodios();
            for (int c = 0; c < eps.size(); c ++){
                if (eps[c].getTitulo()==nom){
                    estaS = true;
                    eps[c].calificarVideo(cal);
                    cout<<"\nLa nueva calificacion promedio de la serie "<<Series[b].getNombre()<<" es: "<< Series[b].obtenerCalificacionProm()<<"\n"<<endl;
                }
            }
        }
        if (estaP == false && estaS == false){
            string mensaje = "\n- - - - Error: No se encuentra el video que desea calificar - - - - \n";
            throw(mensaje);
        }
    }
}

void ultiMensaje(){
        int opcion=0;
        cout <<"\n- - - - - - - Elija una opcion - - - - - - \n"<<endl;
        cout <<"\n1 - Volver a mostrar el menu."<<endl;
        cout <<"\n2 - Salir. "<<endl;
        cout <<"\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n"<<endl;
        cin >> opcion;
        if (opcion != 1 && opcion != 2){
            string mensaje="- - - - Error: Opcion no valida, voy a terminar el programa. - - - -";
            throw(mensaje);
        }
        else if(opcion == 1){
            PlataformaStreaming::iniciar();
        }
        else if(opcion == 2){
            cout<<"\nGracias por preferir nuestro servicio de Streaming\n"<<endl;
            cout <<"\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n"<<endl;
        }
}

void Netflix()
{
    string id;
    cout << "Hola! Cual es tu nombre?" << endl;
    cin >> id;
    cout << "De acuerdo " << id << "! Bienvenido a Netflix" << endl;
    cout << "Elige la opcion deseada: " << endl;
    cout << "1) Iniciar" << endl;
    cout << "2) Salir" << endl;

    int x;
    cin >> x;
    switch (x)
    {
    case 1:
        iniciar();
        break;
    case 2:
        pagoProducto();
        break;
    case 3:
        entregaProducto();
        break;
    }
};

int main()
{
    cout << "Bienvenido. Que plataforma de streaming deseas visitar?" << endl;
    cout << "Elige la opcion deseada: " << endl;
    cout << "1) Netflix" << endl;
    cout << "2) Disney" << endl;
    cout << "3) HBO" << endl;

    int x;
    cin >> x;
    switch (x)
    {
    case 1:
        Netflix();
        break;
    case 2:
        Disney();
        break;
    case 3:
        HBO();
        break;
    }
    return 0;
};

// EJEMPLO

/*
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

*/