// FUN_008e2b60 @ 008e2b60 body=[[008e2b60, 008e2bfc] [008e2c00, 008e2c34] [008e2c38, 008e2c8b]]


/* WARNING: Removing unreachable block (ram,0x008e2c2c) */

void FUN_008e2b60(int param_1)

{
  void *pvVar1;
  char cVar2;
  char *pcVar3;
  undefined4 uVar4;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar1 = ExceptionList;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b42448;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(in_ECX + 0x1c) = DAT_0125e38c;
  *(undefined2 *)(in_ECX + 0x20) = 0;
  if (param_1 == 0x405) {
    *(undefined1 *)(in_ECX + 0x18) = 1;
    ExceptionList = pvVar1;
    return;
  }
  if (param_1 == 0x2a2) {
    *(undefined1 *)(in_ECX + 0x21) = 1;
    ExceptionList = pvVar1;
    return;
  }
  if (param_1 == 0x3de) {
    *(undefined1 *)(in_ECX + 0x19) = 1;
    ExceptionList = pvVar1;
    return;
  }
  pcVar3 = &stack0x00000008;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  FUN_00409350(&stack0x00000008,(int)pcVar3 - (int)&stack0x00000009);
  cVar2 = FUN_0040b360();
  if (cVar2 == '\0') {
    uVar4 = FUN_009885d0();
    local_8 = 0;
    uVar4 = FUN_0055f680(uVar4);
    *(undefined4 *)(in_ECX + 0x1c) = uVar4;
    FUN_00408ad0();
    ExceptionList = local_10;
    return;
  }
  *(undefined1 *)(in_ECX + 0x20) = 1;
  ExceptionList = local_10;
  return;
}

