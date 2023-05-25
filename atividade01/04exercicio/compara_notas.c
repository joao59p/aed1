void aprovados (float *vetor)
{
    int i;
    int alunos_aprovados;
    
    alunos_aprovados = 0;    

    for(i = 0; i < 10; i++)
    {
        if(vetor[i] >= 7.0)
         {
            alunos_aprovados += 1; 
         }
    }

    printf("A quantidade de alunos aprovados foi: %d\n", alunos_aprovados);

}


