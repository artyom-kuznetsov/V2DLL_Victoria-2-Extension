// FUN_009fa9f0 @ 009fa9f0 body=[[009fa9f0, 009fab68] [009fab6c, 009fab79] [009fab7d, 009fab97] [009fab9b, 009fabaf]]


undefined4 * FUN_009fa9f0(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 in_stack_0000001c;
  uint in_stack_00000020;
  undefined4 *in_stack_00000028;
  uint in_stack_0000003c;
  undefined1 in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined2 in_stack_0000004c;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b526a1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CCommand::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  local_8 = 2;
  uStack_7 = 0;
  param_1[0xb] = param_2;
  param_1[0xc] = param_2;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[9] = in_stack_00000048;
  *(undefined2 *)(param_1 + 10) = in_stack_0000004c;
  *(undefined1 *)((int)param_1 + 0x36) = in_stack_00000044;
  *(undefined1 *)((int)param_1 + 0x37) = 0;
  param_1[0xe] = 0;
  local_8 = 3;
  *param_1 = &PTR_FUN_00e3e55c;
  param_1[0x14] = 0xf;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_00408ed0(&param_3,0,0xffffffff);
  local_8 = 4;
  param_1[0x1b] = 0xf;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  FUN_00408ed0(&stack0x00000028,0,0xffffffff);
  local_8 = 5;
  local_34 = 0;
  local_8c = 0;
  local_88 = 0;
  local_9c = 0x67452301;
  local_98 = 0xefcdab89;
  local_94 = 0x98badcfe;
  local_90 = 0x10325476;
  puVar2 = in_stack_00000028;
  if (in_stack_0000003c < 0x10) {
    puVar2 = &stack0x00000028;
  }
  FUN_00a1d420(puVar2);
  FUN_00a1d6f0();
  pcVar3 = (char *)FUN_00a1d7c0(&local_9c);
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  _local_8 = CONCAT31(uStack_7,6);
  FUN_00408ed0(local_2c,0,0xffffffff);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3);
  }
  in_stack_00000020 = 0xf;
  in_stack_0000001c = 0;
  param_3 = param_3 & 0xffffff00;
  if (0xf < in_stack_0000003c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_stack_00000028);
  }
  ExceptionList = local_10;
  return param_1;
}

