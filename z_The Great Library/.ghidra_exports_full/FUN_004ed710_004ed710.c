// FUN_004ed710 @ 004ed710 body=[[004ed710, 004ed735] [004ed740, 004ed76e] [004ed770, 004ed7b5]]


int FUN_004ed710(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *unaff_ESI;
  int iVar5;
  int local_8;
  
  *unaff_ESI = 0;
  FUN_0093d690();
  iVar3 = 0;
  if (0 < (int)(unaff_ESI[6] - unaff_ESI[5] & 0xfffffffcU)) {
    do {
      *(undefined4 *)(unaff_ESI[5] + iVar3 * 4) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < unaff_ESI[6] - unaff_ESI[5] >> 2);
  }
  local_8 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 4;
  iVar3 = param_1;
  if (0 < local_8) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0xc + iVar5);
      *unaff_ESI = *unaff_ESI + iVar1;
      piVar4 = (int *)FUN_004c8d10();
      *piVar4 = *piVar4 + iVar1;
      iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x10) + 8 + iVar5) + 0x68) + 0x28);
      iVar3 = unaff_ESI[5];
      piVar4 = (int *)(iVar3 + iVar2 * 4);
      *piVar4 = *piVar4 + iVar1;
      iVar3 = iVar3 + iVar2 * 4;
      iVar5 = iVar5 + 0x10;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return iVar3;
}

