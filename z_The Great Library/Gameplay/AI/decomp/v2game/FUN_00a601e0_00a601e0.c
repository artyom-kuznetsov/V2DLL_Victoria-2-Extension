// FUN_00a601e0 @ 00a601e0 body=[[00a601e0, 00a60331] [00a6034c, 00a60371]]


void FUN_00a601e0(undefined4 param_1,undefined4 param_2,int param_3,char param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  uint local_f4 [4];
  undefined4 local_e4;
  uint local_e0;
  undefined **appuStack_60 [19];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b546a6;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  uVar2 = FUN_00a89eb0(param_1,param_2,param_4 != '\0');
  if (param_3 == -1) {
    FUN_00a8ac70(*(undefined4 *)(in_ECX + 0x18),1,uVar2);
  }
  else {
    param_3 = param_3 * 0xe8;
    iVar3 = FUN_00a89f70(*(int *)(*(int *)(in_ECX + 0x18) + 0x20) + param_3,1);
    if (iVar3 == -1) {
      local_e0 = 0xf;
      local_e4 = 0;
      local_f4[0] = local_f4[0] & 0xffffff00;
      FUN_00409350("server.cpp",10);
      local_c = 0;
      uVar2 = FUN_004015b0(local_f4,0x9a,0x301);
      local_c._0_1_ = 1;
      FUN_00987d50(uVar2,"Failed to send message to ",0x1a,0);
      iVar3 = *(int *)(*(int *)(in_ECX + 0x18) + 0x20);
      uVar1 = *(undefined2 *)(iVar3 + 0x10 + param_3);
      uVar2 = FUN_00447240(uVar2,*(undefined4 *)(iVar3 + 0xc + param_3),uVar1,&DAT_00ded950,uVar1,
                           uVar1);
      uVar2 = FUN_00418e30(uVar2);
      uVar2 = FUN_009da180(uVar2);
      FUN_00401280(uVar2);
      local_c = (uint)local_c._1_3_ << 8;
      FUN_00987ac0(appuStack_60);
      appuStack_60[0] = std::ios_base::vftable;
      FUN_00aad52d(appuStack_60);
      if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_f4[0]);
      }
    }
  }
  ExceptionList = local_14;
  return;
}

