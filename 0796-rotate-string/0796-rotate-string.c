

bool rotateString(char * s, char * goal){
  
        if(strlen(s)!=strlen(goal)) return 0;
        
        char temp[strlen(s) * 2 + 1];
        strcpy(temp,s);
        strcat(temp,s);
        return strstr(temp,goal) == NULL ? 0 : 1;
        
        
    
};
