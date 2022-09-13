def gcd(p, q):
    """
    this uses euclid GCD algo to calculate the gcd of two numbers recursively
    """
    if q == 0:
        return p
    else:
        return gcd(q, p % q)



def main():
    """
    this main does not ask for input but instead just runs on two numbers
    """
    print("running gcd(1845,102465)")
    print("result: ", gcd(1845, 102465))
    print("end")


if __name__ == "__main__":
    main()
