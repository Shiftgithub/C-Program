#include<stdio.h>
#include<math.h>
#define E 0.1
#define F(x) 2*x*x*x-2*x*x-5

int main()
{
    int i = 1;
    float x0,x1,x2,f0,f1,f2,z,root;

    printf("Enter the value of x1 : ");
    scanf("%f",&x1);
    printf("Enter the value of x2 : ");
    scanf("%f",&x2);

    while(1)
    {
        f1=F(x1);
        f2=F(x2);
        if((f1*f2)>E)
        {
            printf("Mathematical Error!!!");
            break;
        }
        else
        {
            i++;
            x0=x1-(f1*(x2-x1))/(f2-f1);
            f0=F(x0);
            printf("value of iterations %d is %f\n",i,x0);
            if((f1*f0)<0)
            {
                x2=x0;
            }
            else
            {
                x1=x0;
            }
        }
        z = fabs((x2-x1)/x2);
        printf("Value of Z is %f\n",z);

        if(fabs((x2-x1)/x2)<E)
        {
            root=(x1+x2)/2;
            printf("root is %f",root);
            break;
        }
    }

    return 0;
}
