#include <stdio.h>
#include <stdlib.h>

int main()
{

    int boy, kilo;
    char cinsiyet;
    printf("Cinsiyetiniz:\nKadinsa x\nErkekse y giriniz.\n");
    scanf("%c",&cinsiyet);
    printf("Boyunuzu giriniz.\n");
    scanf("%d",&boy);
    printf("Kilonuzu giriniz.\n");
    scanf("%d",&kilo);

    switch(cinsiyet)
    {
    case 'x':
        switch(boy)
        {
        case 150 ... 159:
            if (kilo<=51 && kilo>=43)
                printf("Ideal kilodasiniz.");
            else if (kilo>51)
                printf("Ideal kilonun %d kilo ustundesiniz.", kilo-51);
            else
                printf("Ideal kilonun %d kilo altindasiniz.", 43-kilo);
        break;

        case 160 ... 169:
            if (kilo<=61 && kilo>=52)
                printf("Ideal kilodasiniz.");
            else if (kilo>61)
                printf("Ideal kilonun %d kilo ustundesiniz.", kilo-61);
            else
                printf("Ideal kilonun %d kilo altindasiniz.", 52-kilo);
        break;

        case 170 ... 179:
            if (kilo<=70 && kilo>=62)
                printf("Ideal kilodasiniz.");
            else if (kilo>70)
                printf("Ideal kilonun %d kilo ustundesiniz.", kilo-70);
            else
                printf("Ideal kilonun %d kilo altindasiniz.", 62-kilo);
        break;

        case 180 ... 189:
            if (kilo<=79 && kilo>=71)
                printf("Ideal kilodasiniz.");
            else if (kilo>79)
                printf("Ideal kilonun %d kilo ustundesiniz.", kilo-79);
            else
                printf("Ideal kilonun %d kilo altindasiniz.", 71-kilo);
        break;

        case 190 ... 199:
            if (kilo<=88 && kilo>=80)
                printf("Ideal kilodasiniz.");
            else if (kilo>88)
                printf("Ideal kilonun %d kilo ustundesiniz.", kilo-88);
            else
                printf("Ideal kilonun %d kilo altindasiniz.", 80-kilo);
        break;

        case 200 ... 210:
            if (kilo<=97 && kilo>=89)
                printf("Ideal kilodasiniz.");
            else if (kilo>97)
                printf("Ideal kilonun %d kilo ustundesiniz.", kilo-97);
            else
                printf("Ideal kilonun %d kilo altindasiniz.", 89-kilo);
        break;

        }
      break;

        case 'y':
        switch(boy)
        {
        case 150 ... 159:
            if (kilo<=56 && kilo>=48)
                printf("Ideal kilodasiniz.");
            else if (kilo>56)
                printf("Ideal kilonun %d kilo ustundesiniz.", kilo-56);
            else
                printf("Ideal kilonun %d kilo altindasiniz.", 48-kilo);
        break;

        case 160 ... 169:
            if (kilo<=65 && kilo>=57)
                printf("Ideal kilodasiniz.");
            else if (kilo>65)
                printf("Ideal kilonun %d kilo ustundesiniz.", kilo-65);
            else
                printf("Ideal kilonun %d kilo altindasiniz.", 57-kilo);
        break;

        case 170 ... 179:
            if (kilo<=74 && kilo>=66)
                printf("Ideal kilodasiniz.");
            else if (kilo>74)
                printf("Ideal kilonun %d kilo ustundesiniz.", kilo-74);
            else
                printf("Ideal kilonun %d kilo altindasiniz.", 66-kilo);
        break;

        case 180 ... 189:
            if (kilo<=83 && kilo>=75)
                printf("Ideal kilodasiniz.");
            else if (kilo>83)
                printf("Ideal kilonun %d kilo ustundesiniz.", kilo-83);
            else
                printf("Ideal kilonun %d kilo altindasiniz.", 75-kilo);
        break;

        case 190 ... 199:
            if (kilo<=92 && kilo>=84)
                printf("Ideal kilodasiniz.");
            else if (kilo>92)
                printf("Ideal kilonun %d kilo ustundesiniz.", kilo-92);
            else
                printf("Ideal kilonun %d kilo altindasiniz.", 84-kilo);
        break;

        case 200 ... 210:
            if (kilo<=101 && kilo>=93)
                printf("Ideal kilodasiniz.");
            else if (kilo>101)
                printf("Ideal kilonun %d kilo ustundesiniz.", kilo-101);
            else
                printf("Ideal kilonun %d kilo altindasiniz.", 93-kilo);
        break;

        }
    break;
    }
    return 0;
}
