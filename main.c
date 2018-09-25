       #include <stdio.h>
　      #include <stdlib.h>

　      int main(int argc, char *argv[]) 
　     {   
        FILE *fp;
       char *filename = argv[1];
        if ((fp = fopen(filename,"r")) == NULL){
       fprint(stderr,"Failed to open %s.\n",filename);
            exit(EXIT_FAILURE);
          }
         char str [256];
 
   　　　fgets(str,sizeof(str),fp);
        printf("%s\n,"XXXXX");
          
       fclose(fp);              
       fgets(str, sizeof(str), stdin);
       print("%s\n",str);
          
      return 0;
          //答えらしきソースをがっつり参考にしました。
}
