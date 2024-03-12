int func(float f)
{
    if (f < 0)
        return -1;
    // else if (f == 0)
    else if (fabs(f - 0) <= 1e-6)
        return 0;
    else
        return 1;
}