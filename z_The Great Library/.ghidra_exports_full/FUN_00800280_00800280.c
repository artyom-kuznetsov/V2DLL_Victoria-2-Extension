// FUN_00800280 @ 00800280 body=[[00800280, 008004ad] [008004b0, 0080068a]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00800280(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int local_68;
  undefined1 auStack_24 [32];
  
  if ((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) & 0xfffffffcU) != 0) {
    local_68 = 0;
    iVar3 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x124))();
    if (*(char *)(*(int *)(iVar3 + 0x20) + 0x67) != '\0') {
      iVar3 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x124))();
      iVar3 = *(int *)(iVar3 + 0x24);
      if (iVar3 != 0) {
        uVar4 = *(undefined4 *)(iVar3 + 0x130);
        local_68 = *(int *)(iVar3 + 0x134);
        if ((local_68 == 0) ||
           ((((char)uVar4 == 'R' && ((char)((uint)uVar4 >> 8) == 'E')) &&
            ((char)((uint)uVar4 >> 0x10) == 'B')))) {
          local_68 = 0;
        }
      }
    }
    if (local_68 == 0) {
      local_68 = *(int *)(DAT_012588e8 + 0xb60);
    }
    if ((_DAT_013f1b50 & 1) == 0) {
      _DAT_013f1b50 = _DAT_013f1b50 | 1;
      DAT_013f1b38 = 0x18d;
      _DAT_013f1b34 = CColor::vftable;
      DAT_013f1b3c._0_4_ = DAT_00f17a20;
      DAT_013f1b3c._4_4_ = DAT_00f17a20;
      DAT_013f1b44._0_4_ = DAT_00f17a20;
      DAT_013f1b44._4_4_ = DAT_00f092fc;
      DAT_013f1b4c = 0;
      _atexit((_func_4879 *)&DAT_00c83e40);
    }
    if ((_DAT_013f1b50 & 2) == 0) {
      _DAT_013f1b50 = _DAT_013f1b50 | 2;
      DAT_013f1b1c = 0x18d;
      _DAT_013f1b18 = CColor::vftable;
      DAT_013f1b20._0_4_ = DAT_00f17a20;
      DAT_013f1b20._4_4_ = DAT_00f092fc;
      DAT_013f1b28._0_4_ = DAT_00f17a20;
      DAT_013f1b28._4_4_ = DAT_00f092fc;
      DAT_013f1b30 = 0;
      _atexit((_func_4879 *)&DAT_00c83e30);
    }
    if ((_DAT_013f1b50 & 4) == 0) {
      _DAT_013f1b50 = _DAT_013f1b50 | 4;
      _DAT_013f1b00 = 0x18d;
      _DAT_013f1afc = CColor::vftable;
      DAT_013f1b14 = 0;
      _DAT_013f1b04 = DAT_00f092fc;
      _DAT_013f1b08 = DAT_00f17a20;
      _DAT_013f1b0c = DAT_00f17a20;
      _DAT_013f1b10 = DAT_00f092fc;
      _atexit((_func_4879 *)&DAT_00c83e20);
    }
    iVar5 = 1;
    iVar3 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2;
    if (1 < iVar3) {
      do {
        puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x1c) + iVar5 * 4);
        iVar2 = puVar1[3];
        if (((*(int *)(iVar2 + 0x134) != 0) &&
            (((*(char *)(iVar2 + 0x130) != 'R' || (*(char *)(iVar2 + 0x131) != 'E')) ||
             (*(char *)(iVar2 + 0x132) != 'B')))) && (local_68 != *(int *)(iVar2 + 0x134))) {
          FUN_009b7270(auStack_24);
        }
        uVar4 = FUN_009b6df0();
        *puVar1 = uVar4;
        uVar4 = FUN_009b6df0();
        iVar2 = iVar5 * 4;
        iVar5 = iVar5 + 1;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 4) = uVar4;
      } while (iVar5 < iVar3);
    }
  }
  return;
}

