// FUN_00900200 @ 00900200 body=[[00900200, 009002a8]]


bool FUN_00900200(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  char cVar6;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    if (*(int *)(param_1 + 0x10) < 1) {
      if (0 < *(int *)(param_1 + 0x18)) {
        iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                          *(int *)(param_1 + 0x18) * 4) + 0x188) + 0x5c);
        goto LAB_00900268;
      }
      iVar5 = *(int *)(*(int *)(param_1 + 0x14) + 100);
    }
    else {
      iVar5 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4);
    }
    iVar5 = *(int *)(iVar5 + 300);
  }
  else {
    iVar5 = *(int *)(param_1 + 0xc);
  }
LAB_00900268:
  piVar1 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar5 * 4) + 0x1234);
  iVar2 = piVar1[1];
  iVar3 = *piVar1;
  iVar4 = *(int *)(iVar3 + 0x14);
  cVar6 = '\0';
  iVar5 = *(int *)(iVar2 + 0x14);
  if ((iVar4 <= iVar5) && ((iVar4 < iVar5 || (*(uint *)(iVar3 + 0x10) < *(uint *)(iVar2 + 0x10)))))
  {
    cVar6 = '\x01';
  }
  return cVar6 == *(char *)(in_ECX + 0x1c);
}

