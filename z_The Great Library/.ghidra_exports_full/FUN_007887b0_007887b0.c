// FUN_007887b0 @ 007887b0 body=[[007887b0, 00788918]]


void FUN_007887b0(int param_1,int param_2,int param_3,int *param_4,char param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_2 <= param_3) {
    *(int *)(param_1 + param_2 * 4) = *param_4;
    return;
  }
  do {
    iVar2 = (param_2 + -1) / 2;
    iVar6 = *param_4;
    iVar5 = *(int *)(param_1 + iVar2 * 4);
    bVar1 = true;
    iVar3 = FUN_00967f50();
    if ((iVar3 != 0) &&
       (iVar4 = FUN_00967f50(), iVar7 = DAT_01258a98, iVar3 = DAT_01258a94, iVar4 != 0)) {
      if (*(uint *)(iVar5 + 0xc) < 0x1269) {
        if (DAT_01258a98 == 0) goto LAB_00788878;
        iVar5 = FUN_009c1d40();
        iVar3 = DAT_01258a94;
      }
      else if (DAT_01258a94 == 0) {
LAB_00788878:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_009c1d40();
        iVar7 = DAT_01258a98;
      }
      iVar5 = *(int *)(*(int *)(iVar5 + 0x38) + 0x24);
      if (*(uint *)(iVar6 + 0xc) < 0x1269) {
        if (iVar7 == 0) goto LAB_007888bb;
        iVar6 = FUN_009c1d40();
      }
      else if (iVar3 == 0) {
LAB_007888bb:
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_009c1d40();
      }
      bVar1 = *(int *)(*(int *)(iVar6 + 0x38) + 0x24) < iVar5;
    }
    if (param_5 != '\0') {
      bVar1 = !bVar1;
    }
    if ((!bVar1) ||
       (*(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar2 * 4),
       param_2 = iVar2, iVar2 <= param_3)) {
      *(int *)(param_1 + param_2 * 4) = *param_4;
      return;
    }
  } while( true );
}

