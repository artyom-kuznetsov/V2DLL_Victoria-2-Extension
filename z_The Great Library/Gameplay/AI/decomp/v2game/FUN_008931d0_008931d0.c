// FUN_008931d0 @ 008931d0 body=[[008931d0, 00893380]]


void FUN_008931d0(int param_1)

{
  void *_Dst;
  int iVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int unaff_EDI;
  int local_64;
  int *local_60;
  int *local_5c;
  undefined4 local_58;
  undefined **local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  _Dst = *(void **)(param_1 + 0x3c);
  if (_Dst != *(void **)(param_1 + 0x40)) {
    local_60 = (int *)0x0;
    FID_conflict__memcpy(_Dst,*(void **)(param_1 + 0x40),0);
    *(int *)(param_1 + 0x40) = (int)local_60 + (int)_Dst;
  }
  local_58 = *(undefined4 *)(unaff_EDI + 8);
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 0xc) * 4);
  FUN_004bf300(*(undefined4 *)(iVar1 + 0xe4c));
  local_60 = *(int **)(iVar1 + 0xe44);
  if (local_60 != (int *)0x0) {
    local_5c = (int *)(param_1 + 0x20);
    local_58 = 0x2d2d2d;
    do {
      iVar1 = *local_60;
      local_40 = *(undefined4 *)(unaff_EDI + 0x10);
      local_3c = *(undefined4 *)(unaff_EDI + 0x14);
      local_33 = *(undefined1 *)(unaff_EDI + 0x1d);
      local_34 = *(undefined1 *)(unaff_EDI + 0x1c);
      local_2c = *(undefined4 *)(unaff_EDI + 0x24);
      local_30 = *(undefined4 *)(unaff_EDI + 0x20);
      local_24 = *(undefined4 *)(unaff_EDI + 0x2c);
      local_28 = *(undefined4 *)(unaff_EDI + 0x28);
      local_1c = *(undefined4 *)(unaff_EDI + 0x34);
      local_20 = *(undefined4 *)(unaff_EDI + 0x30);
      local_14 = *(undefined4 *)(unaff_EDI + 0x3c);
      local_18 = *(undefined4 *)(unaff_EDI + 0x38);
      local_38 = 0;
      local_4c = 0x18d;
      local_50 = CEventScope::vftable;
      local_10 = 1;
      local_48 = local_58;
      local_44 = 0;
      if ((iVar1 != 0) && ((*(int *)(iVar1 + 0x4c) - *(int *)(iVar1 + 0x48) & 0xfffffffcU) != 0)) {
        local_38 = **(undefined4 **)(iVar1 + 0x48);
      }
      local_64 = iVar1;
      local_60 = (int *)local_60[2];
      cVar4 = (**(code **)(*local_5c + 0x18))(&local_50);
      if (cVar4 == '\x01') {
        piVar2 = *(int **)(param_1 + 0x40);
        if (&local_64 < piVar2) {
          piVar3 = *(int **)(param_1 + 0x3c);
          if (&local_64 < piVar3) goto LAB_00893350;
          if (piVar2 == *(int **)(param_1 + 0x44)) {
            FUN_007b94a0();
          }
          if (*(undefined4 **)(param_1 + 0x40) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0x40) =
                 *(undefined4 *)
                  (*(uint *)(param_1 + 0x3c) + ((int)&local_64 - (int)piVar3 >> 2) * 4);
          }
        }
        else {
LAB_00893350:
          if (piVar2 == *(int **)(param_1 + 0x44)) {
            FUN_007b94a0();
          }
          if (*(int **)(param_1 + 0x40) != (int *)0x0) {
            **(int **)(param_1 + 0x40) = iVar1;
          }
        }
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 4;
      }
    } while (local_60 != (int *)0x0);
  }
  return;
}

