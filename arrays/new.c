#include <stdio.h>

int main() 
{
    // Write C code here

    int n,r,sum=0;


    printf("enter the day of the month u were born:  \n");
    scanf("%d",&n);
    
    if ( n < 31)
    {
        printf("%d number of days does not exist in the month.\n", n);
        return 0;
    }

    while(n!=0)
    {  
        r=n%10;
        sum=sum+r;
        n=n/10;
    }  
    
    printf("according to your date ");


    switch (sum)
    {
        case 1 :printf("SURYA ☀️ Leadership individuality power ego authority");
            break;
        
        case 2:printf("CHANDRA 🌙 Emotions sensitivity intuition nurturing");
            break;
        case 3 :printf("🔱 JUPITER Wisdom, expansion optimism knowledge dharma ");
            break;
        case 4 :printf("♅ Rahu Innovation, unconventionality, illusion, desire ");
            break;
        case 5:printf(" ☿ Mercury (Budh) Communication, intellect, logic, adaptability");
            break;
        case 6:printf("♀ Venus (Shukra) Love, beauty, luxury, harmony, relationships");
            break;
        case 7:printf("☊ Ketu Detachment, spirituality, liberation, intuition");
            break;
        case 8:printf("♄ Saturn (Shani) Discipline, karma, structure, delay, endurance");
            break;
        case 9:printf("♂ Mars (Mangal) Action, aggression, energy, courage, passion ");
            break;
        case 10:printf("SURYA ☀️ Leadership individuality power ego authority");
            break;
        case 11 :printf("CHANDRA 🌙 Emotions  intuition nurturing");
            break;
        default:printf("invalid ");
    }

    return 0;
}