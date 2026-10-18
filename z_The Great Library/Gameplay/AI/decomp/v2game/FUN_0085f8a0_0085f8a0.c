// FUN_0085f8a0 @ 0085f8a0 body=[[0085f8a0, 0085f98d]]


void FUN_0085f8a0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *local_8;
  
  if (param_4 != 0) {
    piVar1 = *(int **)(param_1 + 0x140);
    do {
      if (piVar1 == (int *)0x0) {
        local_8 = (undefined4 *)0x0;
        break;
      }
      local_8 = (undefined4 *)*piVar1;
      piVar1 = (int *)piVar1[2];
    } while (local_8[3] != param_4);
    if (local_8 == (undefined4 *)0x0) {
      local_8 = (undefined4 *)FUN_00aae9af(0x18);
      if (local_8 == (undefined4 *)0x0) {
        local_8 = (undefined4 *)0x0;
      }
      else {
        local_8[1] = 0x18d;
        *local_8 = CCountryWarTargetValue::vftable;
        local_8[2] = 0x2d2d2d;
        local_8[3] = 0;
        local_8[5] = 0;
        local_8[4] = 0;
      }
      local_8[2] = param_3;
      local_8[3] = param_4;
      local_8[5] = 0;
      iVar2 = *(int *)(param_1 + 0x144);
      puVar4 = (undefined4 *)FUN_00aae9af(0x10);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        *puVar4 = local_8;
        puVar4[1] = iVar2;
        puVar4[2] = 0;
        *(undefined1 *)(puVar4 + 3) = 0;
      }
      iVar3 = *(int *)(param_1 + 0x148);
      *(undefined4 **)(param_1 + 0x144) = puVar4;
      *(int *)(param_1 + 0x148) = iVar3 + 1;
      if (iVar3 == 0) {
        *(undefined4 **)(param_1 + 0x140) = puVar4;
      }
      else {
        *(undefined4 **)(iVar2 + 8) = puVar4;
      }
    }
    local_8[4] = param_2;
  }
  return;
}

