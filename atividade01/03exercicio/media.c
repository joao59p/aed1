void  media ( float *vetor)
{
    float mediaf;
    int i;

    printf("As notas do aluno:\n");
    for(i = 0; i < 4; i++)
    {
        printf("Nota %d: %.2f \n", i + 1,vetor[i]);
        mediaf = mediaf + vetor[i];
    }

    printf("Media final do aluno: %.2f\n", mediaf / 4);   
 
}

