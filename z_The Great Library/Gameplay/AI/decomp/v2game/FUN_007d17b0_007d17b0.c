// FUN_007d17b0 @ 007d17b0 body=[[007d17b0, 007d18aa]]


void FUN_007d17b0(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_ECX;
  int iVar3;
  
  while (param_2 < in_ECX) {
    iVar3 = (in_ECX + -1) / 2;
    puVar1 = (undefined4 *)(param_1 + iVar3 * 0x44);
    if (*(float *)(param_1 + 4 + iVar3 * 0x44) <= (float)param_3[1]) break;
    puVar2 = (undefined4 *)(param_1 + in_ECX * 0x44);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    FUN_00408ed0(puVar1 + 3,0,0xffffffff);
    puVar2[0xb] = puVar1[0xb];
    *(undefined8 *)(puVar2 + 0xc) = *(undefined8 *)(puVar1 + 0xc);
    *(undefined8 *)(puVar2 + 0xe) = *(undefined8 *)(puVar1 + 0xe);
    *(undefined1 *)(puVar2 + 0x10) = *(undefined1 *)(puVar1 + 0x10);
    in_ECX = iVar3;
  }
  puVar1 = (undefined4 *)(param_1 + in_ECX * 0x44);
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  FUN_00408ed0(param_3 + 3,0,0xffffffff);
  puVar1[0xb] = param_3[0xb];
  *(undefined8 *)(puVar1 + 0xc) = *(undefined8 *)(param_3 + 0xc);
  *(undefined8 *)(puVar1 + 0xe) = *(undefined8 *)(param_3 + 0xe);
  *(undefined1 *)(puVar1 + 0x10) = *(undefined1 *)(param_3 + 0x10);
  return;
}

