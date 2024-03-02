#include <iostream>
#include <cstring>
using namespace std;

struct Nhanvien {
    char maNV[50];
    char hoTen[100];
    float heSoLuong;
    int namCongTac;
    Nhanvien* next;
};

Nhanvien* TaoNode(const char maNV[], const char hoTen[], float heSoLuong, int namCongTac) {
    Nhanvien* node = new Nhanvien;
    strcpy(node->maNV, maNV);
    strcpy(node->hoTen, hoTen);
    node->heSoLuong = heSoLuong;
    node->namCongTac = namCongTac;
    node->next = nullptr;
    return node;
}

void ThemVaoCuoi(Nhanvien*& head, Nhanvien*& tail, Nhanvien* node) {
    if (!head) {
        head = tail = node;
    } else {
        tail->next = node;
        tail = node;
    }
}

void ThemVaoDau(Nhanvien*& head, Nhanvien*& tail, Nhanvien* node) {
    if (!head) {
        head = tail = node;
    } else {
        node->next = head;
        head = node;
    }
}

void XuatDanhSach(Nhanvien* head) {
    cout << "Danh sach nhan vien:\n";
    while (head) {
        cout << "Ma NV: " << head->maNV << ", Ho ten: " << head->hoTen << ", He so luong: " << head->heSoLuong << ", Nam cong tac: " << head->namCongTac << endl;
        head = head->next;
    }
}

void ChenSauMaX(Nhanvien*& head, const char x[], Nhanvien* node) {
    Nhanvien* p = head;
    while (p) {
        if (strcmp(p->maNV, x) == 0) {
            node->next = p->next;
            p->next = node;
            return;
        }
        p = p->next;
    }
    cout << "Khong tim thay nhan vien co ma " << x << ". Vui long nhap lai." << endl;
    delete node;
}

int main() {
    Nhanvien* head = nullptr;
    Nhanvien* tail = nullptr;

    int n;
    cout << "Nhap so luong nhan vien: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        char maNV[50], hoTen[100];
        float heSoLuong;
        int namCongTac;
        cout << "Nhap ma NV: ";
        cin >> maNV;
        cout << "Nhap ho ten: ";
        cin.ignore();
        cin.getline(hoTen, 100);
        cout << "Nhap he so luong: ";
        cin >> heSoLuong;
        cout << "Nhap nam cong tac: ";
        cin >> namCongTac;

        ThemVaoDau(head, tail, TaoNode(maNV, hoTen, heSoLuong, namCongTac));
    }

    

    XuatDanhSach(head);

    // Giải phóng bộ nhớ
    

    return 0;
}
