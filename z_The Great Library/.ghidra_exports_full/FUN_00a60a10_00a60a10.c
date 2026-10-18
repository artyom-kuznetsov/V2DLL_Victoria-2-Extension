// FUN_00a60a10 @ 00a60a10 body=[[00a60a10, 00a60b7e] [00a60b82, 00a60b96]]


undefined4 * FUN_00a60a10(undefined4 *param_1,undefined4 param_2,byte *param_3)

{
  byte bVar1;
  void *pvVar2;
  byte *pbVar3;
  int iVar4;
  hostent *phVar5;
  char *pcVar6;
  bool bVar7;
  uint in_stack_00000020;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b48542;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00a5ff00(param_1,param_2);
  local_8._0_1_ = 1;
  *param_1 = &PTR_FUN_00e42728;
  param_1[0x20] = 0x1ff;
  param_1[0x1f] = 0;
  pvVar2 = (void *)FUN_00aad56b(0x7fc);
  param_1[0x21] = pvVar2;
  _memset(pvVar2,0,param_1[0x20] * 4);
  local_8._0_1_ = 3;
  param_1[0x27] = &PTR_FUN_00e427b0;
  pvVar2 = tbb::internal::NFS_Allocate(1,0x220,(void *)0x0);
  param_1[0x28] = pvVar2;
  _memset(pvVar2,0,0x220);
  *(undefined4 *)(param_1[0x28] + 0x104) = 4;
  *(undefined4 *)(param_1[0x28] + 0x100) = 0x20;
  param_1[0x27] = &PTR_FUN_00e4279c;
  local_8 = CONCAT31(local_8._1_3_,4);
  pbVar3 = param_3;
  if (in_stack_00000020 < 0x10) {
    pbVar3 = (byte *)&param_3;
  }
  pcVar6 = "localhost";
  do {
    bVar1 = *pbVar3;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_00a60b18:
      iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_00a60b1d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_00a60b18;
    pbVar3 = pbVar3 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00a60b1d:
  if (iVar4 != 0) {
    pbVar3 = param_3;
    if (in_stack_00000020 < 0x10) {
      pbVar3 = (byte *)&param_3;
    }
    phVar5 = gethostbyname((char *)pbVar3);
    if ((phVar5 == (hostent *)0x0) || (phVar5->h_addrtype != 2)) {
      inet_addr((char *)pbVar3);
    }
  }
  FUN_00a60ce0(in_stack_0000002c,in_stack_00000030);
  *(undefined1 *)(param_1 + 0x19) = 1;
  if (in_stack_00000020 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_3);
}

