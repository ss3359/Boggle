//
//  CockerSpaniel.cpp
//  DogProject
//
//  Created by Owner on 4/8/24.
//

#include <iostream>
#include <thread>
#include <cmath>
#include <random>
#include <vector>
#include <map>
#include <string>
#include <fstream>
#include "Maltese.hpp"
#include "Bloodhound.hpp"


#include "CockerSpaniel.hpp"
using namespace std;

//Fill The Board First
void Boggle::SetUpBoard(char board[4][4]){
    Boggle b;
    int RandomNumber;
    char letters[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            RandomNumber = rand()%26;
            board[i][j] = letters[RandomNumber];
            
        }
    }

    
};
bool Boggle:: CheckLetter(char letter, string word,int position){
    
    if (word[position]==letter){
        return true;
    }
    return false; 
}


