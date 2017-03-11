class Ball
{
    public: static int maxBall(int v0)
    {
        float f, max = -1;
        for (int t = 0; t < v0; t++) {
            f = ((v0 * 10.0 / 36.0) * (t / 10.0)) - (0.5 * 9.81 * (t / 10.0) * (t / 10.0));
            if (f > max)
                max = f;
            else
                return t - 1;
        }
    };
};

