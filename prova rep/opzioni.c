int opzioni(int **a){
    
    int err;
    int mode;
    
    printf("Scegliere il livello di difficoltà:\n1-Facile\n2-Medio\n3-Difficile");
    scanf("%d",&mode);
    
    err=generatore(a , 8*mode);
    
    return (err);           
}