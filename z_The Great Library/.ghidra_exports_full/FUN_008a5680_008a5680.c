// FUN_008a5680 @ 008a5680 body=[[008a5680, 008a57ce] [008a57d2, 008a57e8]]


void FUN_008a5680(int param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_ECX;
  int *piVar4;
  undefined4 uVar5;
  undefined1 local_f4 [4];
  uint uStack_f0;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined **appuStack_70 [19];
  void *pvStack_24;
  undefined1 uStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b546a6;
  local_14 = ExceptionList;
  puVar1 = *(uint **)(DAT_012586f4 + 8);
  piVar4 = (int *)(in_ECX + 0x20);
  ExceptionList = &local_14;
  uVar2 = FUN_0045c080(puVar1[1],piVar4);
  if (((*puVar1 <= uVar2) && (uVar2 < puVar1[1])) && ((int)(uVar2 - *puVar1) / 0x1c != 0x15)) {
    FUN_00457d10(*(undefined4 *)(DAT_012588e8 + 0xcf4),piVar4,in_ECX + 0x3c,
                 *(undefined4 *)(param_1 + 0x28));
    ExceptionList = local_14;
    return;
  }
  local_e0 = 0xf;
  local_e4 = 0;
  local_f4[0] = 0;
  FUN_00409350("effect.cpp",10);
  local_c = 0;
  uVar3 = FUN_004015b0(local_f4,0x1aa8,0x10004);
  uVar5 = 0;
  local_c = CONCAT31(local_c._1_3_,1);
  FUN_00987d50(uVar3,"Error in clear_news_scopes effect. Unknown news type ",0x35,0);
  if (0xf < *(uint *)(in_ECX + 0x34)) {
    piVar4 = (int *)*piVar4;
  }
  uVar3 = FUN_00418e30(uVar3,piVar4);
  FUN_00401280(uVar3);
  uStack_1c = 0;
  FUN_00987ac0(appuStack_70);
  appuStack_70[0] = std::ios_base::vftable;
  FUN_00aad52d(appuStack_70);
  if (0xf < uStack_f0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uVar5);
  }
  ExceptionList = pvStack_24;
  return;
}

