// FUN_0090cb00 @ 0090cb00 body=[[0090cb00, 0090cc02]]


undefined4 FUN_0090cb00(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  undefined1 local_98 [8];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_80;
  undefined1 *local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_24;
  undefined4 local_20;
  
  if ((*(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) & 0xfffffffcU) != 0) {
    FUN_008a8650(0);
    FUN_008a8650(0);
    local_48 = *param_2;
    local_44 = param_2[1];
    local_90 = *in_ECX;
    local_8c = in_ECX[1];
    local_74 = local_50;
    if (in_EAX[1] != 0) {
      local_6c = *in_EAX;
      local_68 = in_EAX[1];
      local_24 = local_6c;
      local_20 = local_68;
    }
    piVar1 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + in_ECX[1] * 4) + 0xe44);
    do {
      if (piVar1 == (int *)0x0) {
        return 0;
      }
      iVar2 = *piVar1;
      piVar1 = (int *)piVar1[2];
      if ((*(int *)(iVar2 + 0x4c) - *(int *)(iVar2 + 0x48) & 0xfffffffcU) == 0) {
        local_80 = 0;
      }
      else {
        local_80 = **(undefined4 **)(iVar2 + 0x48);
      }
      cVar3 = (**(code **)(*(int *)(param_1 + 0xa0) + 0x18))(local_98);
    } while (cVar3 == '\0');
  }
  return 1;
}

