// FUN_005f3ee0 @ 005f3ee0 body=[[005f3ee0, 005f405a]]


void FUN_005f3ee0(char param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3eba8;
  local_10 = ExceptionList;
  local_18 = *(undefined4 *)(in_ECX + 0x10);
  local_14 = *(undefined4 *)(in_ECX + 0x14);
  if (*(char *)(in_ECX + 0x10) == 'X') {
    if (*(char *)(in_ECX + 0x11) == 'X') {
      if (*(char *)(in_ECX + 0x12) == 'X') {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = false;
  }
  ExceptionList = &local_10;
  if (bVar1) {
    ExceptionList = &local_10;
    puVar2 = (undefined4 *)FUN_004014a0();
    local_18 = *puVar2;
    local_14 = puVar2[1];
  }
  if (param_1 == '\0') {
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = FUN_0043ac40(0,0);
    FUN_004b52e0(in_ECX + 0x18,uVar3,uVar4,uVar5);
    uVar3 = *(undefined4 *)(in_ECX + 0xc);
    uVar5 = 0;
    uVar4 = FUN_0043ac40(0);
    FUN_004b5730(uVar3,in_ECX + 0x18,uVar4,uVar5);
  }
  else {
    uVar3 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + 300);
    *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(*(int *)(in_ECX + 0xc) + 0x128);
    *(undefined4 *)(in_ECX + 0x1c) = uVar3;
    FUN_00408e60();
    local_8 = 0;
    thunk_FUN_004e9b90();
    uVar3 = FUN_004014a0();
    uVar3 = FUN_0043ac40(0,uVar3);
    FUN_004b5a90(local_28,&local_18,uVar3);
    local_8 = 0xffffffff;
    FUN_00461f90();
  }
  ExceptionList = local_10;
  return;
}

