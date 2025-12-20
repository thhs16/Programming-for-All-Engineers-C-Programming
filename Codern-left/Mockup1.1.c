// Name : Thae Htape Htar San
// ID : 68070503468
// PURPOSE : Find a pair whose product is close to 0

#include <stdio.h>

        int main(){

                int n;

                        scanf(" %d", &n);

                int num[n];

                int product;
                int pairRecordedIndexes[2]; // 2 is the size not the max index

                        for (int i = 0;         i < n;          i++)
                        {
                                // scanf will automatically skip the spaces in the sentence and only read the number
                                scanf("%d", &num[i]);
                                // printf(" ");
                        }

                        // Operation
                        for (int i = 0;         i < n;          i++)
                        {
                                for (int j = 0;         j < n;          j++)
                                {
                                        if( i==0 && j==0 )
                                                {
                                                        product = num[i] + num[j];
                                                        pairRecordedIndexes[0] = num[i];
                                                        pairRecordedIndexes[1] = num[j];
                                                }

                                        if(j != i)
                                        {       
                                                
                                                // printf("%d\n", product);
                                                // printf("{%d,%d}\n", pairRecordedIndexes[0], pairRecordedIndexes[1]);
                                                if(product == 0){

                                                        break;
                                                }else{
                                                        int tempProduct = num[i] + num[j];

                                                        if( abs(tempProduct) >= abs(product) ){
                                                                pairRecordedIndexes[0] = num[i];
                                                                pairRecordedIndexes[1] = num[j];
                                                        }
                                                         
                                                }
                                        }
                                        
                                }
                        }

                        printf("%d %d", pairRecordedIndexes[0], pairRecordedIndexes[1]);

                        // Testing
                        // printf("%d", n);

                        // for (int i = 0;         i < n;          i++)
                        // {
                        //         printf("%d", num[i]);
                        //         printf(" ");
                        // }
                        
                return 0;
        }