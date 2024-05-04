def symmetric_difference(set1, set2):
    #first find union of both sets
    union_set = set1.union(set2)
    
    #then intersection
    intersection_set = set1.intersection(set2)
    
    #applying condition for finding unique elements between two sets 
    
    for element in union_set:
        if element not in intersection_set:
            symmetric_difference_set.add(element)
    return symmetric_difference_set


set1 = {1, 2, 3, 4, 4, 8, 10}
set2 = {3, 4, 5, 6, 7, 8, 8, 9, 10}
symmetric_difference_set = symmetric_difference(set1, set2)
print(f"Symmetric difference of sets is : {symmetric_difference_set}")
