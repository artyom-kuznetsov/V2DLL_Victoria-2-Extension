// FUN_00ae7ba0 @ 00ae7ba0 body=[[00ae7ba0, 00ae7c3a]]


int FUN_00ae7ba0(float param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  int *in_ECX;
  int *piVar6;
  uint uVar7;
  
  uVar4 = 0;
  if (in_ECX[1] != 0) {
    piVar1 = (int *)*in_ECX;
    piVar6 = piVar1;
    do {
      if (*(int *)(*piVar6 + 0x3c) == *(int *)(param_2 + 0x3c)) {
        if (uVar4 == 0xffffffff) {
          return 0;
        }
        uVar7 = 0;
        if (piVar1[uVar4 * 5 + 2] == 0) {
          return 0;
        }
        piVar6 = (int *)piVar1[uVar4 * 5 + 1];
        do {
          iVar2 = *piVar6;
          if (*(float *)(iVar2 + 8) <= param_1) {
            iVar5 = *(int *)(iVar2 + 0x10) + -1;
            fVar3 = (float)iVar5;
            if (iVar5 < 0) {
              fVar3 = fVar3 + 4.2949673e+09;
            }
            if (param_1 < fVar3 * *(float *)(param_2 + 0x90) + *(float *)(iVar2 + 8)) {
              return iVar2;
            }
          }
          uVar7 = uVar7 + 1;
          piVar6 = piVar6 + 1;
          if ((uint)piVar1[uVar4 * 5 + 2] <= uVar7) {
            return 0;
          }
        } while( true );
      }
      uVar4 = uVar4 + 1;
      piVar6 = piVar6 + 5;
    } while (uVar4 < (uint)in_ECX[1]);
  }
  return 0;
}

