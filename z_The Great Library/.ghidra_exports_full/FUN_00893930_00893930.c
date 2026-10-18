// FUN_00893930 @ 00893930 body=[[00893930, 008939f8] [008939fc, 00893a0d]]


void FUN_00893930(int param_1)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar2 = ExceptionList;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined2 *)(in_ECX + 0x1c) = 0;
  if (param_1 == 0x405) {
    *(undefined1 *)(in_ECX + 0x1c) = 1;
    ExceptionList = pvVar2;
    return;
  }
  if (param_1 == 0x3de) {
    *(undefined1 *)(in_ECX + 0x1d) = 1;
    ExceptionList = pvVar2;
    return;
  }
  pcVar3 = &stack0x00000008;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(&stack0x00000008,(int)pcVar3 - (int)&stack0x00000009);
  local_8 = 0;
  iVar4 = FUN_004a2f70(local_2c);
  if (iVar4 == 0) {
    uVar5 = FUN_00561180();
  }
  else {
    uVar5 = FUN_004a2f70(local_2c);
  }
  *(undefined4 *)(in_ECX + 0x20) = uVar5;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return;
}

