#pragma once

#include "Util.h"

const int MAXNCOLOR = 1000;
extern int nColor;                              // ��ɫ����
extern COLOR Colors[MAXNCOLOR];                 // ��ɫ��
extern BYTE ID[MAXNCOLOR], Data[MAXNCOLOR];     // MC����ID������

BOOL InputColors();
float GetDist(BYTE R1, BYTE G1, BYTE B1, BYTE R2, BYTE G2, BYTE B2);
int GetNearestColorIndex(COLOR ParamColor);
