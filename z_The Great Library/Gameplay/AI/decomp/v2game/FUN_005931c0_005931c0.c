// FUN_005931c0 @ 005931c0 body=[[005931c0, 0059337f] [00593399, 005933f1]]


void FUN_005931c0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined4 extraout_ECX;
  uint local_f4 [4];
  undefined4 local_e4;
  uint local_e0;
  undefined **appuStack_60 [18];
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b546a6;
  local_14 = ExceptionList;
  if (param_2 < 0x350) {
    if (param_2 == 0x34f) {
      ExceptionList = &local_14;
      (**(code **)(*(int *)(in_ECX + 8) + 0xc))(param_1);
      ExceptionList = pvStack_18;
      return;
    }
    if (param_2 == 0x1a) {
      pcVar3 = (char *)(param_1 + 0x22c);
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      ExceptionList = &local_14;
      FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar3 - (param_1 + 0x22d));
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x2c9) {
      ExceptionList = &local_14;
      iVar2 = FUN_00aaf0c5(param_1 + 0x22c);
      *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(*(int *)(DAT_0125870c + 0x2238) + iVar2 * 4);
      ExceptionList = local_14;
      return;
    }
  }
  else {
    if (param_2 == 0x350) {
      ExceptionList = &local_14;
      (**(code **)(*(int *)(in_ECX + 0x48) + 0xc))(param_1);
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x351) {
      if ((*(int *)(param_1 + 0x228) != 0x29f) && (*(int *)(param_1 + 0x228) != 0x104)) {
        return;
      }
      *(undefined1 *)(in_ECX + 0x88) = 1;
      return;
    }
  }
  local_e0 = 0xf;
  local_e4 = 0;
  local_f4[0] = local_f4[0] & 0xffffff00;
  ExceptionList = &local_14;
  FUN_00409350("battleresult.cpp",0x10);
  local_c = 0;
  uVar4 = FUN_004015b0(local_f4,0x80,0x10004);
  local_c._0_1_ = 1;
  FUN_00987d50(uVar4,"Unknown statement ",0x12,0);
  uVar4 = FUN_00418e30(uVar4,param_1 + 0x24,extraout_ECX," in battleresult.");
  uVar4 = FUN_00418e30(uVar4);
  FUN_00401280(uVar4);
  local_c = (uint)local_c._1_3_ << 8;
  FUN_00987ac0(appuStack_60);
  appuStack_60[0] = std::ios_base::vftable;
  FUN_00aad52d(appuStack_60);
  if (local_e0 < 0x10) {
    ExceptionList = local_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_f4[0]);
}

