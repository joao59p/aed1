void impar_ou_par(int *vetor)
{
    /*Declarando variaveis*/
    int i;
    int aux_par  = 0, aux_impar = 0;
    int *vetor_par, *vetor_impar, *novo_vetor; 
    int tamanho_par, tamanho_impar;
        
    tamanho_par = 1;
    tamanho_impar = 1;    
     
    vetor_par = (int *)malloc(tamanho_par * sizeof(int));
    vetor_impar = (int *)malloc(tamanho_impar * sizeof(int));

    /*Verificando se o número e par ou impar*/
    for(i = 0; i < 20; i ++)
    {
       /*caso seja par*/
        if(vetor[i] % 2 == 0)
          {
              aux_par += 1;
              /*realocando o vetor (caso precise)*/
              if(aux_par > tamanho_par)
                {
                  tamanho_par = aux_par;
                  novo_vetor =(int *) realloc(vetor_par,sizeof(int) * tamanho_par);
                  vetor_par = novo_vetor;   
                }
                /*adicionando o numero no vetor par*/
                vetor_par[aux_par -1] = vetor[i];
          }
        /*numero impar*/
        else
          {
           aux_impar += 1;
           /*realocando vetor (caso precise)*/
           if(aux_impar > tamanho_impar)
               {
                 tamanho_impar = aux_impar;
                 novo_vetor = (int *) realloc(vetor_impar,sizeof(int) * tamanho_impar);
                 vetor_impar = novo_vetor;
               }  
           /*Adicionando numero no vetor*/
           vetor_impar[aux_impar - 1] = vetor[i];        
          }
     }

      /*imprimindo vetor par*/
     printf("Os elementos pares do vetor são:\n");
     for(i = 0; i < aux_par; i++)
        {
            printf("%d\n", vetor_par[i]);
        }
        
      /*imprimindo vetor impar*/
     printf("Os elementos pares do vetor são:\n");
     for(i = 0; i < aux_impar; i++)
        {
            printf("%d\n", vetor_impar[i]);
        }         
}
