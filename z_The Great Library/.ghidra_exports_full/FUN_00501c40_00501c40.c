// FUN_00501c40 @ 00501c40 body=[[00501c40, 00501cd7] [00501ce0, 00501d5a]]


void FUN_00501c40(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b53393;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0125eadc == 0) {
    ExceptionList = &local_10;
    iVar7 = FUN_00aae9af(0x9c);
    local_8 = 0;
    if (iVar7 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_00576fe0(iVar7);
    }
    FUN_0057ab10(uVar8);
  }
  iVar7 = *(int *)(DAT_0125eadc + 0x68);
  iVar1 = *(int *)(DAT_0125eadc + 100);
  piVar10 = (int *)(DAT_0125eadc + 100);
  local_24 = (int *)0x0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_8 = 1;
  local_14 = piVar10;
  FUN_00409810(param_2,&local_24);
  piVar6 = local_24;
  while (piVar5 = piVar10, piVar6 != (int *)0x0) {
    piVar2 = (int *)piVar6[2];
    iVar3 = *piVar6;
    piVar10 = local_14;
    piVar6 = piVar2;
    if ((-1 < iVar3) && (iVar3 < iVar7 - iVar1 >> 2)) {
      uVar8 = *(undefined4 *)(*piVar5 + iVar3 * 4);
      iVar3 = param_1[1];
      puVar9 = (undefined4 *)FUN_00aae9af(0x10);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        *puVar9 = uVar8;
        puVar9[1] = iVar3;
        puVar9[2] = 0;
        *(undefined1 *)(puVar9 + 3) = 0;
      }
      iVar4 = param_1[2];
      param_1[1] = puVar9;
      param_1[2] = iVar4 + 1;
      piVar10 = local_14;
      if (iVar4 == 0) {
        *param_1 = puVar9;
      }
      else {
        *(undefined4 **)(iVar3 + 8) = puVar9;
      }
    }
  }
  FUN_00849e90();
  ExceptionList = local_10;
  return;
}

