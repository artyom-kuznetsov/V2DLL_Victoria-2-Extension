// FUN_008e1f50 @ 008e1f50 body=[[008e1f50, 008e2077] [008e207b, 008e21b0]]


/* WARNING: Removing unreachable block (ram,0x008e206e) */

void FUN_008e1f50(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined1 auStack_110 [252];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  iVar2 = DAT_012587ec;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b9054a;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *(undefined2 *)(in_ECX + 0x20) = 0;
  if (iVar2 == 0) {
    iVar2 = FUN_00aae9af(0x98);
    local_c = 0;
    if (iVar2 == 0) {
      iVar2 = 0;
      DAT_012587ec = iVar2;
    }
    else {
      iVar2 = FUN_00561080(iVar2);
      DAT_012587ec = iVar2;
    }
  }
  local_c = 0xffffffff;
  *(int *)(in_ECX + 0x1c) = iVar2;
  if (param_1 == 0x405) {
    *(undefined1 *)(in_ECX + 0x18) = 1;
    ExceptionList = local_14;
    return;
  }
  if (param_1 == 0x2a2) {
    *(undefined1 *)(in_ECX + 0x21) = 1;
    ExceptionList = local_14;
    return;
  }
  if (param_1 == 0x3de) {
    *(undefined1 *)(in_ECX + 0x19) = 1;
    ExceptionList = local_14;
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
    ExceptionList = local_14;
    return;
  }
  uVar4 = FUN_009885d0();
  local_c = 1;
  iVar2 = FUN_004a2f70(uVar4);
  if (iVar2 == 0) {
    uVar4 = FUN_00561180();
  }
  else {
    uVar4 = FUN_004a2f70(uVar4);
  }
  *(undefined4 *)(in_ECX + 0x1c) = uVar4;
  local_c = 0xffffffff;
  FUN_00408ad0();
  if ((*(int **)(in_ECX + 0x1c) != (int *)0x0) &&
     (cVar1 = (**(code **)(**(int **)(in_ECX + 0x1c) + 0x18))(), cVar1 == '\0')) {
    FUN_009885d0();
    local_c = 2;
    FUN_009885d0();
    local_c._0_1_ = 3;
    FUN_004015b0(auStack_110,0x13f0,0x10004);
    local_c._0_1_ = 4;
    uVar4 = FUN_00987d20();
    uVar4 = FUN_00989050(uVar4);
    FUN_00401280(uVar4);
    local_c = CONCAT31(local_c._1_3_,3);
    FUN_00401650();
    FUN_00408ad0();
    FUN_00408ad0();
  }
  ExceptionList = local_14;
  return;
}

