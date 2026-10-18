// FUN_008bc1a0 @ 008bc1a0 body=[[008bc1a0, 008bc21b] [008bc21f, 008bc27c]]


void FUN_008bc1a0(void)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int in_ECX;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4fa63;
  local_10 = ExceptionList;
  pcVar2 = &stack0x00000008;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_10;
  FUN_00409350(&stack0x00000008,(int)pcVar2 - (int)&stack0x00000009);
  local_8 = 0;
  FUN_00408ed0(local_30,0,0xffffffff);
  local_8 = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  if (DAT_0125eadc == 0) {
    local_14 = FUN_00aae9af(0x9c);
    local_8 = 1;
    if (local_14 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00576fe0(local_14);
    }
    local_8 = 0xffffffff;
    FUN_0057ab10(uVar3);
  }
  uVar3 = FUN_005661b0(in_ECX + 0x20);
  *(undefined4 *)(in_ECX + 0x1c) = uVar3;
  ExceptionList = local_10;
  return;
}

