#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Ask for credit card number
    long num;
    do
    {
        num = get_long("Number: ");
    }
    while (num < 0);

    //Luhn algorithm for an AMEX credit card number starting with 34
    if (num >= 340000000000000 && num < 350000000000000)
    {
        //Pulls out each digit from the number given
        int r1 = num % 10;
        long a = num / 10;
        int s1 = a % 10;
        long b = a / 10;
        int r2 = b % 10;
        long c = b / 10;
        int s2 = c % 10;
        long d = c / 10;
        int r3 = d % 10;
        long e = d / 10;
        int s3 = e % 10;
        long f = e / 10;
        int r4 = f % 10;
        long g = f / 10;
        int s4 = g % 10;
        long h = g / 10;
        int r5 = h % 10;
        long i = h / 10;
        int s5 = i % 10;
        long j = i / 10;
        int r6 = j % 10;
        long k = j / 10;
        int s6 = k % 10;
        long l = k / 10;
        int r7 = l % 10;
        long m = l / 10;
        int s7 = m % 10;
        int r8 = m / 10;


        //Multiplies every other digit by 2 starting with the second to last digit.
        //If the product comes out to more than 10, the conditional statement takes out each of the digits and adds them together.

        //14th digit
        int s12 = s1 * 2;
        if (s12 >= 10)
        {
            s12 = (s12 % 10) + (s12 / 10);
        }

        //12th digit
        int s22 = s2 * 2;
        if (s22 >= 10)
        {
            s22 = (s22 % 10) + (s22 / 10);
        }

        //10th digit
        int s32 = s3 * 2;
        if (s32 >= 10)
        {
            s32 = (s32 % 10) + (s32 / 10);
        }

        //8th digit
        int s42 = s4 * 2;
        if (s42 >= 10)
        {
            s42 = (s42 % 10) + (s42 / 10);
        }

        //6th digit
        int s52 = s5 * 2;
        if (s52 >= 10)
        {
            s52 = (s52 % 10) + (s52 / 10);
        }

        //4th digit
        int s62 = s6 * 2;
        if (s62 >= 10)
        {
            s62 = (s62 % 10) + (s62 / 10);
        }

        //2nd digit
        int s72 = s7 * 2;
        if (s72 >= 10)
        {
            s72 = (s72 % 10) + (s72 / 10);
        }


        //Adds together the digits from the last step with the rest of the numbers not used
        int ssum = s12 + s22 + s32 + s32 + s42 + s52 + s62 + s72;
        int tot = ssum + r1 + r2 + r3 + r4 + r5 + r6 + r7 + r8;


        //Checks if the last digit is '0' and, if so, will produce 'AMEX'. If not, will produce 'INVALID'.
        if (tot % 10 == 0)
        {
            printf("AMEX\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }

    //Luhn algorithm for an AMEX credit card number starting with 37
    else if (num >= 370000000000000 && num < 380000000000000)
    {
        //Pulls out each digit from the number given
        int r1 = num % 10;
        long a = num / 10;
        int s1 = a % 10;
        long b = a / 10;
        int r2 = b % 10;
        long c = b / 10;
        int s2 = c % 10;
        long d = c / 10;
        int r3 = d % 10;
        long e = d / 10;
        int s3 = e % 10;
        long f = e / 10;
        int r4 = f % 10;
        long g = f / 10;
        int s4 = g % 10;
        long h = g / 10;
        int r5 = h % 10;
        long i = h / 10;
        int s5 = i % 10;
        long j = i / 10;
        int r6 = j % 10;
        long k = j / 10;
        int s6 = k % 10;
        long l = k / 10;
        int r7 = l % 10;
        long m = l / 10;
        int s7 = m % 10;
        int r8 = m / 10;


        //Multiplies every other digit by 2 starting with the second to last digit.
        //If the product comes out to more than 10, the conditional statement takes out each of the digits and adds them together.

        //14th digit
        int s12 = s1 * 2;
        if (s12 >= 10)
        {
            s12 = (s12 % 10) + (s12 / 10);
        }

        //12th digit
        int s22 = s2 * 2;
        if (s22 >= 10)
        {
            s22 = (s22 % 10) + (s22 / 10);
        }

        //10th digit
        int s32 = s3 * 2;
        if (s32 >= 10)
        {
            s32 = (s32 % 10) + (s32 / 10);
        }

        //8th digit
        int s42 = s4 * 2;
        if (s42 >= 10)
        {
            s42 = (s42 % 10) + (s42 / 10);
        }

        //6th digit
        int s52 = s5 * 2;
        if (s52 >= 10)
        {
            s52 = (s52 % 10) + (s52 / 10);
        }

        //4th digit
        int s62 = s6 * 2;
        if (s62 >= 10)
        {
            s62 = (s62 % 10) + (s62 / 10);
        }

        //2nd digit
        int s72 = s7 * 2;
        if (s72 >= 10)
        {
            s72 = (s72 % 10) + (s72 / 10);
        }


        //Adds together the digits from the last step with the rest of the numbers not used
        int ssum = s12 + s22 + s32 + s42 + s52 + s62 + s72;
        int tot = ssum + r1 + r2 + r3 + r4 + r5 + r6 + r7 + r8;


        //Checks if the last digit is '0' and, if so, will produce 'AMEX'. If not, will produce 'INVALID'.
        if (tot % 10 == 0)
        {
            printf("AMEX\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }

    //Luhn algorithm for a MASTERCARD credit card number
    else if (num >= 5100000000000000 && num < 5600000000000000)
    {
        //Pulls out each digit from the number given
        int r1 = num % 10;
        long a = num / 10;
        int s1 = a % 10;
        long b = a / 10;
        int r2 = b % 10;
        long c = b / 10;
        int s2 = c % 10;
        long d = c / 10;
        int r3 = d % 10;
        long e = d / 10;
        int s3 = e % 10;
        long f = e / 10;
        int r4 = f % 10;
        long g = f / 10;
        int s4 = g % 10;
        long h = g / 10;
        int r5 = h % 10;
        long i = h / 10;
        int s5 = i % 10;
        long j = i / 10;
        int r6 = j % 10;
        long k = j / 10;
        int s6 = k % 10;
        long l = k / 10;
        int r7 = l % 10;
        long m = l / 10;
        int s7 = m % 10;
        long n = m / 10;
        int r8 = n % 10;
        int s8 = n / 10;


        //Multiplies every other digit by 2 starting with the second to last digit.
        //If the product comes out to more than 10, the conditional statement takes out each of the digits and adds them together.

        //15th digit
        int s12 = s1 * 2;
        if (s12 >= 10)
        {
            s12 = (s12 % 10) + (s12 / 10);
        }

        //13th digit
        int s22 = s2 * 2;
        if (s22 >= 10)
        {
            s22 = (s22 % 10) + (s22 / 10);
        }

        //11th digit
        int s32 = s3 * 2;
        if (s32 >= 10)
        {
            s32 = (s32 % 10) + (s32 / 10);
        }

        //9th digit
        int s42 = s4 * 2;
        if (s42 >= 10)
        {
            s42 = (s42 % 10) + (s42 / 10);
        }

        //7th digit
        int s52 = s5 * 2;
        if (s52 >= 10)
        {
            s52 = (s52 % 10) + (s52 / 10);
        }

        //5th digit
        int s62 = s6 * 2;
        if (s62 >= 10)
        {
            s62 = (s62 % 10) + (s62 / 10);
        }

        //3rd digit
        int s72 = s7 * 2;
        if (s72 >= 10)
        {
            s72 = (s72 % 10) + (s72 / 10);
        }

        //1st digit
        int s82 = s8 * 2;
        if (s82 >= 10)
        {
            s82 = (s82 % 10) + (s82 / 10);
        }


        //Adds together the digits from the last step with the rest of the numbers not used
        int ssum = s12 + s22 + s32 + s42 + s52 + s62 + s72 + s82;
        int tot = ssum + r1 + r2 + r3 + r4 + r5 + r6 + r7 + r8;


        //Checks if the last digit is '0' and, if so, will produce 'AMEX'. If not, will produce 'INVALID'.
        if (tot % 10 == 0)
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }


    //Luhn algorithm for a VISA credit card number with 13 digits
    else if (num >= 4000000000000 && num < 5000000000000)
    {
        //Pulls out each digit from the number given
        int r1 = num % 10;
        long a = num / 10;
        int s1 = a % 10;
        long b = a / 10;
        int r2 = b % 10;
        long c = b / 10;
        int s2 = c % 10;
        long d = c / 10;
        int r3 = d % 10;
        long e = d / 10;
        int s3 = e % 10;
        long f = e / 10;
        int r4 = f % 10;
        long g = f / 10;
        int s4 = g % 10;
        long h = g / 10;
        int r5 = h % 10;
        long i = h / 10;
        int s5 = i % 10;
        long j = i / 10;
        int r6 = j % 10;
        long k = j / 10;
        int s6 = k % 10;
        int r7 = k / 10;


        //Multiplies every other digit by 2 starting with the second to last digit.
        //If the product comes out to more than 10, the conditional statement takes out each of the digits and adds them together.

        //12th digit
        int s12 = s1 * 2;
        if (s12 >= 10)
        {
            s12 = (s12 % 10) + (s12 / 10);
        }

        //10th digit
        int s22 = s2 * 2;
        if (s22 >= 10)
        {
            s22 = (s22 % 10) + (s22 / 10);
        }

        //8th digit
        int s32 = s3 * 2;
        if (s32 >= 10)
        {
            s32 = (s32 % 10) + (s32 / 10);
        }

        //6th digit
        int s42 = s4 * 2;
        if (s42 >= 10)
        {
            s42 = (s42 % 10) + (s42 / 10);
        }

        //4th digit
        int s52 = s5 * 2;
        if (s52 >= 10)
        {
            s52 = (s52 % 10) + (s52 / 10);
        }

        //2nd digit
        int s62 = s6 * 2;
        if (s62 >= 10)
        {
            s62 = (s62 % 10) + (s62 / 10);
        }


        //Adds together the digits from the last step with the rest of the numbers not used
        int ssum = s12 + s22 + s32 + s42 + s52 + s62;
        int tot = ssum + r1 + r2 + r3 + r4 + r5 + r6 + r7;


        //Checks if the last digit is '0' and, if so, will produce 'AMEX'. If not, will produce 'INVALID'.
        if (tot % 10 == 0)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }


    //Luhn algorithm for a VISA credit card number with 16 digits
    else if (num >= 4000000000000000 && num < 5000000000000000)
    {
        //Pulls out each digit from the number given
        int r1 = num % 10;
        long a = num / 10;
        int s1 = a % 10;
        long b = a / 10;
        int r2 = b % 10;
        long c = b / 10;
        int s2 = c % 10;
        long d = c / 10;
        int r3 = d % 10;
        long e = d / 10;
        int s3 = e % 10;
        long f = e / 10;
        int r4 = f % 10;
        long g = f / 10;
        int s4 = g % 10;
        long h = g / 10;
        int r5 = h % 10;
        long i = h / 10;
        int s5 = i % 10;
        long j = i / 10;
        int r6 = j % 10;
        long k = j / 10;
        int s6 = k % 10;
        long l = k / 10;
        int r7 = l % 10;
        long m = l / 10;
        int s7 = m % 10;
        long n = m / 10;
        int r8 = n % 10;
        int s8 = n / 10;


        //Multiplies every other digit by 2 starting with the second to last digit.
        //If the product comes out to more than 10, the conditional statement takes out each of the digits and adds them together.

        //15th digit
        int s12 = s1 * 2;
        if (s12 >= 10)
        {
            s12 = (s12 % 10) + (s12 / 10);
        }

        //13th digit
        int s22 = s2 * 2;
        if (s22 >= 10)
        {
            s22 = (s22 % 10) + (s22 / 10);
        }

        //11th digit
        int s32 = s3 * 2;
        if (s32 >= 10)
        {
            s32 = (s32 % 10) + (s32 / 10);
        }

        //9th digit
        int s42 = s4 * 2;
        if (s42 >= 10)
        {
            s42 = (s42 % 10) + (s42 / 10);
        }

        //7th digit
        int s52 = s5 * 2;
        if (s52 >= 10)
        {
            s52 = (s52 % 10) + (s52 / 10);
        }

        //5th digit
        int s62 = s6 * 2;
        if (s62 >= 10)
        {
            s62 = (s62 % 10) + (s62 / 10);
        }

        //3rd digit
        int s72 = s7 * 2;
        if (s72 >= 10)
        {
            s72 = (s72 % 10) + (s72 / 10);
        }

        //1st digit
        int s82 = s8 * 2;
        if (s82 >= 10)
        {
            s82 = (s82 % 10) + (s82 / 10);
        }


        //Adds together the digits from the last step with the rest of the numbers not used
        int ssum = s12 + s22 + s32 + s42 + s52 + s62 + s72 + s82;
        int tot = ssum + r1 + r2 + r3 + r4 + r5 + r6 + r7 + r8;


        //Checks if the last digit is '0' and, if so, will produce 'AMEX'. If not, will produce 'INVALID'.
        if (tot % 10 == 0)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }

    //If number doesn't meet any of the above conditions
    else
    {
        printf("INVALID\n");
    }
}