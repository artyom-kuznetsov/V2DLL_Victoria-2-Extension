// FUN_004b6290 @ 004b6290 body=[[004b6290, 004b63c5] [004b63e0, 004b645c] [004b6460, 004b64d0]]


void FUN_004b6290(int param_1,int param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  uint local_13c [4];
  undefined4 local_12c;
  uint local_128;
  undefined4 local_120;
  char local_11c [116];
  undefined **appuStack_a8 [37];
  void *pvStack_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5b126;
  pvStack_14 = ExceptionList;
  iVar4 = *(int *)(param_1 + 0x14c);
  iVar2 = *(int *)(param_1 + 0x148);
  if (iVar2 != iVar4) {
    do {
      if (*(int *)(iVar2 + 4) == *(int *)(param_2 + 4)) break;
      iVar2 = iVar2 + 8;
    } while (iVar2 != iVar4);
    if (iVar2 != iVar4) {
      ExceptionList = &pvStack_14;
      if (param_3 != '\0') {
        ExceptionList = &pvStack_14;
        iVar4 = FUN_00aae9af(0x18);
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_005f4950(param_1);
        }
        local_120 = 0xf;
        __snprintf(local_11c,0xff,"%s",param_2);
        FUN_005f4990(&local_120);
        *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
        (**(code **)(*(int *)(param_1 + 0x60) + 0x18))(iVar4);
      }
      iVar4 = *(int *)(param_1 + 0x148);
      if (iVar4 != *(int *)(param_1 + 0x14c)) {
        do {
          if (*(int *)(iVar4 + 4) == *(int *)(param_2 + 4)) break;
          iVar4 = iVar4 + 8;
        } while (iVar4 != *(int *)(param_1 + 0x14c));
      }
      FUN_0042ba80();
      for (piVar1 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_2 + 4) * 4) +
                             0x9f8); (piVar1 != (int *)0x0 && (*piVar1 != *(int *)(param_1 + 0x58)))
          ; piVar1 = (int *)piVar1[2]) {
      }
      FUN_005f2ae0(piVar1);
      ExceptionList = pvStack_14;
      return;
    }
  }
  local_128 = 0xf;
  local_12c = 0;
  local_13c[0] = local_13c[0] & 0xffffff00;
  ExceptionList = &pvStack_14;
  FUN_00409350("province.cpp",0xc);
  local_c = 0;
  uVar3 = FUN_004015b0(local_13c,0xc4e,0x10004);
  local_c._0_1_ = 1;
  FUN_00987d50(uVar3,"Failed to remove prov ",0x16,0);
  uVar3 = FUN_00455470(uVar3,*(undefined4 *)(param_1 + 0x58),extraout_ECX," as core for ",
                       extraout_ECX,param_2,extraout_ECX,", it hasnt got it!");
  uVar3 = FUN_00418e30(uVar3);
  uVar3 = FUN_00418e30(uVar3);
  uVar3 = FUN_00418e30(uVar3);
  FUN_00401280(uVar3);
  local_c = (uint)local_c._1_3_ << 8;
  FUN_00987ac0(appuStack_a8);
  appuStack_a8[0] = std::ios_base::vftable;
  FUN_00aad52d(appuStack_a8);
  if (local_128 < 0x10) {
    ExceptionList = pvStack_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_13c[0]);
}

