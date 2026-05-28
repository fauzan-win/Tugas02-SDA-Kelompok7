





















void menuAdvanceSorting(void) {
    int pilih;
    do {
        printf("\n===== ADVANCE SORTING =====\n");
        printf("1. Merge Sort\n");
        printf("2. Quick Sort\n");
        printf("3. Shell Sort\n");
        printf("4. Kembali\n");
        printf("Pilih metode : ");
        scanf("%d", &pilih);

        if (pilih >= 1 && pilih <= 3)
            jalankanAdvanceSorting(pilih);
        else if (pilih != 4)
            printf("Pilihan tidak valid! Silakan pilih 1-4.\n");

    } while (pilih != 4);
}