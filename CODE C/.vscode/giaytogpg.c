/*
    1. ĐỔI GIÂY QUA GIỜ/PHÚT/GIÂY
    2. ĐỔI NGÀY QUA NGÀY/THÁNG/NĂM - GIẢ SỬ 1 THÁNG CÓ 30 NGÀY
*/
#include <stdio.h>

int main()
{
    int iGiayin, iGio, iPhut, iGiayout;
    int iNgayin, iNgayout, iThang, iNam;
    do
    {
        printf("Moi ban nhap so giay : ");
        scanf("%d", &iGiayin);
    } while (iGiayin < 0 || iGiayin > 2591999);

    printf("so giay cua ban la %d ", iGiayin);
    iGio = iGiayin / 3600;
    iPhut = (iGiayin - iGio * 3600) / 60;
    iGiayout = iGiayin - iGio * 3600 - iPhut * 60;
    printf("\nGio: %d", iGio);
    printf("\nPhut: %d", iPhut);
    printf("\nGiay: %d", iGiayout);
    printf("\nKet qua: %dh/%d'/%d\" \n", iGio, iPhut, iGiayout);

    do
    {
        printf("Moi ban nhap so ngay : ");
        scanf("%d", &iNgayin);
    } while (iNgayin < 0 || iNgayin > 36499);

    printf("so ngay cua ban la %d ", iNgayin);
    iNam = iNgayin / 360;
    iThang = (iNgayin - iNam * 360) / 30;
    iNgayout = iNgayin - iNam * 360 - iThang * 30;
    printf("\nNgay: %d", iNgayout);
    printf("\nThang: %d", iThang);
    printf("\nNam: %d", iNam);
    printf("\nKet qua: %dh/%d'/%d\" \n", iNgayout, iThang, iNam);
    return 0;
}