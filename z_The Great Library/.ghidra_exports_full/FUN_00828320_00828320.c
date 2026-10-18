// FUN_00828320 @ 00828320 body=[[00828320, 00828408] [00828414, 0082854d]]


void FUN_00828320(int param_1)

{
  int *piVar1;
  void **ppvVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined4 local_2c;
  undefined **local_24;
  undefined4 local_20;
  int *local_1c;
  int *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4fcb3;
  local_1c = *(int **)(param_1 + 0xac);
  ppvVar2 = &local_10;
  local_10 = ExceptionList;
joined_r0x00828349:
  do {
    do {
      ExceptionList = ppvVar2;
      if (local_1c == (int *)0x0) {
        ExceptionList = local_10;
        return;
      }
      piVar7 = (int *)*local_1c;
      local_1c = (int *)local_1c[2];
      ppvVar2 = ExceptionList;
    } while ((((char)piVar7[0x59] == '\0') || (0 < piVar7[0x3b])) ||
            (*(int *)(piVar7[0x37] + 0xe8) == 0));
    local_18 = piVar7;
    local_20 = (**(code **)(*piVar7 + 0x2c))();
    local_2c = *(undefined4 *)(param_1 + 0x34);
    local_24 = CExiledAreaCostCallback::vftable;
    piVar1 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4) + 0xa08);
    while (piVar1 != (int *)0x0) {
      iVar4 = *piVar1;
      piVar1 = (int *)piVar1[2];
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_8 = 0;
      cVar3 = FUN_0048f6e0(iVar4,&local_24,&local_3c);
      if (cVar3 != '\0') {
        piVar7 = *(int **)(iVar4 + 4);
        goto joined_r0x0082847d;
      }
      local_8 = 0xffffffff;
      if (local_3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_3c);
      }
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      piVar7 = local_18;
    }
    iVar4 = FUN_00aae9af(100);
    local_8 = 1;
    if (iVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_005e02a0(iVar4,piVar7);
    }
    local_8 = 0xffffffff;
    iVar4 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
    (**(code **)(**(int **)(iVar4 + 0x38) + 0x18))(uVar5);
    ppvVar2 = ExceptionList;
  } while( true );
joined_r0x0082847d:
  if (piVar7 == (int *)0x0) goto LAB_008284a6;
  if (*piVar7 ==
      *(int *)(*(int *)(DAT_012588e8 + 0xacc) +
              *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4) + 0xbe4)
              * 4)) {
    local_2c = *(undefined4 *)(param_1 + 0x34);
    if (*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4) + 0xbe4
                        ) * 4) != 0) goto LAB_008284ed;
    goto LAB_008284a6;
  }
  piVar7 = (int *)piVar7[2];
  goto joined_r0x0082847d;
LAB_008284a6:
  local_2c = *(undefined4 *)(param_1 + 0x34);
  iVar6 = FUN_0050e450();
  if ((iVar4 != iVar6) && (piVar7 = *(int **)(iVar4 + 4), piVar7 != (int *)0x0)) {
    do {
      iVar4 = *piVar7;
      piVar7 = (int *)piVar7[2];
      if (0 < *(int *)(*(int *)(*(int *)(iVar4 + 0x118) + DAT_01258720 * 4) + 0x20)) break;
    } while (piVar7 != (int *)0x0);
  }
LAB_008284ed:
  FUN_0082e5d0(param_1);
  local_8 = 0xffffffff;
  FUN_009a63f0();
  ppvVar2 = ExceptionList;
  goto joined_r0x00828349;
}

