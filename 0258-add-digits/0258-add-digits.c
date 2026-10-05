int addDigits(int num) {

    int sum, x;

    for (; num >= 10; ) {

        sum = 0;

        for (; num != 0; ) {

            x = num % 10;
            sum = sum + x;
            num = num / 10;
        }

        num = sum;
    }

    return num;
}