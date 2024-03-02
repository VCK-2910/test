#include<iostream>
using namespace std;

struct Nhanvien {
    char ten[50], msv[50];
    int namct;
    float hesoluong;
    void nhap();
    void in();
};

void Nhanvien::nhap() {
    fflush(stdin);
    printf("Nhap ma sinh vien: ");
    gets(msv);
    printf("Nhap ten sinh vien: ");
    gets(ten);
    printf("nhap nam cong tac: ");
    scanf("%d",&namct);
    printf("Nhap he so luong: ");
    scanf("%f",&hesoluong);
    
}

void Nhanvien::in() {
    cout << msv << ", " << ten << ", " << namct << ", " << hesoluong << endl;
}

struct node {
    Nhanvien data;
    struct node *next;
};

typedef struct node node;

node *makenode(Nhanvien x){
    node *tmp = new node;
    if(tmp == NULL) {
        cout << "Khong du bo nho\n";
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

void ThemVaoCuoi(List &a, Nhanvien n) {
    node *newNode = makenode(n);
    if (a.head == NULL) {
        a.head = a.tail = newNode;
    } else {
        a.tail->next = newNode;
        a.tail = newNode;
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
    int n;
    cout << "Nhap so luong nhan vien: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        Nhanvien n1;
        n1.nhap();
        ThemVaoCuoi(a, n1);
    }

    Xuat(a);
    
    // Free allocated memory
    node *temp;
    while (a.head) {
        temp = a.head;
        a.head = a.head->next;
        delete temp;
    }

    return 0;
}
