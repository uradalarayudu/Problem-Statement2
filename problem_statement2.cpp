#include <stdio.h>
int main() 
{
    // Define parameters
    int averageConsumption = 400; // Average monthly consumption in units
    int gridLimit = 200;           // Limit for grid usage to avail free electricity
    int gridCostPerUnit = 12;     // Cost per unit if exceeding grid limit
    int alternativeSourceCost = 15; // Cost per unit of alternative energy source
    int partOfNeeds;               // Amount of energy to be sourced from alternative energy
    // Calculating the maximum amount of energy that can be used from the grid
    int maxGridUsage = averageConsumption - gridLimit;
    // when we use the gird limit then  they need to use alternative energy
    if (maxGridUsage > 0) 
	{
        printf("Enter the amount of energy you want to source from the alternative energy (up to %d units): ", maxGridUsage);
        scanf("%d", &partOfNeeds);
        // we does not exceed the maximum allowed usage from the alternative source
        if (partOfNeeds > maxGridUsage) 
		{
            printf("You cannot use more than %d units from the alternative source.\n", maxGridUsage);
            return 1;
        }
        // Calculating the  total consumption after using alternative source
        int totalConsumption = averageConsumption - partOfNeeds;
        // Calculating costs
        int costFromGrid = (totalConsumption > gridLimit) ? (totalConsumption - gridLimit) * gridCostPerUnit : 0;
        int costFromAlternative = partOfNeeds * alternativeSourceCost;
        // Total cost incurred using alterantive energy
        int totalCost = costFromGrid + costFromAlternative;
        printf("Total cost incurred using alternate energy: Rs. %d\n", totalCost);
        // without using alternative energy then the original cost
        int originalCost = averageConsumption * gridCostPerUnit;   
        printf("Total cost without alternative energy is %d.\n", originalCost);
        int savings = originalCost - totalCost;  // after using alternative energy then saving will dispalyed
        printf("You save Rs. %d by using alternative energy.\n", savings);  
    } 
	else
	{
        printf("You are already within the grid limit. No need for alternative energy.\n");
    }
    return 0;
}
