char get_grade(int a, int b, int c) {

    //  <----  hajime!
    // add three integers
    // divide by three
    // return letter grade
    int sum = (a+b+c)/3;
    
    if (sum >= 90 && sum <= 100)
    return ('A');
    else if (sum >= 80 && sum < 90)
    return ('B');
    else if (sum >= 70 && sum < 80)
    return ('C');
    else if (sum >= 60 && sum < 70)
    return ('D');
    else
    return ('F');
    
    return (0);

}