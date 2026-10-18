// FUN_009351c0 @ 009351c0 body=[[009351c0, 00935370]]


void FUN_009351c0(int param_1,undefined4 param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_118;
  int local_114;
  undefined4 local_110;
  char local_10c [264];
  
  FUN_0055c6c0(DAT_012587e4,&local_118,&DAT_00dfdc14);
  for (local_118 = *(int *)(param_1 + 0x2c);
      (local_118 != *(int *)(param_1 + 0x30) && (*(int *)(local_118 + 4) != param_3));
      local_118 = local_118 + 8) {
  }
  local_114 = param_1 + 0x2c;
  FUN_0042ba80();
  FUN_00936560(param_1 + 0x2c,param_2,param_3);
  FUN_0093c890(&param_2);
  FUN_009383d0(param_1,param_2,param_3);
  if (param_4 != '\0') {
    iVar3 = FUN_00aae9af(0x18);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_005f6ca0();
    }
    local_110 = 0xf;
    __snprintf(local_10c,0xff,"%s",&param_2);
    FUN_005f6cf0(&local_110);
    *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
    (**(code **)(*(int *)(param_1 + 0x4c) + 0x18))(iVar3);
  }
  for (piVar4 = *(int **)(param_1 + 0x3c);
      (iVar3 = DAT_012587e4, *(int **)(param_1 + 0x3c) <= piVar4 &&
      (piVar4 < *(int **)(param_1 + 0x40))); piVar4 = piVar4 + 2) {
    local_118 = *piVar4;
    iVar1 = piVar4[1];
    iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_3 * 4) + 0xbe8) +
                    iVar1 * 4);
    *(undefined1 *)(iVar2 + 0x71) = 1;
    *(undefined4 *)(iVar2 + 0x34) = 0;
    iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 4) + iVar1 * 4) + 0xbe8) + param_3 * 4);
    *(undefined1 *)(iVar2 + 0x71) = 1;
    *(undefined4 *)(iVar2 + 0x34) = 0;
    FUN_00517af0(*(undefined4 *)(*(int *)(iVar3 + 4) + param_3 * 4));
    FUN_00517af0(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + iVar1 * 4));
    FUN_00859f80(&LAB_0093eca0,*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + param_3 * 4),
                 *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + iVar1 * 4));
  }
  FUN_0068e390(DAT_012588e8);
  return;
}

