void verificar_quadrado (int linha, int coluna, int matriz[linha][coluna])
{   
    /*variaveis*/
    int i, j;
    int principal_linha , principal_coluna;
    int secundario_linha, secundario_coluna;
    int soma_principal, soma_secundario;
    
    /*inicializando variaveis*/
    principal_linha = 0 ,principal_coluna = 0;
    secundario_linha = 0, secundario_coluna = coluna - 1;
    soma_principal = 0, soma_secundario = 0;

    for(i = 0; i < linha ; i ++)
    {

        for(j = 0; j < coluna; j++)
        {

            if(i == principal_linha && j == principal_coluna)
            {
                soma_principal += matriz[i][j];
            }

            if(i == secundario_linha && j == secundario_coluna)
            {
                soma_secundario += matriz[i][j];
            }

        }   
        
        /*ajustando a passagem na matriz*/   
        principal_linha += 1;
        principal_coluna += 1; 
        secundario_linha += 1;
        secundario_coluna -= 1;

    }
    
    if(soma_secundario == soma_principal)
    {
        printf("A matriz e um quadrado mágico.\n");
    }
    else
    {       
        printf("Essa matriz não e um quadrado mágico.\n");
    }

}
