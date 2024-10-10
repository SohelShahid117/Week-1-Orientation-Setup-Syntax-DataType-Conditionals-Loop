int totalMoney;
    scanf("%d",&totalMoney);
    if(totalMoney>=1 && totalMoney<=5000){
        if(totalMoney>=1000){
            printf("Three Kacchi\n");
        }
        else if(totalMoney>=500){
            printf("One Large Pizza\n");
        }
        else if(totalMoney>=250 && totalMoney<500){
            printf("Three Small Burger\n");
        }
        else if(totalMoney>=100)
        {
            printf("Three Fuchka\n");
        }
        else{
            printf("Nothing");
        }

    }