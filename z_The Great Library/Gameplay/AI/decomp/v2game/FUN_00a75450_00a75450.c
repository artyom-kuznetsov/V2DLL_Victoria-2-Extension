// FUN_00a75450 @ 00a75450 body=[[00a75450, 00a7558b] [00a7558f, 00a755da]]


void FUN_00a75450(SOCKET param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *unaff_EDI;
  char *pcVar6;
  uint uStack_f8;
  undefined1 local_f4 [16];
  undefined4 local_e4;
  undefined4 local_e0;
  undefined **appuStack_78 [19];
  void *pvStack_2c;
  undefined1 uStack_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b546a6;
  local_14 = ExceptionList;
  piVar4 = (int *)*unaff_EDI;
  iVar1 = unaff_EDI[1] - (int)piVar4 >> 0x1f;
  iVar3 = (unaff_EDI[1] - (int)piVar4) / 0x24 + iVar1;
  uVar5 = 0;
  if (iVar3 != iVar1) {
    while (*piVar4 != -1) {
      uVar5 = uVar5 + 1;
      piVar4 = piVar4 + 9;
      if ((uint)(iVar3 - iVar1) <= uVar5) {
        ExceptionList = &local_14;
        closesocket(param_1);
        ExceptionList = local_14;
        return;
      }
    }
    if (uVar5 != 0xffffffff) {
      local_e0 = 0xf;
      local_e4 = 0;
      local_f4[0] = 0;
      ExceptionList = &local_14;
      FUN_00409350("tcp.cpp",7);
      local_c = 0;
      uVar2 = FUN_004015b0(local_f4,0x193,0x301);
      pcVar6 = "TCP: Saving socket ";
      local_c = CONCAT31(local_c._1_3_,1);
      FUN_00987d50(uVar2,"TCP: Saving socket ",0x13,0);
      uVar2 = FUN_00455470(uVar2,uVar5);
      FUN_00401280(uVar2);
      uStack_24 = 0;
      FUN_00987ac0(appuStack_78);
      appuStack_78[0] = std::ios_base::vftable;
      FUN_00aad52d(appuStack_78);
      if (0xf < uStack_f8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(pcVar6);
      }
      iVar3 = uVar5 * 0x24;
      *(SOCKET *)(iVar3 + *unaff_EDI) = param_1;
      iVar1 = *unaff_EDI;
      *(undefined8 *)(iVar3 + 4 + iVar1) = param_2;
      *(undefined8 *)(iVar3 + iVar1 + 0xc) = param_3;
      *(undefined4 *)(iVar3 + 0x18 + *unaff_EDI) = 0;
      *(undefined4 *)(iVar3 + 0x1c + *unaff_EDI) = 0;
      ExceptionList = pvStack_2c;
      return;
    }
  }
  ExceptionList = &local_14;
  closesocket(param_1);
  ExceptionList = local_14;
  return;
}

