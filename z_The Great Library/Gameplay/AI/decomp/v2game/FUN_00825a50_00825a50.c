// FUN_00825a50 @ 00825a50 body=[[00825a50, 00825afb]]


void FUN_00825a50(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *in_EAX;
  undefined4 *puVar3;
  
  iVar1 = *param_1;
  if (param_2 != iVar1) {
    iVar1 = *(int *)(param_2 + 8);
    puVar3 = (undefined4 *)FUN_00aae9af(0x14);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = *in_EAX;
      puVar3[1] = in_EAX[1];
      puVar3[2] = iVar1;
      puVar3[3] = param_2;
      *(undefined1 *)(puVar3 + 4) = 0;
    }
    *(undefined4 **)(param_2 + 8) = puVar3;
    if (iVar1 != 0) {
      *(undefined4 **)(iVar1 + 0xc) = puVar3;
    }
    param_1[2] = param_1[2] + 1;
    return;
  }
  puVar3 = (undefined4 *)FUN_00aae9af(0x14);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = *in_EAX;
    puVar3[1] = in_EAX[1];
    puVar3[2] = 0;
    puVar3[3] = iVar1;
    *(undefined1 *)(puVar3 + 4) = 0;
  }
  iVar2 = param_1[2];
  *param_1 = (int)puVar3;
  param_1[2] = iVar2 + 1;
  if (iVar2 != 0) {
    *(undefined4 **)(iVar1 + 8) = puVar3;
    return;
  }
  param_1[1] = (int)puVar3;
  return;
}

