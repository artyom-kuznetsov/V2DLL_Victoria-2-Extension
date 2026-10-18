// FUN_004740f0 @ 004740f0 body=[[004740f0, 00474148] [00474150, 0047433d]]


void FUN_004740f0(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint local_f4 [4];
  undefined4 local_e4;
  uint local_e0;
  undefined **appuStack_60 [19];
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b546a6;
  local_14 = ExceptionList;
  if (param_2 == 0xb2) {
    ExceptionList = &local_14;
    uVar1 = FUN_00aaf0c5(param_1 + 0x22c);
    *(undefined4 *)(in_ECX + 0x120) = uVar1;
  }
  else {
    iVar5 = 0;
    do {
      if (*(int *)(*(int *)(DAT_0125b5d0 + iVar5 * 4) + 0x20) == param_2) {
        ExceptionList = &local_14;
        iVar3 = __stricmp("yes",(char *)(param_1 + 0x22c));
        if (iVar3 == 0) {
          *(undefined1 *)(in_ECX + 0x18 + iVar5 * 8) = 1;
          ExceptionList = local_14;
          return;
        }
        iVar3 = __stricmp("no",(char *)(param_1 + 0x22c));
        if (iVar3 == 0) {
          *(undefined1 *)(in_ECX + 0x18 + iVar5 * 8) = 0;
          ExceptionList = local_14;
          return;
        }
        FUN_009a1140();
        *(undefined1 *)(in_ECX + 0x18 + iVar5 * 8) = 0;
        ExceptionList = local_14;
        return;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x21);
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4[0] = local_f4[0] & 0xffffff00;
    ExceptionList = &local_14;
    FUN_00409350("rule.cpp",8);
    local_c = 0;
    uVar1 = FUN_004015b0(local_f4,0x8d,0x10004);
    local_c = CONCAT31(local_c._1_3_,1);
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
    puVar4 = (undefined4 *)(iVar5 + 0x14);
    FUN_00987d50(uVar1,"unknown rule \'",0xe,0);
    uVar1 = FUN_00418e30(uVar1,param_1 + 0x24,extraout_ECX,"\' in file ");
    uVar1 = FUN_00418e30(uVar1);
    if (0xf < *(uint *)(iVar5 + 0x28)) {
      puVar4 = (undefined4 *)*puVar4;
    }
    piVar2 = (int *)FUN_00418e30(uVar1,puVar4);
    FUN_00408be0(piVar2);
    uVar6 = 0;
    if ((*(uint *)(*(int *)(*piVar2 + 4) + 0xc + (int)piVar2) & 6) == 0) {
      iVar5 = (**(code **)(**(int **)(*(int *)(*piVar2 + 4) + 0x38 + (int)piVar2) + 0x34))();
      if (iVar5 == -1) {
        uVar6 = 4;
      }
    }
    if (uVar6 != 0) {
      uVar6 = *(uint *)((int)piVar2 + *(int *)(*piVar2 + 4) + 0xc) | uVar6;
      if (*(int *)((int)piVar2 + *(int *)(*piVar2 + 4) + 0x38) == 0) {
        uVar6 = uVar6 | 4;
      }
      FUN_00401120(uVar6,0);
    }
    local_c = local_c & 0xffffff00;
    FUN_00987ac0(appuStack_60);
    appuStack_60[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_60);
    if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_f4[0]);
    }
  }
  ExceptionList = local_14;
  return;
}

