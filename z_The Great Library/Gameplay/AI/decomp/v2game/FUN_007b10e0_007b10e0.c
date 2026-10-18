// FUN_007b10e0 @ 007b10e0 body=[[007b10e0, 007b11be] [007b11c2, 007b120c]]


void FUN_007b10e0(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  undefined4 local_44;
  uint local_40;
  uint local_3c;
  undefined1 auStack_38 [12];
  undefined4 uStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00bbc108;
  local_14 = ExceptionList;
  local_40 = *(uint *)(in_ECX + 0xcc);
  local_3c = *(uint *)(in_ECX + 0xd0);
  iVar1 = DAT_01258a94;
  if (local_40 < 0x1269) {
    iVar1 = DAT_01258a98;
  }
  ExceptionList = &local_14;
  if (iVar1 != 0) {
    ExceptionList = &local_14;
    iVar1 = FUN_009c1d40();
    if (iVar1 != 0) {
      iVar1 = iVar1 + -8;
      goto LAB_007b1144;
    }
  }
  iVar1 = 0;
LAB_007b1144:
  *(int *)(in_ECX + 200) = iVar1;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x20) + 0x18) + 0x3c))(&local_44);
    uStack_24 = 0xf;
    uStack_28 = 0;
    auStack_38[0] = 0;
    FUN_00409350("browser_offset",0xe);
    puStack_10 = (undefined1 *)0x0;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0xf0) + 0x34))();
    iVar1 = (**(code **)(*piVar2 + 0x48))(auStack_38);
    local_14 = (void *)0xffffffff;
    if (0xf < uStack_28) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_3c);
    }
    uStack_28 = 0xf;
    uStack_2c = 0;
    local_3c = local_3c & 0xffffff00;
    local_44 = *(undefined4 *)(iVar1 + 0x68);
    (**(code **)(**(int **)(in_ECX + 0x20) + 0x18))
              (*(short *)(in_ECX + 0xf4) * (short)*(undefined4 *)(iVar1 + 100));
  }
  ExceptionList = local_14;
  return;
}

