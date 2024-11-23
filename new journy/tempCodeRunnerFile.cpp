while (n > 0)
    {
        int remainder = n % 2;
        n = n / 2;
        arr.push_back(remainder);
    }