// FUN_0073c930 @ 0073c930 body=[[0073c930, 0073c96f] [0073c973, 0073c991] [0073c995, 0073ca42] [0073ca46, 0073ca61] [0073ca65, 0073cb3b] [0073cb3f, 0073cb5f] [0073cb63, 0073cb7e] [0073cb82, 0073cb92]]


void FUN_0073c930(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  void **ppvVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int *in_ECX;
  byte *pbVar8;
  int in_EDX;
  bool bVar9;
  undefined4 in_stack_00000018;
  uint in_stack_0000001c;
  uint in_stack_00000024;
  undefined4 in_stack_00000034;
  uint in_stack_00000038;
  undefined4 in_stack_00000040;
  uint in_stack_00000054;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b44298;
  local_10 = ExceptionList;
  local_8 = 2;
  if (in_EDX == 0) {
    if (0xf < in_stack_0000001c) {
      ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_2);
    }
    in_stack_0000001c = 0xf;
    in_stack_00000018 = 0;
    param_2 = (byte *)((uint)param_2 & 0xffffff00);
    ppvVar2 = &local_10;
    if (0xf < in_stack_00000038) {
      ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(in_stack_00000024);
    }
    goto joined_r0x0073ca71;
  }
  ExceptionList = &local_10;
  iVar4 = FUN_0053f3b0(*(undefined4 *)(in_EDX + 0x58),param_1);
  pbVar5 = param_2;
  if (in_stack_0000001c < 0x10) {
    pbVar5 = (byte *)&param_2;
  }
  pbVar8 = &DAT_00ded94d;
  do {
    bVar1 = *pbVar5;
    bVar9 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_0073ca12:
      iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_0073ca17;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar9 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_0073ca12;
    pbVar5 = pbVar5 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  iVar6 = 0;
LAB_0073ca17:
  if (iVar6 != 0) {
    in_ECX = (int *)(**(code **)(*in_ECX + 0x6c))(&param_2);
  }
  if (in_ECX == (int *)0x0) {
    if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_2);
    }
    in_stack_0000001c = 0xf;
    in_stack_00000018 = 0;
    param_2 = (byte *)((uint)param_2 & 0xffffff00);
    ppvVar2 = ExceptionList;
    if (0xf < in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(in_stack_00000024);
    }
    goto joined_r0x0073ca71;
  }
  iVar6 = (**(code **)(*in_ECX + 0x48))(&stack0x00000024);
  iVar7 = (**(code **)(*in_ECX + 0x48))(&stack0x00000040);
  if (iVar6 != 0) {
    FUN_006a87e0(iVar4 != 0);
    cVar3 = FUN_00471530(param_1);
    if (cVar3 == '\0') {
      *(undefined1 *)(iVar6 + 0x142) = 0;
    }
    else {
      if (*(char *)(iVar6 + 0x142) != '\0') goto LAB_0073caed;
      *(undefined1 *)(iVar6 + 0x142) = 1;
    }
    FUN_009a8550(iVar6);
  }
LAB_0073caed:
  if (iVar7 != 0) {
    if (iVar4 == 0) {
      *(undefined1 *)(iVar7 + 0x142) = 0;
      FUN_009a8550(iVar7);
    }
    else {
      if (*(char *)(iVar7 + 0x142) == '\0') {
        *(undefined1 *)(iVar7 + 0x142) = 1;
        FUN_009a8550(iVar7);
      }
      FUN_006a87e0(*(undefined1 *)(iVar4 + 0xc));
    }
  }
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_2);
  }
  in_stack_0000001c = 0xf;
  in_stack_00000018 = 0;
  param_2 = (byte *)((uint)param_2 & 0xffffff00);
  ppvVar2 = ExceptionList;
  if (0xf < in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_stack_00000024);
  }
joined_r0x0073ca71:
  ExceptionList = ppvVar2;
  if (0xf < in_stack_00000054) {
    in_stack_00000024 = in_stack_00000024 & 0xffffff00;
    in_stack_00000038 = 0xf;
    in_stack_00000034 = 0;
    in_stack_0000001c = 0xf;
    in_stack_00000018 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_stack_00000040);
  }
  ExceptionList = local_10;
  return;
}

