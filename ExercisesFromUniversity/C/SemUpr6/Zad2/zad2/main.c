#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "order.h"
#include "product.h"
#define MAX 50
int main()
{
    int productsCount = 0;
    char command[MAX];
    Product products[40];
    scanf("%s", command);
    while(strcmp(command, "END") != 0)
    {
        if(strcmp(command, "Product") == 0)
        {
            Product product;
            scanf("%s\n%lf\n%s", product.name, &product.price, product.productIdentifier);
            products[productsCount++] = product;
            printf("Product %s added!\n\n", product.name);

            scanf("%s", command);
        }

        else if(strcmp(command, "Order") == 0)
        {
            if(productsCount == 0)
            {
                printf("No products to order!\n");
                scanf("%s", command);
            }
            else
            {
                Order order;
                bool found = false;
                scanf("%s\n%s", order.clientAddress, order.productIdentifier);
                for(int i = 0; i < productsCount; i++)
                {
                    if(strcmp(order.productIdentifier, products[i].productIdentifier) == 0)
                    {
                        found = true;
                        break;
                    }
                }
                if(found)
                {
                    printf("Client %s ordered %s!\n\n", order.clientAddress, order.productIdentifier);
                }
                else
                {
                    printf("Product not avaliable! Client %s has to wait!\n\n", order.clientAddress);
                }
                scanf("%s", command);
            }
        }
        else
        {
            printf("Wrong command!\n");
            scanf("%s", command);
        }
    }
    return 0;
}
