#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS"); //����������� �����������
    //��������� ����������
    double h; 
    double A_deg; 
    double k; 
    //���� ������ ������������
    printf("������ ����� (�): "); //�������� ������ ����� � ������
    scanf("%lf", &h); 

    printf("���� ������� (�������): "); //�������� ���� ������� � �������� 
    scanf("%lf", &A_deg);

    printf("����������� ������: "); //�������� ������������ ������
    scanf("%lf", &k);
    //����������
    double A_rad = A_deg * 3.14159 / 180.0; //������� ���������� ��� ���� � �������� � ��������� ���� � ��������
    double L = h / (sin(A_rad) - k * cos(A_rad)); //��������� ���� ����� (���������� L - ��������� ����)
    //����� ����������
    printf("����: %.2f �\n", L);

    return 0; //���������� ���������
}