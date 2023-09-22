#define N 6


int NoOfWays(int n) {
    if (n <= 3 && n >= 0) {
        return 1;
    }
    return NoOfWays(n - 1) + NoOfWays(n - 4);
}

int main(){
    NoOfWays(N);
}