// FUN_00415620 @ 00415620 body=[[00415620, 0041577d]]


void FUN_00415620(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined4 in_EDX;
  float fVar3;
  undefined4 uVar4;
  float local_1c;
  
  uVar4 = 0;
  iVar1 = *(int *)(param_1 + 0x5c);
  switch(in_EDX) {
  case 0:
    local_1c = *(float *)(iVar1 + 0x1d4);
    uVar4 = *(undefined4 *)(iVar1 + 0x1dc);
    fVar3 = *(float *)(iVar1 + 0x1d8);
    break;
  case 1:
    local_1c = *(float *)(iVar1 + 0x1b4);
    fVar3 = *(float *)(iVar1 + 0x1b8);
    break;
  case 2:
    local_1c = *(float *)(iVar1 + 0x54);
    fVar3 = *(float *)(iVar1 + 0x58);
    break;
  case 3:
    local_1c = *(float *)(iVar1 + 0x1c4);
    fVar3 = *(float *)(iVar1 + 0x1c8);
    break;
  default:
    local_1c = *(float *)(iVar1 + 100);
    fVar3 = *(float *)(iVar1 + 0x68);
  }
  iVar2 = *(int *)(iVar1 + 0x78);
  *(ulonglong *)(in_ECX + 4) = (ulonglong)(uint)(local_1c - (float)*(int *)(iVar1 + 0x74));
  *(float *)(in_ECX + 0xc) = fVar3 - (float)iVar2;
  *(undefined4 *)(in_ECX + 0x10) = uVar4;
  return;
}

