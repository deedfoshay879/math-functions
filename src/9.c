float rand_float(void) {
    // Generate a random float between 0 and 1
    return ((float)(rand() % 100)) / 100.0;
}

double rand_double(void) {
    // Generate a random double between 0 and 1
    return ((double)(rand() % 100)) / 100.0;
}
