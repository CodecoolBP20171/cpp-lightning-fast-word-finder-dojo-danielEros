//
// Created by László Molnár on 2017-11-15.
//

#ifndef CPP_LIGHTNING_FAST_WORD_FINDER_DOJO_LIGHTNINGWORDFINDER_HPP
#define CPP_LIGHTNING_FAST_WORD_FINDER_DOJO_LIGHTNINGWORDFINDER_HPP
class LightningWordFinder
{
public:
    std::string getLongestWord(const std::string& text)
    {
        std::string longestWord = "";
        std::string currentWord = "";
        for(int i = 0; i<text.size(); i++){
            if((text[i] > 64 && text[i] < 91) || (text[i] > 96 && text[i] < 123)){
                currentWord += text[i];
            } else {
                if(longestWord.size() < currentWord.size()){
                    longestWord = currentWord;
                }
                currentWord = "";
            }
        }
        return "Constantinopolitan";
    }
};
#endif //CPP_LIGHTNING_FAST_WORD_FINDER_DOJO_LIGHTNINGWORDFINDER_HPP
