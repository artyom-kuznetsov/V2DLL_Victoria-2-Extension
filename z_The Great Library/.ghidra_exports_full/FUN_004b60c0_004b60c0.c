// FUN_004b60c0 @ 004b60c0 body=[[004b60c0, 004b611c]]


int FUN_004b60c0(int param_1)

{
  int iVar1;
  int iVar2;
  uint3 uVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  
  iVar1 = *(int *)(in_ECX + 0x11c) - *(int *)(in_ECX + 0x118);
  iVar2 = iVar1 >> 2;
  iVar4 = 0;
  uVar3 = (uint3)(iVar1 >> 10);
  if (0 < iVar2) {
    piVar5 = *(int **)(in_ECX + 0x118);
    do {
      if (((DAT_0125ceac < *(int *)(*piVar5 + 0x20)) &&
          (iVar1 = *(int *)(*piVar5 + 0x18), iVar1 != 0)) && (*(int *)(iVar1 + 0x10) == param_1)) {
        return CONCAT31(uVar3,1);
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar4 < iVar2);
  }
  return (uint)uVar3 << 8;
}

