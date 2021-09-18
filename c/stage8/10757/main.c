#include <stdio.h>
#include <string.h>

char* reverse(char* string){
    int n;

       n =  strlen(string);

       char temp[n+1];

            strcpy(temp,string);
            for (int i = 0; i < n; i++)
            {
                string[i] = temp[n - 1 - i];//배열 자리수 변환
            }

            return string;
}

 void Add_string(char* string1,char* string2)환
    int n1,n2,n_sum;
    char sum_string[10002];

        string1 = reverse(string1); //입력받은 배열 자리수 바꾸
        string2 = reverse(string2);기


        n1 = strlen(string1);
        n2 = strlen(string2);

                if(n1 == n2){//자리수가 같은 경우 각자릿수 더하기
                for (int i = 0; i < n1; i++)
                {
                    sum_string[i] = string1[i] + string2[i] - '0';
                }
                }


                    else if(n1 > n2) //자리수가 다를경우 각 자릿수 더하기
                        for (int i = 0; i < n2; i++)
                        {
                            sum_string[i] = string1[i] + string2[i] - '0';
                        }

                        for (int i = n2; i < n1; i++)
                        {
                        sum_string[i] = string1[i]; 
                        }
                    }


                        else if(n2 > n1){//자리수가 다를경우 각 자릿수 더하기
                            for (int i = 0; i < n1; i++)
                            {
                                sum_string[i] = string1[i] + string2[i] - '0';
                            }

                            for (int i = n1; i < n2; i++)
                            {
                            sum_string[i] = string2[i];환
                            }
                        }
                
        n_sum = strlen(sum_string);



            for (int i = 0; i < n_sum; i++)// 자릿수가 10 이 넘는것들은 다음 자릿수에 1 더해주기
            {
                if(sum_string[i] > '9'){
                    sum_string[i+1] += 1;
                    sum_string[i]-=10;
                }
            }

                    if(sum_string[n_sum] == 1)//첫번째 자리수가 올림 당할때 아스키코드로 변환
                        sum_string[n_sum] += '0';
                    
                        printf("%s\n",reverse(sum_string));//출력

           
}

int main(){
    char string1[10001];
    char string2[10001];


        scanf("%s %s",string1,string2);

        Add_string(string1,string2);

        return 0;
}