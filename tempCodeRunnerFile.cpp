int main() {
    unsigned a, b, gcd, lcm;
    printf( "Nhap cap (a, b): " );
    scanf( "%u%u", &a, &b );

    gcd = a;
    while ( a % gcd || b % gcd ) {
        gcd--;
    }
    printf( "USCLN (a, b): %u\n", gcd );

    lcm = a;
    while ( lcm % a || lcm % b ) {
        lcm++;
    }
    printf( "BSCNN (a, b): %u\n", lcm );
    
    return 0;
}