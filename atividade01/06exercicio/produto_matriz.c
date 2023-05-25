void calcular_produto(float matriz_1[2][3],float  matriz_2[3][2])
{
    /*variaveis*/
    int i, j, k, auxiliar, calculo;
    float matriz_produto[2][2];
    
    /*inicializando variavel*/
    calculo = 0;
   
     /*percorrendo os duas matrizes*/   
    for(i = 0; i < 2; i++)
    {
        auxiliar = 0;

        for(k = 0; k < 2; k++)
        {   
            calculo = 0;
            /*percorrendo a coluna da primeira  matriz e a linha do segundo*/
            for(j = 0; j < 3; j++)
            { 
              calculo += ( matriz_1[i][j] * matriz_2[j][k] );
             }
            /*adicionando elemento  na matriz*/
            matriz_produto[i][auxiliar] = calculo;
            auxiliar += 1;
             }
        
    }

      /*print dos elementos*/
      printf("o produto da matriz A e B é:\n[ ");

      for(i = 0; i < 2; i++)
      { 
        
        if(i == 1){
        printf("]\n[ ");
        }

        for(j = 0; j < 2; j++)
        { 
          printf("%.2f ", matriz_produto[i][j]);    
        }
        
      }
      printf("]\n");
}
