//
//  CockerSpaniel.hpp
//  DogProject
//
//  Created by Owner on 4/8/24.
//

#ifndef CockerSpaniel_hpp
#define CockerSpaniel_hpp

#include <stdio.h>

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
using namespace std;


class Boggle{
    
private:
    char letters[26]={'A','B','C', 'D', 'E', 'F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    
    char board[4][4];
    string words[8]={"GOLF", "WOLF", "PALM", "TREE", "BALL", "FROG", "MOLE", "DULL"};
public:
    void SetUpBoard(char board[4][4]);
    bool CheckLetter(char letter, string word,int position); 

    void PlayTheGame(string word){
        
        
    }
    
    
};


#endif /* CockerSpaniel_hpp */
