#include<iostream>
#include<map>

using namespace std;
string shift_word(string word) {
    char c_tmp = word[word.length()-1];
    for(int i=word.length()-1; i >0 ; i-- ){
        word[i] = word[i-1];
    }
    word[0] = c_tmp;
    return word;
}

int main() {
    std::string word;
    map<string, bool> map_cnt;
    while(std::cin>>word){
        map_cnt.clear();
        for(int i=0; i < word.length(); i++) {
            if (map_cnt.find(word) == map_cnt.end() ){
                map_cnt[word] = true;
            }
            word = shift_word(word);
        }
        std::cout << map_cnt.size() << std::endl;
    }
    return 0;
}