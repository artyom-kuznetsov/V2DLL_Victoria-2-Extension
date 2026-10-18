// FUN_005d00e0 @ 005d00e0 body=[[005d00e0, 005d02e7]]


int * FUN_005d00e0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  undefined8 uVar5;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  int local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  piVar1 = *(int **)(in_ECX + 0x38);
  *param_1 = 0;
  if (piVar1 != (int *)0x0) {
    local_14 = in_ECX;
    FUN_00401000(0x42c90000);
    local_10 = FUN_00b31c00();
    local_c = piVar1;
    do {
      piVar1 = (int *)*local_c;
      local_c = (int *)local_c[2];
      FUN_005bdc80();
      iVar4 = piVar1[0xf];
      piVar2 = (int *)(**(code **)(*piVar1 + 0x30))(local_18,0);
      iVar3 = *piVar2;
      if (iVar3 == 0) {
        iVar3 = -1;
      }
      else if (iVar4 + 0x189373U < 0x39580e) {
        iVar3 = (iVar4 * 1000) / iVar3;
      }
      else {
        uVar5 = __allmul(iVar4,iVar4 >> 0x1f,1000,0);
        iVar3 = __alldiv(uVar5,iVar3,iVar3 >> 0x1f);
      }
      local_8 = __alldiv((longlong)iVar3 * (longlong)local_8,1000,0);
      if ((piVar1[0x1d] == 0) || (*(char *)(piVar1[0x1d] + 0x164) == '\0')) {
        iVar4 = piVar1[0x10];
      }
      else {
        iVar4 = 0;
      }
      piVar2 = (int *)(**(code **)(*piVar1 + 0x34))(local_1c,0);
      iVar3 = *piVar2;
      if (iVar3 == 0) {
        iVar3 = -1;
      }
      else if (iVar4 + 0x189373U < 0x39580e) {
        iVar3 = (iVar4 * 1000) / iVar3;
      }
      else {
        uVar5 = __allmul(iVar4,iVar4 >> 0x1f,1000,0);
        iVar3 = __alldiv(uVar5,iVar3,iVar3 >> 0x1f);
      }
      iVar4 = __alldiv((longlong)piVar1[0xd] * (longlong)DAT_0125fed8,1000,0);
      iVar3 = __alldiv((longlong)iVar3 * (longlong)local_8,1000,0);
      local_8 = __alldiv((longlong)iVar3 * (longlong)(iVar4 + 1000),1000,0);
      if ((piVar1[0xf] < local_10) || (piVar1[0x10] < 1000)) {
        uVar5 = __allmul(local_8,local_8 >> 0x1f,1000,0);
        local_8 = __alldiv(uVar5,2000,0);
      }
      *param_1 = *param_1 + local_8;
      in_ECX = local_14;
    } while (local_c != (int *)0x0);
  }
  iVar4 = __alldiv((longlong)
                   (*(int *)(*(int *)(DAT_012586dc + 0x20) + 0xe0) +
                   *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                             *(int *)(in_ECX + 0xc4) * 4) + 0xbcc) + 0x70)) *
                   (longlong)*param_1,1000,0);
  *param_1 = iVar4;
  return param_1;
}

