#include <stdio.h>
#include <stdlib.h>

// In bảng chơi
void inBang(char bang[3][3])
{
    printf("\n");
    for(int i = 0; i < 3; i++)
    {
        printf(" %c | %c | %c ", bang[i][0], bang[i][1], bang[i][2]);
        if(i < 2) printf("\n---|---|---\n");
    }
    printf("\n\n");
}

// Kiểm tra chiến thắng
int kiemTraThang(char bang[3][3], char kiTu)
{
    for(int i = 0; i < 3; i++)
    {
        if(bang[i][0] == kiTu && bang[i][1] == kiTu && bang[i][2] == kiTu) return 1;
        if(bang[0][i] == kiTu && bang[1][i] == kiTu && bang[2][i] == kiTu) return 1;
    }
    if(bang[0][0] == kiTu && bang[1][1] == kiTu && bang[2][2] == kiTu) return 1;
    if(bang[0][2] == kiTu && bang[1][1] == kiTu && bang[2][0] == kiTu) return 1;
    return 0;
}

int main()
{
    char bang[3][3] = {{'1','2','3'}, {'4','5','6'}, {'7','8','9'}};
    int turn = 1;
    int x, y;

    while(1)
    {
        inBang(bang);
        if(turn % 2 == 1)
        {
            printf("Player 1, nhap vi tri X (1-9): ");
        }
        else
        {
            printf("Player 2, nhap vi tri O (1-9): ");
        }
        scanf("%d", &x);
        x--;
        y = x % 3;
        x /= 3;

        if(bang[x][y] == 'X' || bang[x][y] == 'O')
        {
            printf("Vi tri nay da duoc chon roi. Vui long nhap lai.\n");
        }
        else
        {
            if(turn % 2 == 1)
            {
                bang[x][y] = 'X';
                if(kiemTraThang(bang, 'X'))
                {
                    inBang(bang);
                    printf("Chuc mung! Player 1 thang.\n");
                    break;
                }
            }
            else
            {
                bang[x][y] = 'O';
                if(kiemTraThang(bang, 'O'))
                {
                    inBang(bang);
                    printf("Chuc mung! Player 2 thang.\n");
                    break;
                }
            }

            if(turn == 9)
            {
                inBang(bang);
                printf("Hoa! Khong ai thang.\n");
                break;
            }

            turn++;
        }
    }

    return 0;
}
