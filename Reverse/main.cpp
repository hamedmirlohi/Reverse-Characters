//
//  main.cpp
//  Reverse
//
//  Created by Hamed Mirlohi on 3/4/19.
//  Copyright © 2019 Hamed Mirlohi. All rights reserved.
//

#include <iostream>

using namespace std;

void reverse(char word[])
{
    unsigned long size = strlen(word);
    char temp;
    
    for (int i = 0; i < strlen(word) / 2; ++i, --size)
    {
        temp = word[i];
        word[i] = word[size - 1];
        word[size - 1] = temp;
    }
}

int main(int argc, const char * argv[]) {

    char word[] = "washington";
    reverse(word);
   
    cout<<word<<endl;
}
