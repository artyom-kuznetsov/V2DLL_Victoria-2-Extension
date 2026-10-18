// FUN_005404a0 @ 005404a0 body=[[005404a0, 00540515]]


void FUN_005404a0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *in_EAX;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar2 = DAT_012588e8;
  iVar4 = 0;
  iVar5 = *(int *)(param_1 + 0x1584) - *(int *)(param_1 + 0x1580) >> 3;
  *in_EAX = 0;
  in_EAX[1] = 0;
  if (0 < iVar5) {
    piVar6 = *(int **)(iVar2 + 0xadc);
    do {
      iVar2 = *piVar6;
      if (((*(int *)(iVar2 + 0x20) != 0) &&
          (0 < (int)(*(int *)(iVar2 + 0x9dc) - *(int *)(iVar2 + 0x9d8) & 0xfffffffcU))) &&
         (*(char *)(iVar2 + 0x31) != '\0')) {
        iVar2 = *(int *)(param_1 + 0x1580);
        uVar3 = *(uint *)(iVar2 + iVar4 * 8);
        uVar1 = *in_EAX;
        *in_EAX = *in_EAX + uVar3;
        in_EAX[1] = in_EAX[1] + *(int *)(iVar2 + 4 + iVar4 * 8) + (uint)CARRY4(uVar1,uVar3);
      }
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar4 < iVar5);
  }
  return;
}

