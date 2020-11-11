%john the thief
thief(rushi).
thief(john).
thief(viki).
likes(vini,tom).
likes(hema,kitty).
likes(john,snow).
likes(john,money).

may_steal(john,X):-thief(john),likes(john,X).