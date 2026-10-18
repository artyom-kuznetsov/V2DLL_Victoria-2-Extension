// FUN_0090c9e0 @ 0090c9e0 body=[[0090c9e0, 0090cafd]]


undefined4 FUN_0090c9e0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 local_98 [8];
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 *local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined4 local_44;
  
  if ((*(int *)(param_1 + 0xe4) - *(int *)(param_1 + 0xe0) & 0xfffffffcU) != 0) {
    FUN_008a8650(0);
    FUN_008a8650(0);
    iVar2 = DAT_012588e8;
    local_48 = *param_2;
    local_44 = param_2[1];
    local_90 = *param_3;
    local_8c = param_3[1];
    local_74 = local_50;
    piVar5 = *(int **)(DAT_012588e8 + 0xadc);
    do {
      do {
        if ((piVar5 < *(int **)(iVar2 + 0xadc)) || (*(int **)(iVar2 + 0xae0) <= piVar5)) {
          return 0;
        }
        iVar1 = *piVar5;
        piVar5 = piVar5 + 1;
      } while (*(int *)(iVar1 + 0x20) == 0);
      local_6c = *(undefined4 *)(iVar1 + 0x1c);
      local_68 = *(undefined4 *)(iVar1 + 0x20);
      *(undefined4 *)(local_74 + 0x2c) = *(undefined4 *)(iVar1 + 0x1c);
      *(undefined4 *)(local_74 + 0x30) = *(undefined4 *)(iVar1 + 0x20);
      cVar3 = (**(code **)(*(int *)(param_1 + 0xd8) + 0x18))(local_98);
    } while (cVar3 == '\0');
    if (0 < (int)(*(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) & 0xfffffffcU)) {
      uVar4 = FUN_0090cb00(param_1,param_2);
      return uVar4;
    }
  }
  return 1;
}

