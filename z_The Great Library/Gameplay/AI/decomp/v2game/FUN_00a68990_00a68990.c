// FUN_00a68990 @ 00a68990 body=[[00a68990, 00a68b13] [00a68b17, 00a68b24] [00a68b28, 00a68b3c]]


undefined4 * FUN_00a68990(undefined4 *param_1,undefined4 param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  hostent *phVar4;
  ulong uVar5;
  undefined4 uVar6;
  char *pcVar7;
  bool bVar8;
  uint in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined **local_80 [18];
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  ulong local_1c;
  undefined2 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b546de;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00a5ff00(param_1,param_2);
  *param_1 = &PTR_FUN_00e428b8;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  local_8._0_1_ = 2;
  *(undefined1 *)(param_1 + 0x19) = 1;
  pbVar2 = param_3;
  if (in_stack_00000020 < 0x10) {
    pbVar2 = (byte *)&param_3;
  }
  pcVar7 = "localhost";
  do {
    bVar1 = *pbVar2;
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_00a68a20:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00a68a25;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_00a68a20;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00a68a25:
  if (iVar3 == 0) {
    local_1c = 0;
  }
  else {
    pbVar2 = param_3;
    if (in_stack_00000020 < 0x10) {
      pbVar2 = (byte *)&param_3;
    }
    phVar4 = gethostbyname((char *)pbVar2);
    if ((phVar4 == (hostent *)0x0) || (phVar4->h_addrtype != 2)) {
      uVar5 = inet_addr((char *)pbVar2);
      if (uVar5 == 0xffffffff) goto LAB_00a68a63;
    }
    else {
      uVar5 = *(ulong *)*phVar4->h_addr_list;
    }
    local_1c = uVar5;
  }
LAB_00a68a63:
  local_18 = (undefined2)in_stack_00000028;
  param_1[5] = in_stack_00000028;
  iVar3 = FUN_00a8a820(&local_1c,in_stack_0000002c,0,0);
  param_1[6] = iVar3;
  *(undefined4 *)(iVar3 + 0x17cc) = 1;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("server.cpp",10);
  local_8._0_1_ = 3;
  FUN_004015b0(local_38,0x9cf,0x301);
  local_8._0_1_ = 4;
  uVar6 = FUN_00987d20();
  FUN_00401280(uVar6);
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_00987ac0(local_80);
  local_80[0] = std::ios_base::vftable;
  FUN_00aad52d(local_80);
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3);
  }
  ExceptionList = local_10;
  return param_1;
}

