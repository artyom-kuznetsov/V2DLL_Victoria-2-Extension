// FUN_009acaf0 @ 009acaf0 body=[[009acaf0, 009acc01] [009acc05, 009acc4b] [009acc4f, 009acc67]]


undefined4 FUN_009acaf0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 unaff_ESI;
  undefined1 local_114 [12];
  uint uStack_108;
  undefined4 local_104;
  uint local_100;
  undefined4 uStack_f0;
  uint uStack_ec;
  undefined4 local_dc;
  undefined **appuStack_68 [19];
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b576f1;
  pvStack_14 = ExceptionList;
  piVar1 = (int *)(in_ECX + 4);
  local_dc = 0;
  ExceptionList = &pvStack_14;
  piVar2 = (int *)FUN_00a72680(param_2,piVar1);
  if (piVar2 == (int *)0x0) {
    local_100 = 0xf;
    local_104 = 0;
    local_114[0] = 0;
    FUN_00409350("internationalizedtext.cpp",0x19);
    local_c = 0;
    uVar3 = FUN_004015b0(local_114,0x45e,0);
    local_c = CONCAT31(local_c._1_3_,1);
    FUN_00987d50(uVar3,"Failed to find text key ",0x18,0);
    piVar2 = piVar1;
    if (0xf < *(uint *)(in_ECX + 0x18)) {
      piVar2 = (int *)*piVar1;
    }
    uVar3 = FUN_00418e30(uVar3,piVar2);
    FUN_00401280(uVar3);
    pvStack_14 = (void *)((uint)pvStack_14 & 0xffffff00);
    FUN_00987ac0(appuStack_68);
    appuStack_68[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_68);
    pvStack_14 = (void *)0xffffffff;
    if (0xf < uStack_108) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(unaff_ESI);
    }
    uStack_ec = 0xf;
    uStack_f0 = 0;
    local_100 = local_100 & 0xffffff00;
    FUN_00409350("NO_TEXT_FOR_KEY ",0x10);
    pvStack_14 = (void *)0x2;
    FUN_00988f20(piVar1);
    if (0xf < uStack_ec) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_100);
    }
  }
  else {
    (**(code **)(*piVar2 + 0xc))(param_1,param_3);
  }
  ExceptionList = pvStack_1c;
  return param_1;
}

