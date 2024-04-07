import numpy as np
import random 
from math import comb
import matplotlib.pyplot as plt
p=0.5
n=10
def generate_binomial(n, p, num_samples):
    binomial_random_variables = []
    for _ in range(num_samples):
        successes = sum(1 for _ in range(n) if random.random() < p)
        binomial_random_variables.append(successes)
    return binomial_random_variables


def binomial_pmf(k, n, p):
    return comb(n, k) * (p ** k) * ((1 - p) ** (n - k))


def binomial_cdf(k, n, p):
    cdf_value = 0
    for i in range(k + 1):
        cdf_value += binomial_pmf(i, n, p)
    return cdf_value


def Expectation(n,p):
  return n*p
def Variance(n,p):
  return float(n)*p*(1-p)
random_variables=generate_binomial(n,p,100)
unique_values,counter=np.unique(random_variables,return_counts=True)
pmf_values=[binomial_pmf(k,n,p) for k in unique_values]
cdf_values=[binomial_cdf(k,n,p)for k in unique_values]
print(("the expected value is "),Expectation(n,p),"while the variance is ",Variance(n,p))

plt.suptitle("Binomial distrubution")
plt.subplot(1,2,1).title.set_text("Probability mass function")
plt.bar(unique_values,pmf_values,align="center",alpha=0.7,width=0.5)
plt.subplot(1,2,2).title.set_text("Cumulative distribution function")
plt.bar(unique_values,cdf_values,align="center",alpha=0.7,width=0.5)
plt.show()
