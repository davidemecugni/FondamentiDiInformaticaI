unsigned int conta_spazi (const char* s){
    int i=0, total =0;
    while(s[i]!= '\0'){
        if(s[i] == ' '){
            total++;
        }
        i++;
    }
    return total;
}