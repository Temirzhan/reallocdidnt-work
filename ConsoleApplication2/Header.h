#pragma once
void SumProzMassiv(const int *Massiv, int *summ, int *proiz, int len);
void massivShow(int *Massiv, int len);
void SumProzMassivMnogomer(int *Massiv, int *summ, int *proiz, int len);
void random(int*Massiv, int len);
enum MyEnum { otr, pol, nul };
void MassivInd(int *Start, int*End, MyEnum);
void massivShowMnogomer(int *Massiv, int len, int len2);
int *MassiSrednee(int *Massiv, int len, int len2, int *chet, int *nechet, int *srednee);
int  MyCurs(int A, int B);