// FUN_0047cde0 @ 0047cde0 body=[[0047cde0, 0047ceb8]]


void FUN_0047cde0(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  while (param_2 < in_ECX) {
    iVar2 = (in_ECX + -1) / 2;
    iVar3 = iVar2 * 0x4c;
    puVar4 = (undefined4 *)(iVar3 + param_1);
    if (*(float *)(iVar3 + 0x3c + param_1) <= (float)param_3[0xf]) break;
    puVar1 = (undefined4 *)(in_ECX * 0x4c + param_1);
    *puVar1 = *puVar4;
    FUN_00408ed0(puVar4 + 1,0,0xffffffff);
    FUN_00408ed0(puVar4 + 8,0,0xffffffff);
    puVar1[0xf] = puVar4[0xf];
    puVar1[0x10] = puVar4[0x10];
    *(undefined1 *)(puVar1 + 0x11) = *(undefined1 *)(puVar4 + 0x11);
    puVar1[0x12] = puVar4[0x12];
    in_ECX = iVar2;
  }
  puVar4 = (undefined4 *)(in_ECX * 0x4c + param_1);
  *puVar4 = *param_3;
  FUN_00408ed0(param_3 + 1,0,0xffffffff);
  FUN_00408ed0(param_3 + 8,0,0xffffffff);
  puVar4[0xf] = param_3[0xf];
  puVar4[0x10] = param_3[0x10];
  *(undefined1 *)(puVar4 + 0x11) = *(undefined1 *)(param_3 + 0x11);
  puVar4[0x12] = param_3[0x12];
  return;
}

