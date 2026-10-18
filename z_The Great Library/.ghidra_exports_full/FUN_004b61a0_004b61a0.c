// FUN_004b61a0 @ 004b61a0 body=[[004b61a0, 004b61cc] [004b61d0, 004b6285]]


void FUN_004b61a0(int param_1,undefined4 *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_114;
  char local_110 [260];
  undefined4 local_c;
  
  iVar2 = *(int *)(param_1 + 0x14c);
  iVar1 = *(int *)(param_1 + 0x148);
  if (iVar1 != iVar2) {
    do {
      if (*(int *)(iVar1 + 4) == param_2[1]) break;
      iVar1 = iVar1 + 8;
    } while (iVar1 != iVar2);
    if (iVar1 != iVar2) {
      return;
    }
  }
  if (param_3 != '\0') {
    iVar2 = FUN_00aae9af(0x18);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_005f46b0(param_1);
    }
    local_114 = 0xf;
    __snprintf(local_110,0xff,"%s",param_2);
    FUN_005f46f0(&local_114);
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
    (**(code **)(*(int *)(param_1 + 0x60) + 0x18))(iVar2);
  }
  FUN_004d61d0();
  local_c = *param_2;
  FUN_0050e2d0(*(undefined4 *)(param_1 + 0x58));
  return;
}

