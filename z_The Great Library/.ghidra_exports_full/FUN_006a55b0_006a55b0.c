// FUN_006a55b0 @ 006a55b0 body=[[006a55b0, 006a56a3] [006a56a7, 006a56ed]]


void FUN_006a55b0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  undefined4 uVar3;
  uint local_f4;
  uint uStack_f0;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined **appuStack_70 [19];
  void *pvStack_24;
  uint uStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b546a6;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar1 = FUN_0090da40(in_ECX);
  if (iVar1 != 0) {
    FUN_0090da40(in_ECX);
    ExceptionList = local_14;
    return;
  }
  local_e0 = 0xf;
  local_e4 = 0;
  local_f4 = local_f4 & 0xffffff00;
  FUN_00409350("messagehandler.cpp",0x12);
  local_c = 0;
  uVar2 = FUN_004015b0(&local_f4,0x69,0x10004);
  uVar3 = 0;
  local_c = CONCAT31(local_c._1_3_,1);
  FUN_00987d50(uVar2,"Failed to find message type: ",0x1d,0);
  if (0xf < (uint)in_ECX[5]) {
    in_ECX = (undefined4 *)*in_ECX;
  }
  uVar2 = FUN_00418e30(uVar2,in_ECX);
  FUN_00401280(uVar2);
  uStack_1c = uStack_1c & 0xffffff00;
  FUN_00987ac0(appuStack_70);
  appuStack_70[0] = std::ios_base::vftable;
  FUN_00aad52d(appuStack_70);
  uStack_1c = 0xffffffff;
  if (0xf < uStack_f0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uVar3);
  }
  uStack_f0 = 0xf;
  local_f4 = 0;
  FUN_006a7c10();
  ExceptionList = pvStack_24;
  return;
}

