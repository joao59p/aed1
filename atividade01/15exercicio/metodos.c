struct dma
{
    int dia;
    int mes;
    int ano;
};


int ano_bissexto(int ano)
{
    return ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 ==0);
}

int calcular_dias(struct dma data1, struct dma data2)
{
    int i;
    int data_dias = 0;
    int data_dias2 = 0;
    int diferenca_dias = 0;
    int mes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for(i = 1; i < data1.mes; i++)
    {
        data_dias += mes[i - 1];
    }

    data_dias += data1.dia;

    for(i = 1; i < data2.mes; i++)
    {
        data_dias2 += mes[i - 1];
    }
    data_dias2 += data2.dia;

    if(data1.ano == data2.ano)
    {
        diferenca_dias = data_dias2 - data_dias;
    }

    else
    {

        for(i = data1.ano; i < data2.ano; i++)
        {
            if(ano_bissexto(i) == 1)
            {
                diferenca_dias += 366;
             }
             else
             {
                diferenca_dias += 365;
             }
        }
    }

     diferenca_dias += (data_dias2 - data_dias);

    return diferenca_dias;
}
