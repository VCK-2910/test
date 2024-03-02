#include<conio.h>
#include<stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

string board[9] = {" ", " ", " ", " ", " ", " ", " ", " ", " "};
char player = 'X';
int position;

void pressAnyKey() {
    cout << "\n\nBam phim bat ky de tiep tuc...";
    getch();
    system("cls");
}
//khoi tao bang
void draw()
{
    cout <<"       |       |       \n";
    cout <<"       |       |       \n";
    cout <<"_______|_______|_______\n";
    cout <<"       |       |       \n";
    cout <<"       |       |       \n";
    cout <<"_______|_______|_______\n";
    cout <<"       |       |       \n";
    cout <<"       |       |       \n";
    cout <<"       |       |       \n";
}

//xet truong hop thang
bool winner()
{
    bool winner = false;
    //thang theo hang ngang
    if((board[0] == board[1]) && (board[1] == board[2]) && board[0] != " "){
        winner = true;
    }
    else if((board[3] == board[4]) && (board[4] == board[5]) && board[3] != " "){
        winner = true;
    }
    else if((board[6] == board[7]) && (board[7] == board[8]) && board[6] != " "){
        winner = true;
    }
    //thang theo hang doc
    else if((board[0] == board[3]) && (board[3] == board[6]) && board[0] != " "){
        winner = true;
    }
    else if((board[1] == board[4]) && (board[4] == board[7]) && board[1] != " "){
        winner = true;
    }
    else if((board[2] == board[5]) && (board[5] == board[8]) && board[2] != " "){
        winner = true;
    }
    //thang theo hang cheo
    else if((board[0] == board[4]) && (board[4] == board[8]) && board[0] != " "){
        winner = true;
    }
    else if((board[2] == board[4]) && (board[4] == board[6]) && board[2] != " "){
        winner = true;
    } 
    return winner;
}

//xet truong hop bang duoc dien het nhung khong thang
bool fill()
{
    bool fill = true;
    for(int i = 0; i < 9; i++){
        if(board[i] == " ")
        fill = false;
    }
    return fill;
}

//nguoi choi nhap vi tri va xet vi tri da duoc dien hay chua
void input()
{
    int n;
    cout << "Nguoi choi " << player << " nhap " << player <<" vao vi tri (1-9): ";
    
    while (!(cin>>position))
    {
        cout << "nhap lai vi tri trong khoang (1-9):" << endl;
        cin.clear();
        cin.ignore();
    }
    while (board[position-1] != " ")
    {
        cout << "Vi tri da duoc dien. Thu lai!" << endl;
        cout << "Nguoi choi " << player << " nhap " << player <<" vao vi tri (1-9): ";
        cin >> position;
        cout << "\n";
    }
}

//cap nhat bang sau moi lan nguoi choi nhap vi tri 
void update_board()
{
    if(player == 'X'){
        board[position - 1] = 'X';
    }else{
        board[position - 1] = 'O';
    }
} 

//hien thi bang sau khi nguoi choi nhap vi tri
void update_draw()
{   
    system("cls");
    cout <<"       |       |       \n";
    cout <<"   "<< board[0] << "   |   " << board[1] << "   |   " << board[2] << "   \n";
    cout <<"_______|_______|_______\n";
    cout <<"       |       |       \n";
    cout <<"   "<< board[3] << "   |   " << board[4] << "   |   " << board[5] << "   \n";
    cout <<"_______|_______|_______\n";
    cout <<"       |       |       \n";
    cout <<"   "<< board[6] << "   |   " << board[7] << "   |   " << board[8] << "   \n";
    cout <<"       |       |       \n";

}

//ket thuc va doi luot nguoi choi sau khi nguoi choi da dien vi tri dung
void change_player()
{
    if(player == 'X'){
        player = 'O';
    } else player = 'X';
}

void choi_lai()
{   
    int lua_chon;
    cout << "\nBan co muon choi lai khong ?\n";
    cout << "1. Choi lai." << endl;
    cout << "2. Khong." << endl;
    cout << "Nhap lua chon: ";
    cin >> lua_chon;
    switch(lua_chon) {
        case 1:

            break;
        case 2:
            cout << "\nBan da chon thoat chuong trinh!";
            getch();
            break;
        default:
            cout << "\nKhong co chuc nang nay!";
            cout << "\nHay chon chuc nang trong hop menu.";
            pressAnyKey();
            break;
    }
    
    
}



int main(){
    draw();//khoi tao bang
    while (1)
    {
        input();//nguoi choi chon vi tri
        update_board();//cap nhat vi tri danh dau
        update_draw();//cap nhat bang vi tri danh dau
        //xet chien thang va hoa 
        if(winner()){
            //thong bao nguoi chien thang
            cout << "Chien thang danh cho nguoi choi danh " << player << " !" << endl;
            break;
        } else if (fill()){
            //thong bao hoa
            cout << "Hoa roi :(((" << endl;
            break;
        }
        change_player();
    }
    choi_lai();
    
    return 0;
}
