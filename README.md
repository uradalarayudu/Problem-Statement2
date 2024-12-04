# Problem-Statement2:                                                                                                                         
A residential user has a grid connection and has an average monthly consumption (Parameter1) of 400 units . He wants to limit using the grid (Parameter2) for 200 units to avail free electricity incentive from the government. If he crosses 200 units, he needs to pay Rs.12 per unit (Parameter3) for the total consumption. He found an alternative source of energy at Rs.15 per unit (Parameter4) and wanted to use it for part of his needs (Parameter5) to make his grid consumption remain under 200 units. Write a program to calculate the savings a user can derive based on the mentioned parameters.                                                                                                             
#solution:                                                                                                                                    
1. Define Parameters:                                                                                                                     
   averageConsumption: User’s total monthly energy requirement (400 units).                                                               
   gridLimit: Maximum grid consumption (200 units) allowed under the free electricity incentive.                                          
   gridCostPerUnit: Penalty cost per unit if grid consumption exceeds the limit.                                                          
   alternativeSourceCost: Cost per unit for using alternative energy.                                                                     
   partOfNeeds: Energy that the user will replace with alternative energy.                                                                
                                                                                                                                          
2. Calculate Maximum Grid Usage:                                                                                                          
   maxGridUsage determines how much of the user’s total energy consumption exceeds the grid limit (400 - 200 = 200 units).                
                                                                                                                                          
3. Ask User for Alternative Energy Usage:                                                                                                 
   If maxGridUsage > 0, the user’s energy usage exceeds the grid limit, so alternative energy is needed.                                  
   The user is prompted to specify how many units they want to source from the alternative energy.
                                                                                                                                          
4.Validate User Input:                                                                                                                    
   Ensures the user does not try to use more alternative energy than what exceeds the grid limit (maxGridUsage).                          
                                                                                                                                          
5.Calculate Costs:                                                                                                                        
   totalConsumption: Remaining energy consumption after subtracting the units covered by alternative energy.                              
   costFromGrid: Cost of grid electricity:                                                                                                
       If totalConsumption exceeds the grid limit, only the excess units are charged.                                                     
       Otherwise, the cost is 0 because the user stays within the free limit.                                                             
   costFromAlternative: Cost of using the specified units of alternative energy.                                                          
                                                                                                                                          
6.Total Cost and Savings:                                                                                                                 
   The totalCost is the sum of grid energy costs and alternative energy costs.                                                            
   originalCost: Cost if the user relied entirely on grid electricity.                                                                    
   savings: Difference between the original grid-only cost and the total cost after using alternative energy.                             
                                                                                                                                          
7.Handle Case Within Grid Limit:                                                                                                          
   If maxGridUsage <= 0, the user is already within the grid limit and doesn’t need to use alternative energy.                            

   
