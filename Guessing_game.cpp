#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<fstream>
#include<algorithm>

void play_game();
void print_vector(std::vector<int>);
void highscrs();

using std::endl;

std::ofstream wfile;
std::ifstream rfile;

std::vector<int> hscrs;

int main () {

  srand(time(NULL));//seeding the random every time to avoid repetitive sequences
  int choice;
  do
  {
    std::cout << "0: Play game\n" << "1: Highscores\n" << "2: exit\n:";
    std::cin >> choice;

    switch (choice) {
      case 0:
        std::cout<< "Lets play!"<< endl;;
        play_game();
        break;
      case 1:
        highscrs();
        break;
      case 2:
        std::cout<< "Get out"<< endl;;
        return 0;
      defalut: std::cout<< "Try again"<< endl;
        break;


    }
  }while(true); 
}

void play_game()
{
  int random = rand()%101;
  std::vector<int> all_guesses;

  while (1)
  {
    int guess;
    std::cin >> guess;

    if(all_guesses.size() < 20){
      all_guesses.push_back(guess);
    }
    else{
      std::cout << "Too many guesses.Try again" << endl;
      print_vector(all_guesses);
      break;
    }

    if(random == guess)
    {
      std::cout << "You Win!" << endl;
      //wfile.open("Highscores.txt");
      wfile.open("Highscores.txt", std::ios::app);// for appending to the file
        wfile << all_guesses.size() << " \n";
      wfile.close();
      std::cout << "Your Guesses:";
      print_vector(all_guesses);
      break;
    }
    else if (guess < random) 
    {
      std::cout << "Too Low" << endl; 
    }
    else{
      std::cout << "Too High" << endl;
    }

  }
}

void highscrs(){

  int scores;
  std::vector<int> sor;
  rfile.open("Highscores.txt");
  while(rfile >> scores){
    sor.push_back(scores);
  }
  rfile.close();

	std::sort(sor.begin(),sor.end());//Sorting the vector

  std::cout << "Highscores: ";
  for(int scores : sor){
    std::cout << scores << " ";
  }

   std::cout << endl;

}

void print_vector(std::vector<int> vec){

  for(int i = 0;i<vec.size() ;i++){
    std::cout << vec[i] << " ";
  }
  std::cout << endl;
}
