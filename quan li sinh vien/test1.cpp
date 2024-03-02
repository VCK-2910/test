#include<conio.h>
#include<stdio.h>
#include <iostream>
#include <string.h>
#define MAX 100
using namespace std;
 
struct SinhVien {
    int id;
    int mSV;
    char ten[30];
    char lop[10];
    int nam_sinh;
    float diemTK = 0;
};
 
typedef SinhVien SV;
 
void printLine(int n);
void nhapThongTinSV(SV &sv, int id);
void nhapSV(SV a[], int id, int n);
void capNhatThongTinSV(SV &sv);
void capNhatSV(SV a[], int id, int n);
int xoaTheoID(SV a[], int id, int n);
void timKiemTheoTen(SV a[], char ten[], int n);
int idLonNhat(SV a[], int n);
void sapxepTheoDTK(SV a[], int n);
void sapxepTheoDTKlonhon5(SV a[], int n);
void sapXepTheoTen(SV a[], int n);
void showStudent(SV a[], int n);
void pressAnyKey();
 
int main() {
    int key;
    SV arraySV[MAX];
    int soluongSV = 0;
    int idCount = 0;
     
    // nhap danh sach sinh vien tu file
 
    while(true) {
        cout << "CHUONG TRINH QUAN LY SINH VIEN C/C++\n";
        cout << "*************************MENU**************************\n";
        cout << "**  1. Them sinh vien.                               **\n";
        cout << "**  2. Cap nhat thong tin sinh vien boi ID.          **\n";
        cout << "**  3. Xoa sinh vien boi ID.                         **\n";
        cout << "**  4. Tim kiem sinh vien theo ten.                  **\n";
        cout << "**  5. Sap xep sinh vien theo diem tong ket.         **\n";
        cout << "**  6. Sap xep sinh vien theo ten.                   **\n";
        cout << "**  7. Hien thi danh sach sinh vien.                 **\n";
        cout << "**  8. Danh sach sinh vien diem tong ket > 5.        **\n";
        cout << "**  0. Thoat                                         **\n";
        cout << "*******************************************************\n";
        cout << "Nhap tuy chon: ";
        cin >> key;
        switch(key){
            case 1:
                cout << "\n1. Them sinh vien.";
                idCount++;
                nhapSV(arraySV, idCount, soluongSV);
                printf("\nThem sinh vien thanh cong!");
                soluongSV++;
                pressAnyKey();
                break;
            case 2:
                if(soluongSV > 0) {
                    int id;
                    cout << "\n2. Cap nhat thong tin sinh vien. ";
                    cout << "\n Nhap ID: "; cin >> id;
                    capNhatSV(arraySV, id, soluongSV);
                }else{
                    cout << "\nSanh sach sinh vien trong!";
                }
                pressAnyKey();
                break;
            case 3:
                if(soluongSV > 0) {
                    int id;
                    cout << "\n3. Xoa sinh vien.";
                    cout << "\n Nhap ID: "; cin >> id;
                    if (xoaTheoID(arraySV, id, soluongSV) == 1) {
                        printf("\nSinh vien co id = %d da bi xoa.", &id);
                        soluongSV--;
                    }
                }else{
                    cout << "\nSanh sach sinh vien trong!";
                }
                pressAnyKey();
                break;
            case 4:
                if(soluongSV > 0) {
                    cout << "\n4. Tim kiem sinh vien theo ten.";
                    char strTen[30];
                    cout << "\nNhap ten de tim kiem: "; fflush(stdin); gets(strTen);
                    timKiemTheoTen(arraySV, strTen, soluongSV);
                }else{
                    cout << "\nSanh sach sinh vien trong!";
                }
                pressAnyKey();
                break;
            case 5:
                if(soluongSV > 0) {
                    cout << "\n5. Sap xep sinh vien theo diem tong ket.";
                    sapxepTheoDTK(arraySV, soluongSV);
                    showStudent(arraySV, soluongSV);
                }else{
                    cout << "\nSanh sach sinh vien trong!";
                }
                pressAnyKey();
                break;
            case 6:
                if(soluongSV > 0) {
                    cout << "\n6. Sap xep sinh vien theo ten.";
                    sapXepTheoTen(arraySV, soluongSV);
                    showStudent(arraySV, soluongSV);
                } else {
                    cout << "\nSanh sach sinh vien trong!";
                }
                pressAnyKey();
                break;
            case 7:
                if(soluongSV > 0){
                    cout << "\n7. Hien thi danh sach sinh vien.";
                    showStudent(arraySV, soluongSV);
                }else{
                    cout << "\nSanh sach sinh vien trong!";
                }
                pressAnyKey();
                break;
            case 8:
                if (soluongSV > 0) {
                    cout << "\n8. Danh sach sinh vien diem tong ket > 5.";
                    sapxepTheoDTKlonhon5(arraySV, soluongSV);
                } else {
                    cout << "\nSanh sach sinh vien trong!";
                }
                pressAnyKey();
                break;
            case 0:
                cout << "\nBan da chon thoat chuong trinh!";
                getch();
                return 0;
            default:
                cout << "\nKhong co chuc nang nay!";
                cout << "\nHay chon chuc nang trong hop menu.";
                pressAnyKey();
                break;
        }
    }
}

  
void nhapThongTinSV(SV &sv, int id) {
    cout << " \n Nhap MSV: "; cin >> sv.mSV;
    cout << " Nhap ten: "; fflush(stdin); gets(sv.ten);
    cout << " Nhap lop: "; cin >> sv.lop;
    cout << " Nhap nam sinh: "; cin >> sv.nam_sinh;
    cout << " Nhap diem tong ket:"; cin >> sv.diemTK;
    sv.id = id;
}
 
void nhapSV(SV a[], int id, int n) {
    printLine(40);
    printf("\n Nhap sinh vien thu %d:", n + 1);
    nhapThongTinSV(a[n], id);
    printLine(40);
}
 
void capNhatThongTinSV(SV &sv) {
    cout << " \n Nhap MSV: "; cin >> sv.mSV;
    cout << " Nhap ten: "; fflush(stdin); gets(sv.ten);
    cout << " Nhap lop: "; cin >> sv.lop;
    cout << " Nhap nam sinh"; cin >> sv.nam_sinh;
    cout << " Nhap diem tong ket"; cin >> sv.diemTK;
}
 
void capNhatSV(SV a[], int id, int n) {
    int found = 0;
    for(int i = 0; i < n; i++) {
        if (a[i].id == id) {
            found = 1;
            printLine(40);
            cout << "\n Cap nhat thong tin sinh vien co ID = " << id;
            capNhatThongTinSV(a[i]);
            printLine(40);
            break;
        }
    }
    if (found == 0) {
        printf("\n Sinh vien co ID = %d khong ton tai.", id);
    }
}
 
int xoaTheoID(SV a[], int id, int n) {
    int found = 0;
    for(int i = 0; i < n; i++) {
        if (a[i].id == id) {
            found = 1;
            printLine(40);
            for (int j = i; j < n; j++) {
                a[j] = a[j+1];
            }
            cout << "\n Da xoa SV co ID = " << id;
            printLine(40);
            break;
        }
    }
    if (found == 0) {
        printf("\n Sinh vien co ID = %d khong ton tai.", id);
        return 0;
    } else {
        return 1;
    }
}
 
void timKiemTheoTen(SV a[], char ten[], int n) {
    SV arrayFound[MAX];
    char tenSV[30];
    int found = 0;
    for(int i = 0; i < n; i++) {
        strcpy(tenSV, a[i].ten);
        if(strstr(strupr(tenSV), strupr(ten))) {
            arrayFound[found] = a[i];
            found++;
        }
    }
    showStudent(arrayFound, found);
}
 
void showStudent(SV a[], int n) {
    printLine(100);
    cout <<"\nSTT\tMSV\t       Ho va ten        \t  Lop   \tNam Sinh\tDiem tong ket";
    for(int i = 0; i < n; i++) {
        // in sinh vien thu i ra man hinh
        printf("\n %d", i + 1);
        printf("\t%d", a[i].mSV);
        printf("\t%s", a[i].ten);
        printf("\t\t%s", a[i].lop);
        printf("\t\t%d", a[i].nam_sinh);
        printf("\t%.2f", a[i].diemTK);
    }
    printLine(100);
}
  
void sapxepTheoDTK(SV a[], int n) {
    //Sap xep theo DTK tang dan
    SV tmp;
    for(int i = 0;i < n;i++) {
        for(int j = i+1; j < n;j++) {
            if(a[i].diemTK > a[j].diemTK) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

void sapxepTheoDTKlonhon5(SV a[], int n) {
    SV danhSachLonHon5[MAX];
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (a[i].diemTK > 5) {
            danhSachLonHon5[count] = a[i];
            count++;
        }
    }

    if (count > 0) {
        cout << "\nDanh sach sinh vien co diem tong ket lon hon 5:\n";
        showStudent(danhSachLonHon5, count);
    } else {
        cout << "\nKhong co sinh vien nao co diem tong ket lon hon 5.";
    }
}
 
void sapXepTheoTen(SV a[], int n) {
    //Sap xep sinh vien theo ten theo thu tu tang dan
    SV tmp;
    char tenSV1[30];
    char tenSV2[30];
    for(int i = 0;i < n; i++) {
        strcpy(tenSV1, a[i].ten);
        for(int j = i+1; j < n; j++) {
            strcpy(tenSV2, a[j].ten);
            if(strcmp(strupr(tenSV1), strupr(tenSV2)) > 0) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
 
int idLonNhat (SV a[], int n) {
    int idMax = 0;
    if (n > 0) {
        idMax = a[0].id;
        for(int i = 0;i < n; i++) {
            if (a[i].id > idMax) {
                idMax = a[i].id;
            }
        }
    }
    return idMax;
}
 
 
void printLine(int n) {
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << "_";
    }
    cout << endl;
}
 
void pressAnyKey() {
    cout << "\n\nBam phim bat ky de tiep tuc...";
    getch();
    system("cls");
}