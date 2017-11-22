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
            if(isalpha(text[i])){
                currentWord += text[i];
            } else {
                if(longestWord.size() < currentWord.size()){
                    longestWord = currentWord;
                }
                currentWord = "";
            }
        }
        return longestWord;
    }
};
#endif //CPP_LIGHTNING_FAST_WORD_FINDER_DOJO_LIGHTNINGWORDFINDER_HPP
