#include <stdio.h>
#include <string.h>

void main(void)
{
    char buf[]="abcdefghijklmnopqrstuvwxyz";    // 初期文字列
    char ans[100]={0};  // 答えの初期化
    char a[100]={0};
    char b[100]={0};
    printf("変換したい文字列を入力");
    scanf("%s",&a); // 処理手順②
    printf("変換後の文字列を入力");
    scanf("%s",&b); // 処理手順③

    int k = 0;
    int buf_len = strlen(buf);  // 処理手順④
    int a_len = strlen(a);      // 処理手順⑤
    int b_len = strlen(b);      // 処理手順⑥
    
    for (int i = 0; i < buf_len; i++)   // 処理手順⑦
    {
        int count = 0;
        for (int j = 0; j < a_len; j++)
        {
            if (buf[i + j] != a[j])   // 処理手順⑧
                break;
            count++;
        }
        if (a_len == count)
        {   // 処理手順⑨
            for (int j = 0; j < b_len; j++)
            {
                ans[k++] = b[j];                
            }
            i += (a_len - 1);            
        }else
        {
            ans[k++] = buf[i];  // 処理手順⑩
        }
    }
    ans[k++] = '\0';            // 処理手順⑫
    printf("変換前：%s\n",buf); // 処理手順⑬
    printf("変換後：%s\n",ans);
}