// FUN_00519d60 @ 00519d60 body=[[00519d60, 00519ebd]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00519d60(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  int local_8;
  
  *param_2 = 0;
  iVar2 = FUN_0050e450();
  if (*(char *)(param_1 + 0x67c) == '\0') {
    return param_2;
  }
  piVar6 = *(int **)(param_1 + 0x9f8);
  iVar5 = 0;
  local_8 = 0;
  iVar4 = 0;
  if (piVar6 != (int *)0x0) {
    do {
      iVar4 = *(int *)(*(int *)(DAT_0125870c + 0x2238) + *piVar6 * 4);
      iVar3 = *(int *)(iVar4 + 0xe8);
      piVar6 = (int *)piVar6[2];
      if ((iVar3 != 0) && (*(int *)(iVar4 + 300) == *(int *)(param_1 + 0x20))) {
        if (iVar3 == iVar2) {
LAB_00519df2:
          iVar3 = FUN_004b7ae0();
          iVar5 = iVar5 + iVar3;
          if (*(int *)(iVar4 + 0x134) == *(int *)(param_1 + 0x20)) {
            iVar4 = FUN_004b7ae0();
            local_8 = local_8 + iVar4;
          }
        }
        else if (iVar2 != 0) {
          for (puVar1 = *(undefined4 **)(iVar3 + 0x14); puVar1 != (undefined4 *)0x0;
              puVar1 = (undefined4 *)puVar1[2]) {
            if (*(int *)*puVar1 == iVar2) goto LAB_00519df2;
          }
        }
      }
    } while (piVar6 != (int *)0x0);
    iVar4 = local_8;
    if (0 < iVar5) goto LAB_00519e20;
  }
  iVar5 = 1;
LAB_00519e20:
  iVar5 = iVar5 * 1000;
  iVar2 = iVar4 * 1000;
  if (iVar5 == 0) {
    iVar5 = -1;
  }
  else if (iVar2 + 0x189373U < 0x39580e) {
    iVar5 = (iVar4 * 1000000) / iVar5;
  }
  else {
    uVar7 = __allmul(iVar2,iVar2 >> 0x1f,1000,0);
    iVar5 = __alldiv(uVar7,iVar5,iVar5 >> 0x1f);
  }
  iVar2 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0xbe4) * 4) + 0x134)
  ;
  *param_2 = 1000 - iVar5;
  if (iVar2 != *(int *)(param_1 + 0x20)) {
    *param_2 = (1000 - iVar5) + _DAT_0125db7c;
  }
  return param_2;
}

