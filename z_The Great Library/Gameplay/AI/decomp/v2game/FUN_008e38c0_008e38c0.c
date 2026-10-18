// FUN_008e38c0 @ 008e38c0 body=[[008e38c0, 008e398c] [008e3990, 008e39c4] [008e39c8, 008e3a27]]


/* WARNING: Removing unreachable block (ram,0x008e39bc) */

void FUN_008e38c0(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar2 = DAT_0125880c;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b90503;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined2 *)(in_ECX + 0x20) = 0;
  if (iVar2 == 0) {
    iVar2 = FUN_00aae9af(0x74);
    local_8 = 0;
    if (iVar2 == 0) {
      iVar2 = 0;
      DAT_0125880c = iVar2;
    }
    else {
      iVar2 = FUN_00567560(iVar2);
      DAT_0125880c = iVar2;
    }
  }
  local_8 = 0xffffffff;
  *(int *)(in_ECX + 0x1c) = iVar2;
  if (param_1 == 0x405) {
    *(undefined1 *)(in_ECX + 0x18) = 1;
    ExceptionList = local_10;
    return;
  }
  if (param_1 == 0x2a2) {
    *(undefined1 *)(in_ECX + 0x21) = 1;
    ExceptionList = local_10;
    return;
  }
  if (param_1 == 0x3de) {
    *(undefined1 *)(in_ECX + 0x19) = 1;
    ExceptionList = local_10;
    return;
  }
  pcVar3 = &stack0x00000008;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(&stack0x00000008,(int)pcVar3 - (int)&stack0x00000009);
  cVar1 = FUN_0040b360();
  if (cVar1 != '\0') {
    *(undefined1 *)(in_ECX + 0x20) = 1;
    ExceptionList = local_10;
    return;
  }
  uVar4 = FUN_009885d0();
  local_8 = 1;
  FUN_005662c0();
  iVar2 = FUN_005677b0(uVar4);
  if (iVar2 == 0) {
    iVar2 = FUN_005676d0();
  }
  *(int *)(in_ECX + 0x1c) = iVar2;
  FUN_00408ad0();
  ExceptionList = local_10;
  return;
}

