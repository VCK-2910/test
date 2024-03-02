#include <stdio.h>
#include <stdlib.h>

struct Student {
    int ma_nghoc;
    char hoten_nghoc[50];
    float diemTriet;
    float diemAnh;
    float diemTinHoc;
};

// Hàm nhập danh sách n người học
void nhapDanhSach(struct Student *students, int n) {
    for (int i = 0; i < n; ++i) {
        printf("Nhap thong tin cho nguoi hoc thu %d:\n", i + 1);
        printf("Ma nguoi hoc: ", students[i].ma_nghoc);
        scanf("%d", &students[i].ma_nghoc);
        printf("Ho ten: ");
        fflush(stdin);
		gets(students[i].hoten_nghoc);
        printf("Diem triet: ");
        scanf("%f", &students[i].diemTriet);
        printf("Diem anh: ");
        scanf("%f", &students[i].diemAnh);
        printf("Diem tin hoc: ");
        scanf("%f", &students[i].diemTinHoc);
    }
}

// Hàm hiển thị thông tin của n người học và tổng điểm
void hienThiDanhSach(struct Student *students, int n) {
    printf("\nDanh sach thong tin nguoi hoc:\n");
    for (int i = 0; i < n; ++i) {
        float tongDiem = students[i].diemTriet + students[i].diemAnh + students[i].diemTinHoc;
        printf("Ma nguoi hoc: %d - Ho ten: %s - Tong diem: %.2f\n", students[i].ma_nghoc, students[i].hoten_nghoc, tongDiem);
    }
    
}

// Hàm hiển thị thông tin những người học có điểm triết > 6 và điểm tin học >= 8
void hienThiDanhSachDiemCao(struct Student *students, int n) {
    bool check = false;
    printf("\nDanh sach nguoi hoc co diem triet > 6 va diem tin hoc >= 8:\n");
    for (int i = 0; i < n; ++i) {
        if (students[i].diemTriet > 6 && students[i].diemTinHoc >= 8) {
            printf("Ma nguoi hoc: %d - Ho ten: %s - Diem triet: %.2f - Diem anh: %.2f - Diem tin hoc: %.2f \n", students[i].ma_nghoc, students[i].hoten_nghoc, students[i].diemTriet, students[i].diemAnh, students[i].diemTinHoc);
            check = true;
        } 
    }
    if(check == false){
        printf("Khong co nguoi hoc nao !\n");
    }
}

// Hàm hiển thị danh sách những người học có tổng điểm bằng x
void hienThiDanhSachDiemX(struct Student *students, int n, float x) {
    bool check = false;
    printf("Danh sach nguoi hoc co tong diem bang %.2f:\n", x);
    for (int i = 0; i < n; ++i) {
        float tongDiem = students[i].diemTriet + students[i].diemAnh + students[i].diemTinHoc;
        if (tongDiem == x) {
            printf("Ma nguoi hoc: %d - Ho ten: %s - Tong diem: %.2f\n", students[i].ma_nghoc, students[i].hoten_nghoc, tongDiem);
            check = true;
        } 
    }

    if(check == false){
        printf("Khong co nguoi hoc nao !\n");
    }
}

void nghocmontintu7den8(struct Student *students, int n){
    printf("Danh sach nguoi hoc co diem tin hoc tu 7 den 8:\n");
    for (int i = 0; i < n; ++i) {
        if (students[i].diemTinHoc >=7 && students[i].diemTinHoc <= 8) {
            printf("Ma nguoi hoc: %d - Ho ten: %s \n", students[i].ma_nghoc, students[i].hoten_nghoc);
        } 
    }
}
// Hàm ghi thông tin người học vào tập tin
void ghiThongTinVaoTapTin(struct Student *students, int n) {
    FILE *file = fopen("D:\\thisinh07.txt", "w");
    if (file == NULL) {
        printf("Khong the mo file de ghi.\n");
        return;
    } else {
        printf("\nGhi vao tep thanh cong !");
    }

    for (int i = 0; i < n; ++i) {
        fprintf(file, "Ma nguoi hoc: %d - Ho ten: %s - Diem triet: %.2f - Diem anh: %.2f - Diem tin hoc: %.2f\n",
                students[i].ma_nghoc, students[i].hoten_nghoc, students[i].diemTriet, students[i].diemAnh, students[i].diemTinHoc);
    }


    fclose(file);
}

int main() {
    int n;
    printf("Nhap so luong nguoi hoc: ");
    scanf("%d", &n);

    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));
    if (students == NULL) {
        printf("Khong du bo nho.\n");
        return 1;
    }

    nhapDanhSach(students, n);
    hienThiDanhSach(students, n);
    hienThiDanhSachDiemCao(students, n);

    float x;
    printf("\nNhap diem x: ");
    scanf("%f", &x);
    hienThiDanhSachDiemX(students, n, x);

    nghocmontintu7den8(students, n);

    ghiThongTinVaoTapTin(students, n);

    free(students);

    return 0;
}
