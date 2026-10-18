// FUN_00519be0 @ 00519be0 body=[[00519be0, 00519d55]]


int * FUN_00519be0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int unaff_EDI;
  undefined8 uVar4;
  int local_8;
  
  if ((*(int *)(unaff_EDI + 0x20) == 0) ||
     (((*(char *)(unaff_EDI + 0x1c) == 'R' && (*(char *)(unaff_EDI + 0x1d) == 'E')) &&
      (*(char *)(unaff_EDI + 0x1e) == 'B')))) {
    *param_1 = 0;
    return param_1;
  }
  iVar2 = 0;
  FUN_00401000(0x3f000000);
  local_8 = FUN_00b31c00();
  piVar3 = *(int **)(unaff_EDI + 0x9d8);
  while ((*(int **)(unaff_EDI + 0x9d8) <= piVar3 && (piVar3 < *(int **)(unaff_EDI + 0x9dc)))) {
    iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar3 * 4);
    piVar3 = piVar3 + 1;
    if ((((*(int *)(iVar1 + 0x16c) ==
           *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(unaff_EDI + 0xbe4) * 4) +
                   0x16c)) && (*(int *)(iVar1 + 300) == *(int *)(unaff_EDI + 0x20))) &&
        ((iVar2 = iVar2 + 1000, *(char *)(iVar1 + 0x130) != 'R' ||
         ((*(char *)(iVar1 + 0x131) != 'E' || (*(char *)(iVar1 + 0x132) != 'B')))))) &&
       (*(int *)(iVar1 + 0x134) != *(int *)(unaff_EDI + 0x20))) {
      local_8 = local_8 + 1000;
    }
  }
  uVar4 = __allmul(local_8,local_8 >> 0x1f,100000,0);
  iVar1 = __alldiv(uVar4,1000,0);
  if (iVar2 == 0) {
    *param_1 = -1;
    return param_1;
  }
  if (iVar1 + 0x189373U < 0x39580e) {
    *param_1 = (iVar1 * 1000) / iVar2;
    return param_1;
  }
  uVar4 = __allmul(iVar1,iVar1 >> 0x1f,1000,0);
  iVar2 = __alldiv(uVar4,iVar2,iVar2 >> 0x1f);
  *param_1 = iVar2;
  return param_1;
}

