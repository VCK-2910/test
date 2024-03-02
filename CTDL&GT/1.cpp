#include<iostream>
using namespace std;
struct Nhanvien
{
    char ten[50], msv[50];
    int namct;
    float hesoluong;
    void nhap();
    void in();

};

void Nhanvien ::nhap() {
    printf("Nhap ma sinh vien: ");
    gets(msv);
    printf("Nhap ten sinh vien: ");
    gets(ten);
    printf("nhap nam cong tac: ");
    scanf("%d",&namct);
    printf("Nhap he so luong: ");
    scanf("%f",&hesoluong);
    fflush(stdin);
}

void Nhanvien ::in() {
    cout << msv << ", " << ten << ", " << namct << ", " << hesoluong << endl;
}

struct node {
    Nhanvien data;
    struct node *next;

};

typedef struct node node;

node *makenode(Nhanvien x){
    node *tmp = (node*)malloc(sizeof(node));
    if(tmp == NULL) {
        printf("khong du bo nho\n");
        return NULL;
    }
    tmp->data = x;
    tmp->next = NULL;
    return tmp; 
} 

struct List {
    node* head = NULL;
    node* tail = NULL;
};

void Xoadau(List &a) {
    if(a.head == NULL){
        printf("khong con phan tu nao\n");
    } else {
        node *p= a.head;
        a.head = a.head->next;
        p->next = NULL;
        free(p);
    }

}

void Xuat(List a) {
    while(a.head != NULL){
        a.head->data.in();
        a.head = a.head->next;
    }
}



int main() {
    List a;
    Nhanvien n1;
    n1.nhap();
    Xuat(a);
    return 0;
}