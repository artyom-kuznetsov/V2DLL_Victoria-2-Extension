// FUN_0047ccd0 @ 0047ccd0 body=[[0047ccd0, 0047cdd0]]


void FUN_0047ccd0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = in_ECX;
  while( true ) {
    iVar3 = iVar2 * 2 + 2;
    if (param_2 <= iVar3) break;
    if (*(float *)(iVar3 * 0x4c + -0x10 + param_1) < *(float *)(iVar3 * 0x4c + 0x3c + param_1)) {
      iVar3 = iVar2 * 2 + 1;
    }
    puVar1 = (undefined4 *)(iVar2 * 0x4c + param_1);
    puVar4 = (undefined4 *)(iVar3 * 0x4c + param_1);
    *puVar1 = *puVar4;
    FUN_00408ed0(puVar4 + 1,0,0xffffffff);
    FUN_00408ed0(puVar4 + 8,0,0xffffffff);
    puVar1[0xf] = puVar4[0xf];
    puVar1[0x10] = puVar4[0x10];
    *(undefined1 *)(puVar1 + 0x11) = *(undefined1 *)(puVar4 + 0x11);
    puVar1[0x12] = puVar4[0x12];
    iVar2 = iVar3;
  }
  if (iVar3 == param_2) {
    puVar4 = (undefined4 *)(param_2 * 0x4c + -0x4c + param_1);
    puVar1 = (undefined4 *)(iVar2 * 0x4c + param_1);
    *puVar1 = *puVar4;
    FUN_00408ed0(puVar4 + 1,0,0xffffffff);
    FUN_00408ed0(puVar4 + 8,0,0xffffffff);
    puVar1[0xf] = puVar4[0xf];
    puVar1[0x10] = puVar4[0x10];
    *(undefined1 *)(puVar1 + 0x11) = *(undefined1 *)(puVar4 + 0x11);
    puVar1[0x12] = puVar4[0x12];
  }
  FUN_0047cde0(param_1,in_ECX,param_3,param_4);
  return;
}

