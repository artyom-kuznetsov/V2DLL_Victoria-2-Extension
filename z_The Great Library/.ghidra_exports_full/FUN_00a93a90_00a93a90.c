// FUN_00a93a90 @ 00a93a90 body=[[00a93a90, 00a93bfb]]


void FUN_00a93a90(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *in_ECX;
  undefined4 *in_EDX;
  int iVar6;
  
  iVar6 = 0;
  for (uVar1 = param_3; (int)uVar1 <= param_4; uVar1 = uVar1 + 1) {
    iVar3 = 0;
    if (0 < param_5) {
      do {
        if (*(byte *)(iVar3 + param_2) == uVar1) {
          *(int *)(param_1 + iVar6 * 4) = iVar3;
          iVar6 = iVar6 + 1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_5);
    }
  }
  iVar6 = 0;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  if (0 < param_5) {
    do {
      in_ECX[*(byte *)(iVar6 + param_2) + 1] = in_ECX[*(byte *)(iVar6 + param_2) + 1] + 1;
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_5);
  }
  iVar6 = 0xb;
  piVar5 = in_ECX;
  do {
    piVar4 = piVar5 + 2;
    piVar5[1] = piVar5[1] + *piVar5;
    *piVar4 = *piVar4 + piVar5[1];
    iVar6 = iVar6 + -1;
    piVar5 = piVar4;
  } while (iVar6 != 0);
  *in_EDX = 0;
  in_EDX[1] = 0;
  in_EDX[2] = 0;
  in_EDX[3] = 0;
  in_EDX[4] = 0;
  in_EDX[5] = 0;
  in_EDX[6] = 0;
  in_EDX[7] = 0;
  in_EDX[8] = 0;
  in_EDX[9] = 0;
  in_EDX[10] = 0;
  in_EDX[0xb] = 0;
  in_EDX[0xc] = 0;
  in_EDX[0xd] = 0;
  in_EDX[0xe] = 0;
  in_EDX[0xf] = 0;
  in_EDX[0x10] = 0;
  in_EDX[0x11] = 0;
  in_EDX[0x12] = 0;
  in_EDX[0x13] = 0;
  in_EDX[0x14] = 0;
  in_EDX[0x15] = 0;
  in_EDX[0x16] = 0;
  iVar6 = 0;
  if ((int)param_3 <= param_4) {
    piVar5 = in_ECX + param_3;
    iVar3 = (param_4 - param_3) + 1;
    do {
      piVar4 = piVar5 + 1;
      iVar2 = *piVar5;
      piVar5 = piVar5 + 1;
      iVar6 = iVar6 + (*piVar4 - iVar2);
      *(int *)((int)in_EDX + (-4 - (int)in_ECX) + (int)piVar5) = iVar6 + -1;
      iVar6 = iVar6 * 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if ((int)(param_3 + 1) <= param_4) {
    piVar5 = in_EDX + param_3;
    iVar6 = param_3 + 1;
    do {
      iVar3 = iVar6 + 1;
      in_ECX[iVar6] = (*piVar5 * 2 + 2) - in_ECX[iVar6];
      piVar5 = piVar5 + 1;
      iVar6 = iVar3;
    } while (iVar3 <= param_4);
  }
  return;
}

