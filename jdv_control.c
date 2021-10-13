void jogoDaVida();


void jogoDaVida()
{
    int o;
    while(o!=0)
    {
        o=menu();
        switch(o)
        {
            case 1:
                geraMundo();
                break;
            
            case 2:
                break;
            
            case 3:
                break;
            
            case 4:
                break;
            
            case 5:
                break;
            
            case 6:
                break;
            
            case 0:
                break;
            
        }
    }
}

void geraMundo()
{
    int i, k, tam, j=0;
    
    printf("Escolha o tamanho do mundo (maximo: 100): ");
    scanf("%d", &tam);
    
    for(i=0;i<=tam;i++)
        printf("%2.d", j);

    for(i=0;i<=tam;i++)
    {
        for(k=;k<=tam;k++)
        {
            
        }
}