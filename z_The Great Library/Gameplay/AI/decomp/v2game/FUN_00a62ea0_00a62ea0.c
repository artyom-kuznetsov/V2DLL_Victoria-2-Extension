// FUN_00a62ea0 @ 00a62ea0 body=[[00a62ea0, 00a63128] [00a6312c, 00a6318f]]


void FUN_00a62ea0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined4 unaff_ESI;
  int *piStack_114;
  undefined4 *local_110;
  undefined **local_104;
  undefined4 *local_100;
  undefined4 local_fc;
  uint local_f8 [4];
  undefined4 uStack_e8;
  uint uStack_e4;
  undefined **appuStack_64 [18];
  void *pvStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  piVar1 = param_1;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5cf1f;
  local_14 = ExceptionList;
  iVar3 = *(int *)(*(int *)(in_ECX + 0x1c) + 0x54);
  if (0x7fff < iVar3) {
    iVar3 = 0;
  }
  ExceptionList = &local_14;
  *(short *)(param_1 + 0xd) = (short)iVar3;
  if (*(char *)((int)param_1 + 0x36) == '\0') {
    piVar1 = (int *)(in_ECX + 0xa8);
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    param_1[0xe] = iVar3;
    iVar2 = *(int *)(in_ECX + 0xa0);
    piVar1 = (int *)(iVar2 + 0x80);
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    FUN_00a6a9f0(iVar2 + 0x180 + (iVar3 * 3 & 7U) * 0x14,&param_1,iVar3,in_ECX + 0x9c);
    ExceptionList = local_14;
    return;
  }
  local_110 = (undefined4 *)FUN_00aae9af(0x3c);
  if (local_110 == (undefined4 *)0x0) {
    local_110 = (undefined4 *)0x0;
  }
  else {
    *local_110 = 0;
    local_110[1] = 0;
    local_110[2] = 0;
    local_110[4] = 0;
    local_110[5] = 0;
    local_110[6] = 0;
    local_110[0xd] = 0xf;
    local_110[0xc] = 0;
    *(undefined1 *)(local_110 + 8) = 0;
  }
  iVar3 = FUN_00aae9af(0x3c);
  local_c = 0;
  if (iVar3 == 0) {
    local_fc = 0;
  }
  else {
    local_fc = FUN_009d5450(iVar3,local_110,1,0,0);
  }
  local_104 = &PTR_FUN_00e38528;
  local_100 = (undefined4 *)0x0;
  local_f8[0] = CONCAT22(local_f8[0]._2_2_,0x100);
  local_f8[0] = CONCAT31(local_f8[0]._1_3_,*(char *)(local_fc + 0x13) != '\0');
  local_c = 1;
  (**(code **)(*piVar1 + 0x1c))();
  FUN_009a0940(&local_104);
  (**(code **)(*piVar1 + 4))(&local_104);
  puStack_10 = (undefined1 *)0xffffffff;
  if ((local_100 != (undefined4 *)0x0) && (local_fc._1_1_ != '\0')) {
    (**(code **)*local_100)(1);
  }
  uVar4 = (**(code **)(*piVar1 + 0x24))();
  uVar4 = uVar4 & 0xffff;
  uVar5 = (**(code **)(*piVar1 + 0x20))(uVar4);
  iVar3 = FUN_00a603d0(uVar5,uVar4);
  if (-1 < iVar3) {
    uStack_e4 = 0xf;
    uStack_e8 = 0;
    local_f8[0] = local_f8[0] & 0xffffff00;
    FUN_00409350("server.cpp",10);
    puStack_10 = (undefined1 *)0x2;
    uVar5 = FUN_004015b0(local_f8,0x433,0x301);
    puStack_10._0_1_ = 3;
    FUN_00987d50(uVar5,"Sending targeted asynchronous command: ",0x27,0);
    uVar5 = (**(code **)(*piVar1 + 0x1c))();
    uVar5 = FUN_00447240(unaff_ESI,uVar5);
    FUN_00401280(uVar5);
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,2);
    FUN_00987ac0(appuStack_64);
    appuStack_64[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_64);
    puStack_10 = (undefined1 *)0xffffffff;
    if (0xf < uStack_e4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_f8[0]);
    }
    uStack_e4 = 0xf;
    uStack_e8 = 0;
    local_f8[0] = local_f8[0] & 0xffffff00;
    FUN_00a89eb0(*piStack_114,piStack_114[1] - *piStack_114,1);
    FUN_00a89f70(iVar3 * 0xe8 + *(int *)(local_110[6] + 0x20),0);
  }
  (**(code **)*piVar1)(1);
  ExceptionList = pvStack_1c;
  return;
}

