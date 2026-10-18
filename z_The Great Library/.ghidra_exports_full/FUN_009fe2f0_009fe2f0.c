// FUN_009fe2f0 @ 009fe2f0 body=[[009fe2f0, 009fe4bd] [009fe4c1, 009fe4ce] [009fe4d2, 009fe4f2] [009fe4f6, 009fe511] [009fe515, 009fe529]]


undefined4 * FUN_009fe2f0(undefined4 *param_1,uint param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 *in_stack_00000024;
  undefined4 in_stack_00000034;
  uint in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  uint in_stack_00000060;
  undefined1 local_11c [16];
  undefined4 local_10c;
  char *local_108;
  undefined4 uStack_104;
  undefined1 local_100 [16];
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  uint *puStack_e4;
  char *pcStack_e0;
  undefined4 *puStack_dc;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 local_3c;
  undefined1 *local_34;
  undefined1 *local_30;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b567d7;
  local_10 = ExceptionList;
  puStack_dc = (undefined4 *)0x0;
  pcStack_e0 = (char *)0x0;
  puStack_e4 = (uint *)0x1;
  local_30 = local_100;
  local_8 = 2;
  uStack_104 = 8;
  local_ec = 0xf;
  local_f0 = 0;
  local_108 = "UNLOGGED";
  local_100[0] = 0;
  local_10c = 0x9fe343;
  ExceptionList = &local_10;
  FUN_00409350();
  local_34 = local_11c;
  local_8._0_1_ = 3;
  local_108 = (char *)0xf;
  local_10c = 0;
  local_11c[0] = 0;
  FUN_00409350("UNLOGGED",8);
  local_8._0_1_ = 2;
  FUN_009fa9f0(param_1,0xd2);
  local_8._0_1_ = 4;
  puStack_dc = (undefined4 *)0xffffffff;
  *param_1 = &PTR_FUN_00e3e610;
  pcStack_e0 = (char *)0x0;
  puStack_e4 = &param_2;
  param_1[0x22] = 0xf;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  uStack_e8 = 0x9fe395;
  FUN_00408ed0();
  puStack_dc = (undefined4 *)0xffffffff;
  local_8._0_1_ = 5;
  pcStack_e0 = (char *)0x0;
  puStack_e4 = (uint *)&stack0x00000024;
  param_1[0x29] = 0xf;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  uStack_e8 = 0x9fe3be;
  FUN_00408ed0();
  local_8._0_1_ = 6;
  param_1[0x2b] = in_stack_00000040;
  param_1[0x2d] = in_stack_00000048;
  puStack_dc = (undefined4 *)0xffffffff;
  param_1[0x2c] = in_stack_00000044;
  pcStack_e0 = (char *)0x0;
  puStack_e4 = &stack0x0000004c;
  param_1[0x33] = 0xf;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  uStack_e8 = 0x9fe3f8;
  FUN_00408ed0();
  local_8._0_1_ = 7;
  local_3c = 0;
  local_94 = 0;
  local_90 = 0;
  local_a4 = 0x67452301;
  local_a0 = 0xefcdab89;
  local_9c = 0x98badcfe;
  local_98 = 0x10325476;
  puStack_dc = in_stack_00000024;
  if (in_stack_00000038 < 0x10) {
    puStack_dc = &stack0x00000024;
  }
  pcStack_e0 = (char *)0x9fe44f;
  FUN_00a1d420();
  puStack_dc = (undefined4 *)0x9fe45a;
  FUN_00a1d6f0();
  pcStack_e0 = (char *)0x9fe468;
  puStack_dc = &local_a4;
  pcStack_e0 = (char *)FUN_00a1d7c0();
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  pcVar2 = pcStack_e0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  puStack_dc = (undefined4 *)((int)pcVar2 - (int)(pcStack_e0 + 1));
  puStack_e4 = (uint *)0x9fe494;
  FUN_00409350();
  puStack_dc = (undefined4 *)0xffffffff;
  pcStack_e0 = (char *)0x0;
  puStack_e4 = local_2c;
  local_8 = CONCAT31(local_8._1_3_,8);
  uStack_e8 = 0x9fe4ab;
  FUN_00408ed0();
  if (0xf < local_18) {
    puStack_dc = (undefined4 *)local_2c[0];
                    /* WARNING: Subroutine does not return */
    pcStack_e0 = &UNK_009fe4be;
    FUN_00aae91b();
  }
  if (0xf < in_stack_0000001c) {
    puStack_dc = (undefined4 *)param_2;
                    /* WARNING: Subroutine does not return */
    pcStack_e0 = &UNK_009fe4cf;
    FUN_00aae91b();
  }
  in_stack_0000001c = 0xf;
  in_stack_00000018 = 0;
  param_2 = param_2 & 0xffffff00;
  if (0xf < in_stack_00000038) {
    puStack_dc = in_stack_00000024;
                    /* WARNING: Subroutine does not return */
    pcStack_e0 = &UNK_009fe4f3;
    FUN_00aae91b();
  }
  in_stack_00000038 = 0xf;
  in_stack_00000034 = 0;
  in_stack_00000024 = (undefined4 *)((uint)in_stack_00000024 & 0xffffff00);
  if (0xf < in_stack_00000060) {
    puStack_dc = (undefined4 *)in_stack_0000004c;
                    /* WARNING: Subroutine does not return */
    pcStack_e0 = &UNK_009fe512;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

