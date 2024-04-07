import random
import numpy as np
import matplotlib.pyplot as plt
def geometric_pmf(x, p):
    return (1-p)**(x - 1) * p

def geometric_cdf(x, p):
    return 1 - (1-p)**x

def generate_geometric(p, size):
    random_variables = []
    for i in range(size):
        trials = 1
        while random.random() > p:
            trials += 1
        random_variables.append(trials)
    return random_variables

def expectationvalue(p):
    return 1/p
def variance(p):
    return (1/p)/(p**2)



p=float(input("Enter the probability of success(must be within 0--->1)"))
random_variables = generate_geometric(p,1000)
unique_values,counts=np.unique(random_variables,return_counts=True)#note that the unique function in numpy sort the random variables ascendingly which is very important in calculating the cdf of this function

pmf_values = [geometric_pmf(x, p) for x in unique_values] #set of pmf values
cdf_values = [geometric_cdf(x, p) for x in unique_values] #set of cdf values

print(("the expected value is "),expectationvalue(p),"while the variance is ",variance(p))
# print(pmf_values)
plt.suptitle("Geomtric distrubution")
plt.subplot(1,2,2).title.set_text("Probability mass function")
plt.bar(unique_values,pmf_values,align="center",alpha=0.7,width=0.5)
plt.subplot(1,2,1).title.set_text("Cumulative distribution function")

plt.bar(unique_values,cdf_values,align="center",alpha=0.7,width=0.5)
plt.xlabel('Number of trials')
plt.ylabel('Probability')
plt.show()
