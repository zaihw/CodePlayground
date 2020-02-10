class Solution {
public:
    string getHint(string secret, string guess) {
        
        int count_secret[10]={0}, count_guess[10]={0}, bulls[10]={0};
        int total_bulls=0, total_cows=0;
        //count occurance of each element in both string
        for (int i=0; i<secret.size(); i++){
            count_secret[secret[i]-'0']++;
        }
        
        for (int i=0; i<guess.size(); i++){
            //count # of bulls
            if(secret[i]==guess[i]){
                bulls[secret[i]-'0']++;
            }
            count_guess[guess[i]-'0']++;
        }
        
        for (int i=0; i<=9; i++){
            total_bulls+=bulls[i];
            total_cows+=min(count_secret[i]-bulls[i], count_guess[i]-bulls[i]);
        }
        
        return to_string(total_bulls)+"A"+to_string(total_cows)+"B";
    }
};