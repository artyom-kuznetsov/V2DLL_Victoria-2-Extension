// FUN_007d04d0 @ 007d04d0 body=[[007d04d0, 007d05f9]]


void FUN_007d04d0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  
  iVar3 = in_ECX;
  while( true ) {
    iVar4 = iVar3 * 2 + 2;
    if (param_2 <= iVar4) break;
    if (*(float *)(param_1 + -0x40 + iVar4 * 0x44) < *(float *)(param_1 + 4 + iVar4 * 0x44)) {
      iVar4 = iVar3 * 2 + 1;
    }
    puVar1 = (undefined4 *)(param_1 + iVar4 * 0x44);
    puVar2 = (undefined4 *)(param_1 + iVar3 * 0x44);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    FUN_00408ed0(puVar1 + 3,0,0xffffffff);
    puVar2[0xb] = puVar1[0xb];
    *(undefined8 *)(puVar2 + 0xc) = *(undefined8 *)(puVar1 + 0xc);
    *(undefined8 *)(puVar2 + 0xe) = *(undefined8 *)(puVar1 + 0xe);
    *(undefined1 *)(puVar2 + 0x10) = *(undefined1 *)(puVar1 + 0x10);
    iVar3 = iVar4;
  }
  if (iVar4 == param_2) {
    puVar2 = (undefined4 *)(param_1 + -0x44 + param_2 * 0x44);
    puVar1 = (undefined4 *)(param_1 + iVar3 * 0x44);
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    FUN_00408ed0(puVar2 + 3,0,0xffffffff);
    puVar1[0xb] = puVar2[0xb];
    *(undefined8 *)(puVar1 + 0xc) = *(undefined8 *)(puVar2 + 0xc);
    *(undefined8 *)(puVar1 + 0xe) = *(undefined8 *)(puVar2 + 0xe);
    *(undefined1 *)(puVar1 + 0x10) = *(undefined1 *)(puVar2 + 0x10);
  }
  FUN_007d17b0(param_1,in_ECX,param_3,param_4);
  return;
}

