father(jack, susan).
father(jack, ray).
father(david, liza). 
father(david, john). 
father(john, peter). 
father(john, mary). 
mother(karen, susan). 
mother(karen, ray). 
mother(amy, liza). 
mother(amy, john). 
mother(susan, peter). 
mother(susan, mary).

father(X,Y).
mother(A,B).
parent(X,Y):-father(X,Y);mother(X,Y).
grandfather(X,Z) :-father(X,Y),father(Y,Z);father(X,Y),mother(Y,Z).
grandmother(A,C) :- mother(A,B),mother(B,C);father(B,C).
greatgrandfather(X,Y):-(grandfather(X,Z);grandmother(X,Z)),father(Z,Y).
greatgrandmother(X,Y):-(grandmother(X,Z);grandfather(X,Z)),mother(Z,Y).