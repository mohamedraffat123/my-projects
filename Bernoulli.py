import random
import matplotlib.pyplot as plt
import math as m
import numpy as np
p=0.7
def generate_Bernoulli(n):
  return [random.randint(0, 1) for _ in range(n)]

def Bernoulli_pmf(x,p):
  if x==0:
    return (1-p)
  else:
    return p
def Bernoulli_cdf(x, p):
    """
    Compute the Cumulative Distribution Function (CDF) of a Bernoulli distribution.

    Parameters:
    - x: The value for which to compute the CDF.
    - p: Probability of success in each trial.

    Returns:
    The probability that a Bernoulli random variable is less than or equal to x.
    """
    if x < 0:
        return 0
    elif x < 1:
        return 1 - (1 - p)
    else:
        return 1
def expectationvalue(p):
  return p
def variance(p):
  return p*(1-p)
random_variables = generate_Bernoulli(120)
x_values=np.sort(random_variables)
# print(x_values)
pmf_values=[Bernoulli_pmf(x,p) for x in random_variables]
cdf_values=[Bernoulli_cdf(x,p)for x in x_values]
print(("the expected value is "),expectationvalue(p),"while the variance is ",variance(p))
# print(pmf_values)
plt.suptitle("Bernoulli distrubution with p= "+str(p))
plt.subplot(1,2,2).title.set_text("Probability mass function")
plt.bar(random_variables,pmf_values,align="center",alpha=0.7,width=0.5)
plt.xlabel('Number of trials')
plt.ylabel('Probability')

plt.subplot(1,2,1).title.set_text("Cumulative distribution function")

plt.plot(x_values, cdf_values)
plt.xlabel('X')
plt.ylabel('CDF')

plt.show()
