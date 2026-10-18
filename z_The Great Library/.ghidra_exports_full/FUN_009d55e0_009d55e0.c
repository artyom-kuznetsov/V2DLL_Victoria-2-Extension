// FUN_009d55e0 @ 009d55e0 body=[[009d55e0, 009d56e3]]


char FUN_009d55e0(void)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  char cVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined1 local_88 [60];
  undefined1 *local_4c;
  undefined1 *local_48;
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar3 = ExceptionList;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3e023;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)(in_ECX + 0xf) == '\n') {
    ExceptionList = &local_10;
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 1;
  }
  if (*(char *)(in_ECX + 0x10) != '\0') {
    *(undefined1 *)(in_ECX + 0x10) = 0;
    ExceptionList = pvVar3;
    return *(char *)(in_ECX + 0xf);
  }
  if (*(char *)(in_ECX + 0xc) != '\0') {
    uVar5 = FUN_009d6f60(*(undefined4 *)(in_ECX + 0x30),local_88,*(int *)(in_ECX + 0x34) + 1);
    local_4c = (undefined1 *)0x0;
    local_48 = (undefined1 *)0x0;
    local_44 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_18 = 0xf;
    local_1c = 0;
    local_2c = 0;
    local_8 = 3;
    FUN_009d5e10(uVar5);
    FUN_009d6f00();
    *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + 1;
    if (local_48 != local_4c) {
      *(undefined1 *)(in_ECX + 0xf) = *local_4c;
    }
    if (*(char *)(in_ECX + 0xd) != '\0') {
      *(char *)(in_ECX + 0xf) = *(char *)(in_ECX + 0xf) >> 7;
    }
    FUN_009d6f00();
    ExceptionList = local_10;
    return *(char *)(in_ECX + 0xf);
  }
  piVar1 = *(int **)(in_ECX + 0x30);
  iVar2 = *(int *)(in_ECX + 0x34);
  if (iVar2 < piVar1[1] - *piVar1) {
    cVar4 = *(char *)(iVar2 + *piVar1);
  }
  else {
    cVar4 = -1;
  }
  *(int *)(in_ECX + 0x34) = iVar2 + 1;
  *(char *)(in_ECX + 0xf) = cVar4;
  ExceptionList = pvVar3;
  return cVar4;
}

