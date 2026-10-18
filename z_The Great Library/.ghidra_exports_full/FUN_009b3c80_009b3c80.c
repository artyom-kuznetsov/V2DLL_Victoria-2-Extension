// FUN_009b3c80 @ 009b3c80 body=[[009b3c80, 009b3ce0]]


void FUN_009b3c80(int *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_3 == *param_1) {
    FUN_009e6cc0(param_2);
    return;
  }
  iVar1 = *(int *)(param_3 + 4);
  puVar2 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = *param_2;
    puVar2[1] = iVar1;
    puVar2[2] = param_3;
    *(undefined1 *)(puVar2 + 3) = 0;
  }
  *(undefined4 **)(param_3 + 4) = puVar2;
  if (iVar1 != 0) {
    *(undefined4 **)(iVar1 + 8) = puVar2;
  }
  param_1[2] = param_1[2] + 1;
  return;
}

