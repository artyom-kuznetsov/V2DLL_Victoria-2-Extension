// FUN_00994070 @ 00994070 body=[[00994070, 00994116] [0099411a, 00994176] [0099417a, 009941a0] [009941a4, 009941c2] [009941c6, 009941da]]


/* WARNING: Removing unreachable block (ram,0x0099416e) */
/* WARNING: Removing unreachable block (ram,0x0099410e) */

undefined4 *
FUN_00994070(undefined4 *param_1,undefined4 param_2,undefined4 param_3,ushort param_4,
            undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_ECX;
  int iVar3;
  uint in_EDX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 uStack00000013;
  uint in_stack_00000058;
  undefined4 in_stack_00000068;
  uint in_stack_0000006c;
  undefined4 in_stack_00000074;
  uint in_stack_00000088;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4a2f0;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  param_1[1] = in_ECX;
  *param_1 = param_2;
  param_1[4] = param_5;
  puVar4 = (undefined4 *)&stack0x00000018;
  puVar5 = param_1 + 5;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  param_1[3] = (uint)param_4;
  param_1[2] = in_EDX & 0xffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 2;
  cVar1 = FUN_00416db0();
  uStack00000013 = cVar1 == '\0';
  local_8._0_1_ = 1;
  if ((bool)uStack00000013) {
    uVar2 = FUN_009bcf60();
    param_1[0x15] = uVar2;
  }
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 3;
  cVar1 = FUN_00416db0();
  uStack00000013 = cVar1 == '\0';
  local_8 = CONCAT31(local_8._1_3_,1);
  if ((bool)uStack00000013) {
    uVar2 = FUN_009bcf60();
    param_1[0x16] = uVar2;
  }
  if (in_stack_0000006c < 0x10) {
    in_stack_0000006c = 0xf;
    in_stack_00000068 = 0;
    in_stack_00000058 = in_stack_00000058 & 0xffffff00;
    if (in_stack_00000088 < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_stack_00000074);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(in_stack_00000058);
}

