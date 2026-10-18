// FUN_0071d0c0 @ 0071d0c0 body=[[0071d0c0, 0071d15c] [0071d160, 0071d200]]


void FUN_0071d0c0(void)

{
  int iVar1;
  int *in_ECX;
  undefined4 uStack_38;
  undefined1 local_34 [12];
  undefined4 uStack_28;
  uint local_24;
  undefined4 local_20;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bbc108;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_00721bb0(in_ECX);
  FUN_0071d070(in_ECX);
  FUN_0071d210();
  FUN_0071e850(in_ECX);
  FUN_0071eab0(in_ECX);
  FUN_0071ed10(in_ECX);
  FUN_0071eff0();
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = 0;
  FUN_00409350("buy_from_stockpile",0x12);
  local_c = 0;
  iVar1 = (**(code **)(*(int *)in_ECX[0x13] + 0x48))(local_34);
  puStack_10 = (undefined1 *)0xffffffff;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_38);
  }
  local_24 = 0xf;
  uStack_28 = 0;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x54) + 4))(in_ECX + 0x25);
    if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4) + 0x129c
                 ) == '\0') {
      if ((*(char *)(iVar1 + 0xe4) == '\0') || (*(char *)(iVar1 + 0x142) != '\0')) {
        *(undefined4 *)(iVar1 + 0x6c) = 0;
        *(undefined4 *)(iVar1 + 0x10c) = 0;
      }
    }
    else {
      *(undefined4 *)(iVar1 + 0x6c) = 1;
      *(undefined4 *)(iVar1 + 0x10c) = 1;
    }
  }
  (**(code **)(*(int *)(in_ECX[0x13] + 0x18) + 0x34))();
  (**(code **)(*in_ECX + 0x10))();
  ExceptionList = pvStack_18;
  return;
}

