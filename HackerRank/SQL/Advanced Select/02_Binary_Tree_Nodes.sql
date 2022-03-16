SELECT N, case  when p is null then  'Root'
                when n not in(select p from BST where  P is not null  group by p) then 'Leaf' 
                 else 'Inner' end 
                 
            from BST order by N asc;