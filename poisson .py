import math
import random
import numpy as np
import matplotlib.pyplot as plt
lamda = 4  # Lambda (rate parameter of the Poisson distribution)
size = 10  # Number of random variables to generate
def generate_poisson_random_variables(lmbda, size):
    """
    Generate a list of random variables following a Poisson distribution.

    Parameters:
    - lmbda: The rate parameter of the Poisson distribution.
    - size: The number of random variables to generate.

    Returns:
    A list of Poisson-distributed random variables.
    """
    poisson_random_variables = []
    for _ in range(size):
        # Generate a Poisson-distributed random variable
        k = 0
        p = 1.0
        while True:
            k += 1
            p *= random.random()
            if p < math.exp(-lmbda):
                break
        poisson_random_variables.append(k - 1)
    return poisson_random_variables


def poisson_pmf(k, lam):
    """
    Calculate the Poisson Probability Mass Function (PMF).

    Parameters:
    - k: Number of events.
    - lam: Average rate of events.

    Returns:
    The probability of observing k events in a Poisson distribution.
    """
    return math.exp(-lam) * (lam ** k) / math.factorial(k)
from math import exp, factorial

def poisson_cdf(k, lambd):
    """
    Compute the Cumulative Distribution Function (CDF) of a Poisson distribution.

    Parameters:
    - k: The value at which to evaluate the CDF.
    - lambd: The average rate (mean) of the Poisson distribution.

    Returns:
    The probability that a Poisson-distributed random variable is less than or equal to k.
    """
    cdf_value = 0
    for i in range(k + 1):
        cdf_value += exp(-lambd) * (lambd ** i) / factorial(i)
    return cdf_value
def Expectation(lamda):
    return lamda

def variance(lamda):
    return lamda


random_variables = generate_poisson_random_variables(lamda, size)
unique_values,counts=np.unique(random_variables,return_counts=True)
#note that the unique function in numpy sort the random variables ascendingly which is very important in calculating the cdf of this distribution

pmf_values = [poisson_pmf(k, lamda) for k in unique_values] #set of pmf values
cdf_values = [poisson_cdf(k, lamda) for k in unique_values] #set of cdf values
print(("the expected value is "),Expectation(lamda),"while the variance is ",variance(lamda))

plt.suptitle("Poisson distrubution")
plt.subplot(1,2,2).title.set_text("Probability mass function")
plt.scatter(unique_values,pmf_values,alpha=1)
plt.subplot(1,2,1).title.set_text("Cumulative distribution function")

plt.plot(unique_values,cdf_values,alpha=1)
plt.show()
