// FUN_009e4a20 @ 009e4a20 body=[[009e4a20, 009e4b5d] [009e4b61, 009e4b79]]


undefined4 FUN_009e4a20(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 uVar4;
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
  ExceptionList = &local_14;
  cVar1 = FUN_009e68a0(in_ECX + 0x424,param_1);
  if (cVar1 != '\0') {
    puVar2 = (undefined4 *)FUN_009e6960(in_ECX + 0x424,param_1);
    ExceptionList = local_14;
    return *puVar2;
  }
  local_e0 = 0xf;
  local_e4 = 0;
  local_f4[0] = 0;
  FUN_00409350("fixedwindow.cpp",0xf);
  local_c = 0;
  uVar3 = FUN_004015b0(local_f4,0x413,0);
  uVar4 = 0;
  local_c = CONCAT31(local_c._1_3_,1);
  FUN_00987d50(uVar3,"Warning: Atempt to access nonexistant subwindow ",0x30,0);
  if (0xf < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  uVar3 = FUN_00418e30(uVar3,param_1);
  puVar2 = (undefined4 *)(**(code **)(**(int **)(in_ECX + 0x48) + 0x18))();
  uVar3 = FUN_00418e30(uVar3," in window 2 ");
  if (0xf < (uint)puVar2[5]) {
    puVar2 = (undefined4 *)*puVar2;
  }
  uVar3 = FUN_00418e30(uVar3,puVar2);
  FUN_00401280(uVar3);
  uStack_1c = 0;
  FUN_00987ac0(appuStack_70);
  appuStack_70[0] = std::ios_base::vftable;
  FUN_00aad52d(appuStack_70);
  if (0xf < uStack_f0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uVar4);
  }
  ExceptionList = pvStack_24;
  return 0;
}

